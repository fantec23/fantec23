#pragma once
#include "esphome/core/helpers.h"

namespace esphome {
namespace ili9349 {

// clang-format off
static const uint8_t PROGMEM INITCMD_M5STACK[] = {
  
  0xEF, 3, 0x03, 0x80, 0x02,
  0xCF, 3, 0x00, 0xC1, 0x30,
  0xED, 4, 0x64, 0x03, 0x12, 0x81,
  0xE8, 3, 0x85, 0x00, 0x78,
  0xCB, 5, 0x39, 0x2C, 0x00, 0x34, 0x02,
  0xF7, 1, 0x20,
  0xEA, 2, 0x00, 0x00,
  ili9349_PWCTR1  , 1, 0x23,             // Power control VRH[5:0]
  ili9349_PWCTR2  , 1, 0x10,             // Power control SAP[2:0];BT[3:0]
  ili9349_VMCTR1  , 2, 0x3e, 0x28,       // VCM control
  ili9349_VMCTR2  , 1, 0x86,             // VCM control2
  ili9349_MADCTL  , 1, MADCTL_BGR,       // Memory Access Control
  ili9349_VSCRSADD, 1, 0x00,             // Vertical scroll zero
  ili9349_PIXFMT  , 1, 0x55,
  ili9349_FRMCTR1 , 2, 0x00, 0x13,
  ili9349_DFUNCTR , 3, 0x08, 0x82, 0x27, // Display Function Control
  0xF2, 1, 0x00,                         // 3Gamma Function Disable
  ili9349_GAMMASET , 1, 0x01,             // Gamma curve selected
  ili9349_GMCTRP1 , 15, 0x0F, 0x31, 0x2B, 0x0C, 0x0E, 0x08, // Set Gamma
                        0x4E, 0xF1, 0x37, 0x07, 0x10, 0x03,
                        0x0E, 0x09, 0x00,
  ili9349_GMCTRN1 , 15, 0x00, 0x0E, 0x14, 0x03, 0x11, 0x07, // Set Gamma
                        0x31, 0xC1, 0x48, 0x08, 0x0F, 0x0C,
                        0x31, 0x36, 0x0F,
  ili9349_SLPOUT  , 0x80,                // Exit Sleep
  ili9349_DISPON  , 0x80,                // Display on
  0x00                                   // End of list
};

  /*
static const uint8_t PROGMEM INITCMD_TFT[] = {
  0x01, 0,  // first test of copying values from eSPI library failed for some reason - moved to adafruit style display library
  0x11, 0,
  0xF0, 1, 0xC3,
  0xF0, 1, 0x96,
  0x36, 1, 0x48,
  0x3A, 1, 0x55,
  0xB4, 1, 0x01,
  0xB6, 3, 0x80, 0x02, 0x3B,
  0xE8, 8, 0x40, 0x8A, 0x00, 0x00, 0x29, 0x19, 0xA5, 0x33,
  0xC1, 1, 0x06, // power
  0xC2, 1, 0xA7,
  0xC5, 1, 0x18,
  0xE0, 14, 0xF0, 0x09, 0x0b, 0x06, 0x04, 0x15, 0x2F, 0x54, 0x42, 0x3C, 0x17, 0x14, 0x18, 0x1B,
  0xE1, 14, 0xE0, 0x09, 0x0B, 0x06, 0x04, 0x03, 0x2B, 0x43, 0x42, 0x3B, 0x16, 0x14, 0x17, 0x1B,
  0xF0, 1, 0x3C,
  0xF0, 1, 0x69,
   
  0x29, 0,  //display on
    
  0x00 // End of list
};  
  */

static const uint8_t PROGMEM INITCMD_TFT[] = {
  // This ST7796S initilization routine was copied from this library https://github.com/prenticedavid/Adafruit_ST7796S_kbv
  0x01, 0x80,         // Soft reset, then delay 150 ms
    0xF0, 1, 0xC3,              // ?? Unlock Manufacturer 
    0xF0, 1, 0x96,
//    0xC0, 2, 0x10, 0x10,        //Power Control 1 [80 25]
//    0xC1, 1, 0x41,              //Power Control 2 [13]
    0xC5, 1, 0x1C,              //VCOM  Control 1 [1C]
    0x36, 1, 0x48,              //Memory Access [00]
    0x3A, 1, 0x55,              //565
    0xB0, 1, 0x80,              //Interface     [00]
    //0xB1, 2, 0xB0, 0x11,        //Frame Rate Control [A0 10]
    0xB4, 1, 0x01,              //Inversion Control [01]
    0xB6, 3, 0x80, 0x02, 0x3B,  // Display Function Control [80 02 3B] .kbv SS=1, NL=480
    0xB7, 1, 0xC6,              //Entry Mode      [06]
//    0x3A, 1, 0x66,              //Interlace Pixel Format [XX]
//    0xF7, 4, 0xA9, 0x51, 0x2C, 0x82,    //Adjustment Control 3 [A9 51 2C 82]

    0xF0, 1, 0x69,              //?? lock manufacturer commands
    0xF0, 1, 0x3C,              //
    0x11, 0x80, // Exit Sleep, then delay 150 ms
    0x29, 0x80, // Main screen turn on, delay 150 ms
  0x00                                   // End of list
};

  
// clang-format on
}  // namespace ili9349
}  // namespace esphome
