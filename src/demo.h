/**
 * @file demo.h
 *
 */

#ifndef DEMO_H
#define DEMO_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#ifdef LV_CONF_INCLUDE_SIMPLE
#include <lvgl.h>
#else
#include "../../../lvgl/lvgl.h"
#endif


/*********************
 *      DEFINES
 *********************/
#define LV_USE_DEMO1 0
#define LV_USE_DEMO2 0
#define LV_USE_DEMO3 0

#define LV_USE_DEMO5    0
#define LV_USE_DEMO6    1

#define LV_DEMO_WALLPAPER  1

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**
 * Create a demo application
 */
void demo1_create(void);//tab
void demo2_create(void);//simple button,persian font,SYMBOL,color
void demo3_create(void);//calender

void demo5_create(void);//menu
void demo6_create(void);//menu

/**********************
 *      MACROS
 **********************/

#endif /*USE_LV_DEMO*/

#ifdef __cplusplus
} /* extern "C" */
#endif
