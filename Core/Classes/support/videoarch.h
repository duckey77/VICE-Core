/*
 Copyright (c) 2016, OpenEmu Team
 
 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:
 * Redistributions of source code must retain the above copyright
 notice, this list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright
 notice, this list of conditions and the following disclaimer in the
 documentation and/or other materials provided with the distribution.
 * Neither the name of the OpenEmu Team nor the
 names of its contributors may be used to endorse or promote products
 derived from this software without specific prior written permission.
 
 THIS SOFTWARE IS PROVIDED BY OpenEmu Team ''AS IS'' AND ANY
 EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL OpenEmu Team BE LIABLE FOR ANY
 DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */


#ifndef videoarch_h
#define videoarch_h

#define MAX_CANVAS_NUM 2

#include "video.h"

/* custom canvas structure for MacVICE */
struct video_canvas_s
{
    unsigned int initialized;
    unsigned int created;

    /* Index of the canvas, needed for x128 and xcbm2 */
    int index;

     /* Size of the drawable canvas area, including the black borders */
    unsigned int width, height, depth;
    /* Size of the canvas as requested by the emulator itself */
    unsigned int real_width, real_height;
    /* Actual size of the window; in most cases the same as width/height */
    unsigned int actual_width, actual_height;

    struct video_render_config_s *videoconfig;
    struct draw_buffer_s *draw_buffer;
    struct viewport_s *viewport;
    struct geometry_s *geometry;
    struct palette_s *palette;
    struct video_resource_chip_s *video_resource_chip;
    struct video_draw_buffer_callback_s *video_draw_buffer_callback;

    // custom here
    int pitch;                  /* pitch width of scanline in byte */
};
typedef struct video_canvas_s video_canvas_t;


#endif /* videoarch_h */
