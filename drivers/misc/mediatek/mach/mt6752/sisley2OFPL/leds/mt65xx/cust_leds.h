#ifndef _CUST_LEDS_H
#define _CUST_LEDS_H

#include <mach/mt_typedefs.h>
enum mt65xx_led_type
{
	MT65XX_LED_TYPE_RED = 0,
	MT65XX_LED_TYPE_GREEN,
	MT65XX_LED_TYPE_BLUE,
	MT65XX_LED_TYPE_JOGBALL,
	MT65XX_LED_TYPE_KEYBOARD,
	MT65XX_LED_TYPE_BUTTON,	
	MT65XX_LED_TYPE_LCD,
	MT65XX_LED_TYPE_TOTAL,
};

/*Begin lenovo sw chailu1 add 20150320 */
#define LENOVO_THERMAl_BL_LEVEL1_LIMMIT_SUPPORT
#ifdef LENOVO_THERMAl_BL_LEVEL1_LIMMIT_SUPPORT
#define LENOVO_THERMAl_BL_LEVEL1_LIMMIT 229
#endif
/*End  lenovo sw chailu1 add 20150320 */
#endif

