/*
 * Blit functions for air
 * SVGAlib version
 */

#include <air.h>
#include <flash.h>
#include <drwily.h>
#include <X11/Xlib.h>

#include "internal.h"

void air_blit(flash_image_t *sprite, int x, int y)
{
	int i;

	if(air_mode_type&AIR_8BPP) {
		drwily_blit8(air_vbuf->data, air_mode_w, air_mode_h,
		             sprite->data, sprite->width, sprite->height,
		             x, y);
	} else if(air_mode_type&AIR_16BPP) return;
	else if(air_mode_type&AIR_24BPP) return;
	return;
}

void air_vanillablit(flash_image_t *sprite, int x, int y)
{
	int i;

	if(air_mode_type&AIR_8BPP) {
		drwily_blit8noalpha(air_vbuf->data, air_mode_w, air_mode_h,
		             sprite->data, sprite->width, sprite->height,
		             x, y);
	} else if(air_mode_type&AIR_16BPP) return;
	else if(air_mode_type&AIR_24BPP) return;
	return;
}

/* EOF blit.c */