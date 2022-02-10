/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "lvgl.h"
#include "app_hal.h"

#include "demo.h"
#include <stdio.h>
int main(void)
{

	lv_init();

	hal_setup();
  printf("start\n\r");
#if LV_USE_DEMO_TEST
  demo_test_create();
#elif LV_USE_DEMO1
   demo1_create();
#elif LV_USE_DEMO2
  demo2_create();
#elif LV_USE_DEMO3
  demo3_create();
#elif LV_USE_DEMO4
  demo4_create();
#elif LV_USE_DEMO5
  demo5_create();
#elif LV_USE_DEMO6
  demo6_create();
#endif

	hal_loop();
}
