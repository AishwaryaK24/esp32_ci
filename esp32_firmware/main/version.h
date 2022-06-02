#include "blink.h"

#define FIRMWARE_VERSION "4.0.0-beta.10"

#if defined(FIRMWARE_OBNIZ_OS_ENCORED_WIFI)
  #define device_identity "encored"
#elif defined(FIRMWARE_OBNIZ_OS_WIFI_GATEWAY)
 #define device_identity "blewifi_gw2"
  
#elif defined(FIRMWARE_OBNIZ_OS_BLE_LTE_GW)
#define device_identity "encored_lte"
  
#elif defined(FIRMWARE_OBNIZ_OS_BLE_LTE_GW_2)
#define device_identity "blelte_gw2"
  
#elif defined(FIRMWARE_OBNIZ_OS_BLE_STICK)
#define device_identity "ble_stick"
 
#elif defined(FIRMWARE_OBNIZ_OS_IOTBANK_USB_GATEWAY)
#define device_identity "iotbank_usb_gw"
  
#elif defined(FIRMWARE_OBNIZ_OS_M5ATOM_LITE)
#define device_identity "m5atom_lite"
  
#elif defined(FIRMWARE_OBNIZ_OS_AK030)
#define device_identity "ak030"
 
#elif defined(FIRMWARE_OBNIZ_OS_M5STICK_C)
#define device_identity "m5stickc"
 
#elif defined(FIRMWARE_OBNIZ_OS_M5STACK_BASIC)
#define device_identity "m5stack_basic"
   
#elif defined(FIRMWARE_OBNIZ_OS_PRODINO_ESP32_ETHER)
#define device_identity "plc"
   
#elif defined(FIRMWARE_OBNIZ_BOARD_1)
#define device_identity "obnizb1"
   
#elif defined(FIRMWARE_OBNIZ_BOARD_2)
#define device_identity "obnizb2"
   
#elif defined(PROCESSOR_TI_CC3235)
#define device_identity "cc3235mod"
#endif