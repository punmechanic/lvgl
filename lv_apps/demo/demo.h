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
#include "../../../lv_ex_conf.h"

#if USE_LV_DEMO
#include "lvgl/lv_hal/lv_hal.h"
#include "../../../lvgl/lvgl.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**
 * Create a demo application
 */
void demo_create(lv_indev_t * kp_indev);

/**********************
 *      MACROS
 **********************/

#endif /*USE_LV_DEMO*/

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*DEMO_H*/
