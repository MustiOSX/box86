#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error meh!
#endif

//GO(gdk_add_client_message_filter, 
//GO(gdk_add_option_entries_libgtk_only, 
//GO(gdk_app_launch_context_get_type, 
//GO(gdk_app_launch_context_new, 
//GO(gdk_app_launch_context_set_desktop, 
//GO(gdk_app_launch_context_set_display, 
//GO(gdk_app_launch_context_set_icon, 
//GO(gdk_app_launch_context_set_icon_name, 
//GO(gdk_app_launch_context_set_screen, 
//GO(gdk_app_launch_context_set_timestamp, 
//GO(gdk_atom_intern, 
//GO(gdk_atom_intern_static_string, 
//GO(gdk_atom_name, 
//GO(gdk_axis_use_get_type, 
//GO(gdk_beep, 
//GO(gdk_bitmap_create_from_data, 
//GO(gdk_byte_order_get_type, 
//GO(gdk_cairo_create, 
//GO(gdk_cairo_rectangle, 
//GO(gdk_cairo_region, 
//GO(gdk_cairo_reset_clip, 
//GO(gdk_cairo_set_source_color, 
//GO(gdk_cairo_set_source_pixbuf, 
//GO(gdk_cairo_set_source_pixmap, 
//GO(gdk_cairo_set_source_window, 
//GO(gdk_cap_style_get_type, 
//GO(gdk_char_height, 
//GO(gdk_char_measure, 
//GO(gdk_char_width, 
//GO(gdk_char_width_wc, 
//GO(gdk_color_alloc, 
//GO(gdk_color_black, 
//GO(gdk_color_change, 
//GO(gdk_color_copy, 
//GO(gdk_color_equal, 
//GO(gdk_color_free, 
//GO(gdk_color_get_type, 
//GO(gdk_color_hash, 
//GO(gdk_colormap_alloc_color, 
//GO(gdk_colormap_alloc_colors, 
//GO(gdk_colormap_change, 
//GO(gdk_colormap_free_colors, 
//GO(gdk_colormap_get_screen, 
//GO(gdk_colormap_get_system, 
//GO(gdk_colormap_get_system_size, 
//GO(gdk_colormap_get_type, 
//GO(gdk_colormap_get_visual, 
//GO(gdk_colormap_new, 
//GO(gdk_colormap_query_color, 
//GO(gdk_colormap_ref, 
//GO(gdk_colormap_unref, 
//GO(gdk_color_parse, 
//GO(gdk_colors_alloc, 
//GO(gdk_colors_free, 
//GO(gdk_colors_store, 
//GO(gdk_color_to_string, 
//GO(gdk_color_white, 
//GO(gdk_crossing_mode_get_type, 
//GO(gdk_cursor_get_cursor_type, 
//GO(gdk_cursor_get_display, 
//GO(gdk_cursor_get_image, 
//GO(gdk_cursor_get_type, 
//GO(gdk_cursor_new, 
//GO(gdk_cursor_new_for_display, 
//GO(gdk_cursor_new_from_name, 
//GO(gdk_cursor_new_from_pixbuf, 
//GO(gdk_cursor_new_from_pixmap, 
//GO(gdk_cursor_ref, 
//GO(gdk_cursor_type_get_type, 
//GO(gdk_cursor_unref, 
//GO(gdk_device_free_history, 
//GO(gdk_device_get_axis, 
//GO(gdk_device_get_axis_use, 
//GO(gdk_device_get_core_pointer, 
//GO(gdk_device_get_has_cursor, 
//GO(gdk_device_get_history, 
//GO(gdk_device_get_key, 
//GO(gdk_device_get_mode, 
//GO(gdk_device_get_name, 
//GO(gdk_device_get_n_axes, 
//GO(gdk_device_get_n_keys, 
//GO(gdk_device_get_source, 
//GO(gdk_device_get_state, 
//GO(gdk_device_get_type, 
//GO(gdk_device_set_axis_use, 
//GO(gdk_device_set_key, 
//GO(gdk_device_set_mode, 
//GO(gdk_device_set_source, 
//GO(gdk_devices_list, 
//GO(gdk_display_add_client_message_filter, 
//GO(gdk_display_beep, 
//GO(gdk_display_close, 
//GO(gdk_display_flush, 
//GO(gdk_display_get_core_pointer, 
//GO(gdk_display_get_default, 
//GO(gdk_display_get_default_cursor_size, 
//GO(gdk_display_get_default_group, 
//GO(gdk_display_get_default_screen, 
//GO(gdk_display_get_event, 
//GO(gdk_display_get_maximal_cursor_size, 
//GO(gdk_display_get_name, 
//GO(gdk_display_get_n_screens, 
//GO(gdk_display_get_pointer, 
//GO(gdk_display_get_screen, 
//GO(gdk_display_get_type, 
//GO(gdk_display_get_window_at_pointer, 
//GO(gdk_display_is_closed, 
//GO(gdk_display_keyboard_ungrab, 
//GO(gdk_display_list_devices, 
//GO(gdk_display_manager_get, 
//GO(gdk_display_manager_get_default_display, 
//GO(gdk_display_manager_get_type, 
//GO(gdk_display_manager_list_displays, 
//GO(gdk_display_manager_set_default_display, 
//GO(gdk_display_open, 
//GO(gdk_display_open_default_libgtk_only, 
//GO(gdk_display_peek_event, 
//GO(gdk_display_pointer_is_grabbed, 
//GO(gdk_display_pointer_ungrab, 
//GO(gdk_display_put_event, 
//GO(gdk_display_request_selection_notification, 
//GO(gdk_display_set_double_click_distance, 
//GO(gdk_display_set_double_click_time, 
//GO(gdk_display_set_pointer_hooks, 
//GO(gdk_display_store_clipboard, 
//GO(gdk_display_supports_clipboard_persistence, 
//GO(gdk_display_supports_composite, 
//GO(gdk_display_supports_cursor_alpha, 
//GO(gdk_display_supports_cursor_color, 
//GO(gdk_display_supports_input_shapes, 
//GO(gdk_display_supports_selection_notification, 
//GO(gdk_display_supports_shapes, 
//GO(gdk_display_sync, 
//GO(gdk_display_warp_pointer, 
//GO(gdk_drag_abort, 
//GO(gdk_drag_action_get_type, 
//GO(gdk_drag_begin, 
//GO(gdk_drag_context_get_actions, 
//GO(gdk_drag_context_get_dest_window, 
//GO(gdk_drag_context_get_protocol, 
//GO(gdk_drag_context_get_selected_action, 
//GO(gdk_drag_context_get_source_window, 
//GO(gdk_drag_context_get_suggested_action, 
//GO(gdk_drag_context_get_type, 
//GO(gdk_drag_context_list_targets, 
//GO(gdk_drag_context_new, 
//GO(gdk_drag_context_ref, 
//GO(gdk_drag_context_unref, 
//GO(gdk_drag_drop, 
//GO(gdk_drag_drop_succeeded, 
//GO(gdk_drag_find_window, 
//GO(gdk_drag_find_window_for_screen, 
//GO(gdk_drag_get_protocol, 
//GO(gdk_drag_get_protocol_for_display, 
//GO(gdk_drag_get_selection, 
//GO(gdk_drag_motion, 
//GO(gdk_drag_protocol_get_type, 
//GO(gdk_drag_status, 
//GO(gdk_drawable_copy_to_image, 
//GO(gdk_drawable_get_clip_region, 
//GO(gdk_drawable_get_colormap, 
GO(gdk_drawable_get_data, pFpp)
//GO(gdk_drawable_get_depth, 
GO(gdk_drawable_get_display, pFp)
//GO(gdk_drawable_get_image, 
GO(gdk_drawable_get_screen, pFp)
//GO(gdk_drawable_get_size, 
GO(gdk_drawable_get_type, iFv)
//GO(gdk_drawable_get_visible_region, 
GO(gdk_drawable_get_visual, pFp)
//GO(gdk_drawable_ref, 
//GO(gdk_drawable_set_colormap, 
//GO(gdk_drawable_set_data, 
//GO(gdk_drawable_unref, 
//GO(gdk_draw_arc, 
//GO(gdk_draw_drawable, 
//GO(gdk_draw_glyphs, 
//GO(gdk_draw_glyphs_transformed, 
//GO(gdk_draw_gray_image, 
//GO(gdk_draw_image, 
//GO(gdk_draw_indexed_image, 
//GO(gdk_draw_layout, 
//GO(gdk_draw_layout_line, 
//GO(gdk_draw_layout_line_with_colors, 
//GO(gdk_draw_layout_with_colors, 
//GO(gdk_draw_line, 
//GO(gdk_draw_lines, 
//GO(gdk_draw_pixbuf, 
//GO(gdk_draw_point, 
//GO(gdk_draw_points, 
//GO(gdk_draw_polygon, 
//GO(gdk_draw_rectangle, 
//GO(gdk_draw_rgb_32_image, 
//GO(gdk_draw_rgb_32_image_dithalign, 
//GO(gdk_draw_rgb_image, 
//GO(gdk_draw_rgb_image_dithalign, 
//GO(gdk_draw_segments, 
//GO(gdk_draw_string, 
//GO(gdk_draw_text, 
//GO(gdk_draw_text_wc, 
//GO(gdk_draw_trapezoids, 
//GO(gdk_drop_finish, 
//GO(gdk_drop_reply, 
//GO(gdk_error_trap_pop, 
//GO(gdk_error_trap_push, 
//GO(gdk_event_copy, 
//GO(gdk_event_free, 
//GO(gdk_event_get, 
//GO(gdk_event_get_axis, 
//GO(gdk_event_get_coords, 
//GO(gdk_event_get_graphics_expose, 
//GO(gdk_event_get_root_coords, 
//GO(gdk_event_get_screen, 
//GO(gdk_event_get_state, 
//GO(gdk_event_get_time, 
//GO(gdk_event_get_type, 
//GO(gdk_event_handler_set, 
//GO(gdk_event_mask_get_type, 
//GO(gdk_event_new, 
//GO(gdk_event_peek, 
//GO(gdk_event_put, 
//GO(gdk_event_request_motions, 
//GO(gdk_event_send_client_message, 
//GO(gdk_event_send_client_message_for_display, 
//GO(gdk_event_send_clientmessage_toall, 
//GO(gdk_event_set_screen, 
//GO(gdk_events_pending, 
//GO(gdk_event_type_get_type, 
//GO(gdk_exit, 
//GO(gdk_extension_mode_get_type, 
//GO(gdk_fill_get_type, 
//GO(gdk_fill_rule_get_type, 
//GO(gdk_filter_return_get_type, 
GO(gdk_flush, vFv)
//GO(gdk_font_equal, 
//GO(gdk_font_from_description, 
//GO(gdk_font_from_description_for_display, 
//GO(gdk_font_get_display, 
//GO(gdk_font_get_type, 
//GO(gdk_font_id, 
//GO(gdk_font_load, 
//GO(gdk_font_load_for_display, 
//GO(gdk_font_ref, 
//GO(gdk_fontset_load, 
//GO(gdk_fontset_load_for_display, 
//GO(gdk_font_type_get_type, 
//GO(gdk_font_unref, 
//GO(gdk_free_compound_text, 
//GO(gdk_free_text_list, 
//GO(gdk_function_get_type, 
//GO(gdk_gc_copy, 
//GO(gdk_gc_get_colormap, 
//GO(gdk_gc_get_screen, 
//GO(gdk_gc_get_type, 
//GO(gdk_gc_get_values, 
//GO(gdk_gc_new, 
//GO(gdk_gc_new_with_values, 
//GO(gdk_gc_offset, 
//GO(gdk_gc_ref, 
//GO(gdk_gc_set_background, 
//GO(gdk_gc_set_clip_mask, 
//GO(gdk_gc_set_clip_origin, 
//GO(gdk_gc_set_clip_rectangle, 
//GO(gdk_gc_set_clip_region, 
//GO(gdk_gc_set_colormap, 
//GO(gdk_gc_set_dashes, 
//GO(gdk_gc_set_exposures, 
//GO(gdk_gc_set_fill, 
//GO(gdk_gc_set_font, 
//GO(gdk_gc_set_foreground, 
//GO(gdk_gc_set_function, 
//GO(gdk_gc_set_line_attributes, 
//GO(gdk_gc_set_rgb_bg_color, 
//GO(gdk_gc_set_rgb_fg_color, 
//GO(gdk_gc_set_stipple, 
//GO(gdk_gc_set_subwindow, 
//GO(gdk_gc_set_tile, 
//GO(gdk_gc_set_ts_origin, 
//GO(gdk_gc_set_values, 
//GO(gdk_gc_unref, 
//GO(gdk_gc_values_mask_get_type, 
//GO(gdk_get_default_root_window, 
//GO(gdk_get_display, 
//GO(gdk_get_display_arg_name, 
//GO(gdk_get_program_class, 
//GO(gdk_get_show_events, 
//GO(gdk_get_use_xshm, 
//GO(gdk_grab_status_get_type, 
//GO(gdk_gravity_get_type, 
//GO(gdk_image_get, 
//GO(gdk_image_get_bits_per_pixel, 
//GO(gdk_image_get_byte_order, 
//GO(gdk_image_get_bytes_per_line, 
//GO(gdk_image_get_bytes_per_pixel, 
//GO(gdk_image_get_colormap, 
//GO(gdk_image_get_depth, 
//GO(gdk_image_get_height, 
//GO(gdk_image_get_image_type, 
//GO(gdk_image_get_pixel, 
//GO(gdk_image_get_pixels, 
//GO(gdk_image_get_type, 
//GO(gdk_image_get_visual, 
//GO(gdk_image_get_width, 
//GO(gdk_image_new, 
//GO(gdk_image_new_bitmap, 
//GO(gdk_image_put_pixel, 
//GO(gdk_image_ref, 
//GO(gdk_image_set_colormap, 
//GO(gdk_image_type_get_type, 
//GO(gdk_image_unref, 
//GO(gdk_init, 
//GO(gdk_init_check, 
//GO(gdk_input_add, 
//GO(gdk_input_add_full, 
//GO(gdk_input_condition_get_type, 
//GO(gdk_input_mode_get_type, 
//GO(gdk_input_remove, 
//GO(gdk_input_set_extension_events, 
//GO(gdk_input_source_get_type, 
//GO(gdk_join_style_get_type, 
//GO(gdk_keyboard_grab, 
//GO(gdk_keyboard_grab_info_libgtk_only, 
//GO(gdk_keyboard_ungrab, 
//GO(gdk_keymap_add_virtual_modifiers, 
//GO(gdk_keymap_get_caps_lock_state, 
//GO(gdk_keymap_get_default, 
//GO(gdk_keymap_get_direction, 
//GO(gdk_keymap_get_entries_for_keycode, 
//GO(gdk_keymap_get_entries_for_keyval, 
//GO(gdk_keymap_get_for_display, 
//GO(gdk_keymap_get_type, 
//GO(gdk_keymap_have_bidi_layouts, 
//GO(gdk_keymap_lookup_key, 
//GO(gdk_keymap_map_virtual_modifiers, 
//GO(gdk_keymap_translate_keyboard_state, 
//GO(gdk_keyval_convert_case, 
//GO(gdk_keyval_from_name, 
//GO(gdk_keyval_is_lower, 
//GO(gdk_keyval_is_upper, 
//GO(gdk_keyval_name, 
//GO(gdk_keyval_to_lower, 
//GO(gdk_keyval_to_unicode, 
//GO(gdk_keyval_to_upper, 
//GO(gdk_line_style_get_type, 
//GO(gdk_list_visuals, 
//GO(gdk_mbstowcs, 
//GO(gdk_modifier_type_get_type, 
//GO(gdk_net_wm_supports, 
//GO(gdk_notify_startup_complete, 
//GO(gdk_notify_startup_complete_with_id, 
//GO(gdk_notify_type_get_type, 
//GO(gdk_offscreen_window_get_embedder, 
//GO(gdk_offscreen_window_get_pixmap, 
//GO(gdk_offscreen_window_get_type, 
//GO(gdk_offscreen_window_set_embedder, 
GO(gdk_overlap_type_get_type, iFv)
GO(gdk_owner_change_get_type, iFv)
GO(gdk_pango_attr_emboss_color_new, pFp)
GO(gdk_pango_attr_embossed_new, pFi)
GO(gdk_pango_attr_stipple_new, pFp)
GO(gdk_pango_context_get, pFv)
GO(gdk_pango_context_get_for_screen, pFp)
GO(gdk_pango_context_set_colormap, vFpp)
GO(gdk_pango_layout_get_clip_region, pFpiipi)
GO(gdk_pango_layout_line_get_clip_region, pFpiipi)
GO(gdk_pango_renderer_get_default, pFp)
GO(gdk_pango_renderer_get_type, iFv)
GO(gdk_pango_renderer_new, pFp)
GO(gdk_pango_renderer_set_drawable, vFpp)
GO(gdk_pango_renderer_set_gc, vFpp)
GO(gdk_pango_renderer_set_override_color, vFpip)
GO(gdk_pango_renderer_set_stipple, vFpip)
//GO(gdk_parse_args, 
//GO(gdk_pixbuf_get_from_drawable, 
//GO(gdk_pixbuf_get_from_image, 
//GO(gdk_pixbuf_render_pixmap_and_mask, 
//GO(gdk_pixbuf_render_pixmap_and_mask_for_colormap, 
//GO(gdk_pixbuf_render_threshold_alpha, 
//GO(gdk_pixbuf_render_to_drawable, 
//GO(gdk_pixbuf_render_to_drawable_alpha, 
//GO(gdk_pixmap_colormap_create_from_xpm, 
//GO(gdk_pixmap_colormap_create_from_xpm_d, 
//GO(gdk_pixmap_create_from_data, 
//GO(gdk_pixmap_create_from_xpm, 
//GO(gdk_pixmap_create_from_xpm_d, 
//GO(gdk_pixmap_foreign_new, 
//GO(gdk_pixmap_foreign_new_for_display, 
//GO(gdk_pixmap_foreign_new_for_screen, 
//GO(gdk_pixmap_get_size, 
//GO(gdk_pixmap_get_type, 
//GO(gdk_pixmap_impl_x11_get_type, 
//GO(gdk_pixmap_lookup, 
//GO(gdk_pixmap_lookup_for_display, 
//GO(gdk_pixmap_new, 
//GO(gdk_pointer_grab, 
//GO(gdk_pointer_grab_info_libgtk_only, 
//GO(gdk_pointer_is_grabbed, 
//GO(gdk_pointer_ungrab, 
//GO(gdk_pre_parse_libgtk_only, 
//GO(gdk_property_change, 
//GO(gdk_property_delete, 
//GO(gdk_property_get, 
//GO(gdk_property_state_get_type, 
//GO(gdk_prop_mode_get_type, 
//GO(gdk_query_depths, 
//GO(gdk_query_visual_types, 
GO(gdk_rectangle_get_type, iFv)
GO(gdk_rectangle_intersect, iFppp)
GO(gdk_rectangle_union, vFppp)
GO(gdk_region_copy, pFp)
GO(gdk_region_destroy, vFpp)
GO(gdk_region_empty, iFp)
GO(gdk_region_equal, iFpp)
GO(gdk_region_get_clipbox, vFpp)
GO(gdk_region_get_rectangles, vFppp)
GO(gdk_region_intersect, vFpp)
GO(gdk_region_new, pFv)
GO(gdk_region_offset, vFpii)
GO(gdk_region_point_in, iFpii)
GO(gdk_region_polygon, pFpii)
GO(gdk_region_rectangle, pFp)
GO(gdk_region_rect_equal, iFpp)
GO(gdk_region_rect_in, iFpp)
GO(gdk_region_shrink, vFpii)
//GOM(gdk_region_spans_intersect_foreach, vFppiiBp)
GO(gdk_region_subtract, vFpp)
GO(gdk_region_union, vFpp)
GO(gdk_region_union_with_rect, vFpp)
GO(gdk_region_xor, vFpp)
//GO(gdk_rgb_cmap_free, 
//GO(gdk_rgb_cmap_new, 
//GO(gdk_rgb_colormap_ditherable, 
//GO(gdk_rgb_ditherable, 
//GO(gdk_rgb_dither_get_type, 
//GO(gdk_rgb_find_color, 
//GO(gdk_rgb_gc_set_background, 
//GO(gdk_rgb_gc_set_foreground, 
//GO(gdk_rgb_get_colormap, 
//GO(gdk_rgb_get_visual, 
//GO(gdk_rgb_init, 
//GO(gdk_rgb_set_install, 
//GO(gdk_rgb_set_min_colors, 
//GO(gdk_rgb_set_verbose, 
//GO(gdk_rgb_xpixel_from_rgb, 
//GO(gdk_screen_broadcast_client_message, 
//GO(gdk_screen_get_active_window, 
//GO(gdk_screen_get_default, 
//GO(gdk_screen_get_default_colormap, 
//GO(gdk_screen_get_display, 
//GO(gdk_screen_get_font_options, 
//GO(gdk_screen_get_height, 
//GO(gdk_screen_get_height_mm, 
//GO(gdk_screen_get_monitor_at_point, 
//GO(gdk_screen_get_monitor_at_window, 
//GO(gdk_screen_get_monitor_geometry, 
//GO(gdk_screen_get_monitor_height_mm, 
//GO(gdk_screen_get_monitor_plug_name, 
//GO(gdk_screen_get_monitor_width_mm, 
//GO(gdk_screen_get_n_monitors, 
//GO(gdk_screen_get_number, 
//GO(gdk_screen_get_primary_monitor, 
//GO(gdk_screen_get_resolution, 
//GO(gdk_screen_get_rgba_colormap, 
//GO(gdk_screen_get_rgba_visual, 
//GO(gdk_screen_get_rgb_colormap, 
//GO(gdk_screen_get_rgb_visual, 
//GO(gdk_screen_get_root_window, 
//GO(gdk_screen_get_setting, 
//GO(gdk_screen_get_system_colormap, 
//GO(gdk_screen_get_system_visual, 
//GO(gdk_screen_get_toplevel_windows, 
//GO(gdk_screen_get_type, 
//GO(gdk_screen_get_width, 
//GO(gdk_screen_get_width_mm, 
//GO(gdk_screen_get_window_stack, 
GO(gdk_screen_height, iFv)
GO(gdk_screen_height_mm, iFv)
//GO(gdk_screen_is_composited, 
//GO(gdk_screen_list_visuals, 
//GO(gdk_screen_make_display_name, 
//GO(gdk_screen_set_default_colormap, 
//GO(gdk_screen_set_font_options, 
//GO(gdk_screen_set_resolution, 
GO(gdk_screen_width, iFv)
GO(gdk_screen_width_mm, iFv)
//GO(gdk_scroll_direction_get_type, 
//GO(gdk_selection_convert, 
//GO(gdk_selection_owner_get, 
//GO(gdk_selection_owner_get_for_display, 
//GO(gdk_selection_owner_set, 
//GO(gdk_selection_owner_set_for_display, 
//GO(gdk_selection_property_get, 
//GO(gdk_selection_send_notify, 
//GO(gdk_selection_send_notify_for_display, 
//GO(gdk_set_double_click_time, 
//GO(gdk_set_locale, 
//GO(gdk_set_pointer_hooks, 
//GO(gdk_set_program_class, 
//GO(gdk_set_show_events, 
//GO(gdk_set_sm_client_id, 
//GO(gdk_setting_action_get_type, 
//GO(gdk_setting_get, 
//GO(gdk_set_use_xshm, 
//GO(gdk_spawn_command_line_on_screen, 
//GO(gdk_spawn_on_screen, 
//GO(gdk_spawn_on_screen_with_pipes, 
//GO(gdk_status_get_type, 
//GO(gdk_string_extents, 
//GO(gdk_string_height, 
//GO(gdk_string_measure, 
//GO(gdk_string_to_compound_text, 
//GO(gdk_string_to_compound_text_for_display, 
//GO(gdk_string_width, 
//GO(gdk_subwindow_mode_get_type, 
//GO(gdk_synthesize_window_state, 
//GO(gdk_test_render_sync, 
//GO(gdk_test_simulate_button, 
//GO(gdk_test_simulate_key, 
//GO(gdk_text_extents, 
//GO(gdk_text_extents_wc, 
//GO(gdk_text_height, 
//GO(gdk_text_measure, 
//GO(gdk_text_property_to_text_list, 
//GO(gdk_text_property_to_text_list_for_display, 
//GO(gdk_text_property_to_utf8_list, 
//GO(gdk_text_property_to_utf8_list_for_display, 
//GO(gdk_text_width, 
//GO(gdk_text_width_wc, 
//GO(gdk_threads_add_idle, 
//GO(gdk_threads_add_idle_full, 
//GO(gdk_threads_add_timeout, 
//GO(gdk_threads_add_timeout_full, 
//GO(gdk_threads_add_timeout_seconds, 
//GO(gdk_threads_add_timeout_seconds_full, 
//GO(gdk_threads_enter, 
//GO(gdk_threads_init, 
//GO(gdk_threads_leave, 
//GO(gdk_threads_set_lock_functions, 
//GO(gdk_unicode_to_keyval, 
//GO(gdk_utf8_to_compound_text, 
//GO(gdk_utf8_to_compound_text_for_display, 
//GO(gdk_utf8_to_string_target, 
//GO(gdk_visibility_state_get_type, 
//GO(gdk_visual_get_best, 
//GO(gdk_visual_get_best_depth, 
//GO(gdk_visual_get_best_type, 
//GO(gdk_visual_get_best_with_both, 
//GO(gdk_visual_get_best_with_depth, 
//GO(gdk_visual_get_best_with_type, 
//GO(gdk_visual_get_bits_per_rgb, 
//GO(gdk_visual_get_blue_pixel_details, 
//GO(gdk_visual_get_byte_order, 
//GO(gdk_visual_get_colormap_size, 
//GO(gdk_visual_get_depth, 
//GO(gdk_visual_get_green_pixel_details, 
//GO(gdk_visual_get_red_pixel_details, 
//GO(gdk_visual_get_screen, 
//GO(gdk_visual_get_system, 
//GO(gdk_visual_get_type, 
//GO(gdk_visual_get_visual_type, 
//GO(gdk_visual_type_get_type, 
//GO(gdk_wcstombs, 
//GO(gdk_window_add_filter, 
//GO(gdk_window_at_pointer, 
//GO(gdk_window_attributes_type_get_type, 
//GO(gdk_window_beep, 
//GO(gdk_window_begin_move_drag, 
//GO(gdk_window_begin_paint_rect, 
//GO(gdk_window_begin_paint_region, 
//GO(gdk_window_begin_resize_drag, 
//GO(gdk_window_class_get_type, 
//GO(gdk_window_clear, 
//GO(gdk_window_clear_area, 
//GO(gdk_window_clear_area_e, 
//GO(gdk_window_configure_finished, 
//GO(gdk_window_constrain_size, 
//GO(gdk_window_coords_from_parent, 
//GO(gdk_window_coords_to_parent, 
//GO(gdk_window_create_similar_surface, 
//GO(gdk_window_deiconify, 
//GO(gdk_window_destroy, 
//GO(gdk_window_destroy_notify, 
//GO(gdk_window_edge_get_type, 
//GO(gdk_window_enable_synchronized_configure, 
//GO(gdk_window_end_paint, 
//GO(gdk_window_ensure_native, 
//GO(gdk_window_flush, 
//GO(gdk_window_focus, 
//GO(gdk_window_foreign_new, 
GO(gdk_window_foreign_new_for_display, pFpp)
//GO(gdk_window_freeze_toplevel_updates_libgtk_only, 
//GO(gdk_window_freeze_updates, 
//GO(gdk_window_fullscreen, 
//GO(gdk_window_geometry_changed, 
//GO(gdk_window_get_accept_focus, 
//GO(gdk_window_get_background_pattern, 
//GO(gdk_window_get_children, 
//GO(gdk_window_get_composited, 
//GO(gdk_window_get_cursor, 
//GO(gdk_window_get_decorations, 
//GO(gdk_window_get_deskrelative_origin, 
//GO(gdk_window_get_display, 
//GO(gdk_window_get_effective_parent, 
//GO(gdk_window_get_effective_toplevel, 
//GO(gdk_window_get_events, 
//GO(gdk_window_get_focus_on_map, 
//GO(gdk_window_get_frame_extents, 
//GO(gdk_window_get_geometry, 
//GO(gdk_window_get_group, 
//GO(gdk_window_get_height, 
//GO(gdk_window_get_internal_paint_info, 
//GO(gdk_window_get_modal_hint, 
//GO(gdk_window_get_origin, 
//GO(gdk_window_get_parent, 
//GO(gdk_window_get_pointer, 
//GO(gdk_window_get_position, 
//GO(gdk_window_get_root_coords, 
//GO(gdk_window_get_root_origin, 
//GO(gdk_window_get_screen, 
//GO(gdk_window_get_state, 
//GO(gdk_window_get_toplevel, 
//GO(gdk_window_get_toplevels, 
//GO(gdk_window_get_type_hint, 
//GO(gdk_window_get_update_area, 
//GO(gdk_window_get_user_data, 
//GO(gdk_window_get_visual, 
//GO(gdk_window_get_width, 
//GO(gdk_window_get_window_type, 
//GO(gdk_window_has_native, 
//GO(gdk_window_hide, 
//GO(gdk_window_hints_get_type, 
//GO(gdk_window_iconify, 
//GO(gdk_window_impl_get_type, 
//GO(gdk_window_impl_x11_get_type, 
//GO(gdk_window_input_shape_combine_mask, 
//GO(gdk_window_input_shape_combine_region, 
//GO(gdk_window_invalidate_maybe_recurse, 
//GO(gdk_window_invalidate_rect, 
//GO(gdk_window_invalidate_region, 
//GO(gdk_window_is_destroyed, 
//GO(gdk_window_is_input_only, 
//GO(gdk_window_is_shaped, 
//GO(gdk_window_is_viewable, 
//GO(gdk_window_is_visible, 
//GO(gdk_window_lookup, 
GO(gdk_window_lookup_for_display, pFpp)
//GO(gdk_window_lower, 
//GO(gdk_window_maximize, 
//GO(gdk_window_merge_child_input_shapes, 
//GO(gdk_window_merge_child_shapes, 
//GO(gdk_window_move, 
//GO(gdk_window_move_region, 
//GO(gdk_window_move_resize, 
//GO(gdk_window_new, 
GO(gdk_window_object_get_type, iFv)
//GO(gdk_window_peek_children, 
//GO(gdk_window_process_all_updates, 
//GO(gdk_window_process_updates, 
//GO(gdk_window_raise, 
//GO(gdk_window_redirect_to_drawable, 
//GO(gdk_window_register_dnd, 
//GO(gdk_window_remove_filter, 
//GO(gdk_window_remove_redirection, 
//GO(gdk_window_reparent, 
//GO(gdk_window_resize, 
//GO(gdk_window_restack, 
//GO(gdk_window_scroll, 
//GO(gdk_window_set_accept_focus, 
//GO(gdk_window_set_background, 
//GO(gdk_window_set_back_pixmap, 
//GO(gdk_window_set_child_input_shapes, 
//GO(gdk_window_set_child_shapes, 
//GO(gdk_window_set_composited, 
//GO(gdk_window_set_cursor, 
//GO(gdk_window_set_debug_updates, 
//GO(gdk_window_set_decorations, 
//GO(gdk_window_set_events, 
//GO(gdk_window_set_focus_on_map, 
//GO(gdk_window_set_functions, 
//GO(gdk_window_set_geometry_hints, 
//GO(gdk_window_set_group, 
//GO(gdk_window_set_hints, 
//GO(gdk_window_set_icon, 
//GO(gdk_window_set_icon_list, 
//GO(gdk_window_set_icon_name, 
//GO(gdk_window_set_keep_above, 
//GO(gdk_window_set_keep_below, 
//GO(gdk_window_set_modal_hint, 
//GO(gdk_window_set_opacity, 
//GO(gdk_window_set_override_redirect, 
//GO(gdk_window_set_role, 
//GO(gdk_window_set_skip_pager_hint, 
//GO(gdk_window_set_skip_taskbar_hint, 
//GO(gdk_window_set_startup_id, 
//GO(gdk_window_set_static_gravities, 
//GO(gdk_window_set_title, 
GO(gdk_window_set_transient_for, vFpp)
//GO(gdk_window_set_type_hint, 
//GO(gdk_window_set_urgency_hint, 
//GO(gdk_window_set_user_data, 
//GO(gdk_window_shape_combine_mask, 
//GO(gdk_window_shape_combine_region, 
//GO(gdk_window_show, 
//GO(gdk_window_show_unraised, 
//GO(gdk_window_state_get_type, 
//GO(gdk_window_stick, 
//GO(gdk_window_thaw_toplevel_updates_libgtk_only, 
//GO(gdk_window_thaw_updates, 
//GO(gdk_window_type_get_type, 
//GO(gdk_window_type_hint_get_type, 
//GO(gdk_window_unfullscreen, 
//GO(gdk_window_unmaximize, 
//GO(gdk_window_unstick, 
//GO(gdk_window_withdraw, 
//GO(gdk_wm_decoration_get_type, 
//GO(gdk_wm_function_get_type, 
//GO(gdk_x11_atom_to_xatom, 
//GO(gdk_x11_atom_to_xatom_for_display, 
//GO(gdk_x11_colormap_foreign_new, 
//GO(gdk_x11_colormap_get_xcolormap, 
//GO(gdk_x11_colormap_get_xdisplay, 
//GO(gdk_x11_cursor_get_xcursor, 
//GO(gdk_x11_cursor_get_xdisplay, 
//GO(gdk_x11_display_broadcast_startup_message, 
//GO(gdk_x11_display_get_startup_notification_id, 
//GO(gdk_x11_display_get_user_time, 
//GO(gdk_x11_display_get_xdisplay, 
//GO(gdk_x11_display_grab, 
//GO(gdk_x11_display_set_cursor_theme, 
//GO(gdk_x11_display_string_to_compound_text, 
//GO(gdk_x11_display_text_property_to_text_list, 
//GO(gdk_x11_display_ungrab, 
//GO(gdk_x11_display_utf8_to_compound_text, 
//GO(gdk_x11_drawable_get_xdisplay, 
//GO(gdk_x11_drawable_get_xid, 
//GO(gdk_x11_font_get_name, 
//GO(gdk_x11_font_get_xdisplay, 
//GO(gdk_x11_font_get_xfont, 
//GO(gdk_x11_free_compound_text, 
//GO(gdk_x11_free_text_list, 
//GO(gdk_x11_gc_get_xdisplay, 
//GO(gdk_x11_gc_get_xgc, 
//GO(gdk_x11_get_default_root_xwindow, 
//GO(gdk_x11_get_default_screen, 
//GO(gdk_x11_get_default_xdisplay, 
//GO(gdk_x11_get_server_time, 
//GO(gdk_x11_get_xatom_by_name, 
//GO(gdk_x11_get_xatom_by_name_for_display, 
//GO(gdk_x11_get_xatom_name, 
//GO(gdk_x11_get_xatom_name_for_display, 
//GO(gdk_x11_grab_server, 
//GO(gdk_x11_image_get_xdisplay, 
//GO(gdk_x11_image_get_ximage, 
//GO(gdk_x11_lookup_xdisplay, 
//GO(gdk_x11_pixmap_get_drawable_impl, 
//GO(gdk_x11_register_standard_event_type, 
//GO(gdk_x11_screen_get_monitor_output, 
//GO(gdk_x11_screen_get_screen_number, 
//GO(gdk_x11_screen_get_window_manager_name, 
//GO(gdk_x11_screen_get_xscreen, 
//GO(gdk_x11_screen_lookup_visual, 
//GO(gdk_x11_screen_supports_net_wm_hint, 
//GO(gdk_x11_set_sm_client_id, 
//GO(gdk_x11_ungrab_server, 
//GO(gdk_x11_visual_get_xvisual, 
//GO(gdk_x11_window_foreign_new_for_display, 
//GO(gdk_x11_window_get_drawable_impl, 
//GO(gdk_x11_window_lookup_for_display, 
//GO(gdk_x11_window_move_to_current_desktop, 
//GO(gdk_x11_window_set_user_time, 
//GO(gdk_x11_xatom_to_atom, 
//GO(gdk_x11_xatom_to_atom_for_display, 
//GO(gdkx_colormap_get, 
//GO(gdk_xid_table_lookup, 
//GO(gdk_xid_table_lookup_for_display, 
//GO(gdkx_visual_get, 
