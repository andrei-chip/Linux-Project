#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string>

#define MAX_TIMINGS	85
#define DHT_PIN		3	/* GPIO-22 */
#define LED_PIN         4 	/* GPIO-23 */
#define STATUS_PIN      5 	/* GPIO-24 */

char* temperature_measure();
char* humidity_measure(); 
int led_on();
int led_off();
int get_status();
