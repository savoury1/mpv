/*
 * This file is part of mpv.
 *
 * mpv is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * mpv is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with mpv.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef MAC_APPLICATION
#define MAC_APPLICATION

#include "osdep/mac/menubar.h"
#include "options/m_option.h"

enum {
    FRAME_VISIBLE = 0,
    FRAME_WHOLE,
};

enum {
    RENDER_TIMER_CALLBACK = 0,
    RENDER_TIMER_PRECISE,
    RENDER_TIMER_SYSTEM,
};

struct macos_opts {
    int macos_title_bar_appearance;
    int macos_title_bar_material;
    struct m_color macos_title_bar_color;
    int macos_fs_animation_duration;
    bool macos_force_dedicated_gpu;
    int macos_app_activation_policy;
    int macos_geometry_calculation;
    int macos_render_timer;
    int cocoa_cb_sw_renderer;
    bool cocoa_cb_10bit_context;
};

// multithreaded wrapper for mpv_main
int cocoa_main(int argc, char *argv[]);
void cocoa_register_menu_item_action(MPMenuKey key, void* action);

extern const struct m_sub_options macos_conf;

#endif /* MAC_APPLICATION */
