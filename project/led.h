#include <msp430.h>

#ifndef led_included
#define led_included

#define GREEN_LED BIT6  // P1.6
#define RED_LED BIT0    // P1.0
#define LEDS (BIT0 | BIT6)

extern unsigned char red_on, green_on;
extern unsigned char led_changed;

void led_init();
void led_update();

#endif // included
