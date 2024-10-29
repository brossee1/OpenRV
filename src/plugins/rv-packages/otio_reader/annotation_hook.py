# *****************************************************************************
# Copyright 2024 Autodesk, Inc. All rights reserved.
#
# SPDX-License-Identifier: Apache-2.0
#
# *****************************************************************************


import effectHook
import opentimelineio as otio
from rv import commands, extra_commands


def hook_function(in_timeline, argument_map=None) -> None:
    for layer in in_timeline.layers:
        if layer.name == "Paint":
            if type(layer.layer_range) is otio._opentime.TimeRange:
                range = layer.layer_range
            else:
                range = otio.opentime.TimeRange(
                    layer.layer_range["start_time"], layer.layer_range["duration"]
                )

            relative_time = range.end_time_inclusive()
            frame = relative_time.to_frames()

            source_node = argument_map.get("source_group")
            paint_node = extra_commands.nodesInGroupOfType(source_node, "RVPaint")[0]
            paint_component = f"{paint_node}.paint"
            stroke_id = commands.getIntProperty(f"{paint_component}.nextId")[0]
            pen_component = f"{paint_node}.pen:{stroke_id}:{frame}:annotation"
            frame_component = f"{paint_node}.frame:{frame}"

            # Set properties on the paint component of the RVPaint node
            effectHook.set_rv_effect_props(
                paint_component, {"nextId": stroke_id + 1, "show": True}
            )

            # Add and set properties on the pen component of the RVPaint node
            effectHook.add_rv_effect_props(
                pen_component,
                {
                    "color": [float(x) for x in layer.rgba],
                    "brush": layer.brush,
                    "debug": 1,
                    "join": 3,
                    "cap": 2,
                    "splat": 1,
                    "mode": 0 if layer.type.lower() == "color" else 1,
                },
            )

            if not commands.propertyExists(f"{frame_component}.order"):
                commands.newProperty(f"{frame_component}.order", commands.StringType, 1)

            commands.insertStringProperty(
                f"{frame_component}.order", [f"pen:{stroke_id}:{frame}:annotation"]
            )

            global_scale = argument_map.get("global_scale")
            points_property = f"{pen_component}.points"
            width_property = f"{pen_component}.width"

            if not commands.propertyExists(points_property):
                commands.newProperty(points_property, commands.FloatType, 2)
            if not commands.propertyExists(width_property):
                commands.newProperty(width_property, commands.FloatType, 1)

            global_width = 2 / 15  # 0.133333...
            for point in layer.points:
                commands.insertFloatProperty(
                    points_property,
                    [point.x * global_scale.x, point.y * global_scale.y],
                )
                commands.insertFloatProperty(
                    width_property, [point.width * global_width]
                )