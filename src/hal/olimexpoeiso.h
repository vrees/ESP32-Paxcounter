// clang-format off
// upload_speed 921600
// board esp32-poe-iso

#ifndef _OLIMEXPOEISO_H
#define _OLIMEXPOEISO_H

#include <stdint.h>

// enable only if you want to store a local paxcount table on the device
#define HAS_SDCARD 2 // this board has a SDMMC card-reader/writer

// enable only if you want to send paxcount via ethernet port to mqtt server
#define HAS_MQTT 1  // use MQTT on ethernet interface

//#define BAT_MEASURE_ADC ADC1_GPIO35_CHANNEL // battery probe GPIO pin -> ADC1_CHANNEL_7
//#define BAT_VOLTAGE_DIVIDER 2 // voltage divider 470k/470k on board
#define BAT_MEASURE_ADC ADC1_GPIO39_CHANNEL // external power probe GPIO pin
#define BAT_VOLTAGE_DIVIDER 2.1277f // voltage divider 47k/442k on board

#define HAS_BUTTON KEY_BUILTIN // on board button
#define HAS_LED NOT_A_PIN // no on board LED

#endif
