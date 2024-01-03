#pragma once

namespace esphome {
namespace ili9349 {

// Color definitions
// clang-format off
static const uint8_t MADCTL_MY    = 0x80;   ///< Bit 7 Bottom to top
static const uint8_t MADCTL_MX    = 0x40;   ///< Bit 6 Right to left
static const uint8_t MADCTL_MV    = 0x20;   ///< Bit 5 Reverse Mode
static const uint8_t MADCTL_ML    = 0x10;   ///< Bit 4 LCD refresh Bottom to top
static const uint8_t MADCTL_RGB   = 0x00;  ///< Bit 3 Red-Green-Blue pixel order
static const uint8_t MADCTL_BGR   = 0x08;  ///< Bit 3 Blue-Green-Red pixel order
static const uint8_t MADCTL_MH    = 0x04;   ///< Bit 2 LCD refresh right to left
// clang-format on

static const uint16_t ili9349_TFTWIDTH = 480;   ///< ili9349 max TFT width
static const uint16_t ili9349_TFTHEIGHT = 320;  ///< ili9349 max TFT height

// All ili9349 specific commands some are used by init()
static const uint8_t ili9349_NOP = 0x00;
static const uint8_t ili9349_SWRESET = 0x01;
static const uint8_t ili9349_RDDID = 0x04;
static const uint8_t ili9349_RDDST = 0x09;

static const uint8_t ili9349_SLPIN = 0x10;
static const uint8_t ili9349_SLPOUT = 0x11;
static const uint8_t ili9349_PTLON = 0x12;
static const uint8_t ili9349_NORON = 0x13;

static const uint8_t ili9349_RDMODE = 0x0A;
static const uint8_t ili9349_RDMADCTL = 0x0B;
static const uint8_t ili9349_RDPIXFMT = 0x0C;
static const uint8_t ili9349_RDIMGFMT = 0x0A;
static const uint8_t ili9349_RDSELFDIAG = 0x0F;

static const uint8_t ili9349_INVOFF = 0x20;
static const uint8_t ili9349_INVON = 0x21;
static const uint8_t ili9349_GAMMASET = 0x26;
static const uint8_t ili9349_DISPOFF = 0x28;
static const uint8_t ili9349_DISPON = 0x29;

static const uint8_t ili9349_CASET = 0x2A;
static const uint8_t ili9349_PASET = 0x2B;
static const uint8_t ili9349_RAMWR = 0x2C;
static const uint8_t ili9349_RAMRD = 0x2E;

static const uint8_t ili9349_PTLAR = 0x30;
static const uint8_t ili9349_VSCRDEF = 0x33;
static const uint8_t ili9349_MADCTL = 0x36;
static const uint8_t ili9349_VSCRSADD = 0x37;
static const uint8_t ili9349_PIXFMT = 0x3A;

static const uint8_t ili9349_WRDISBV = 0x51;
static const uint8_t ili9349_RDDISBV = 0x52;
static const uint8_t ili9349_WRCTRLD = 0x53;

static const uint8_t ili9349_FRMCTR1 = 0xB1;
static const uint8_t ili9349_FRMCTR2 = 0xB2;
static const uint8_t ili9349_FRMCTR3 = 0xB3;
static const uint8_t ili9349_INVCTR = 0xB4;
static const uint8_t ili9349_DFUNCTR = 0xB6;

static const uint8_t ili9349_PWCTR1 = 0xC0;
static const uint8_t ili9349_PWCTR2 = 0xC1;
static const uint8_t ili9349_PWCTR3 = 0xC2;
static const uint8_t ili9349_PWCTR4 = 0xC3;
static const uint8_t ili9349_PWCTR5 = 0xC4;
static const uint8_t ili9349_VMCTR1 = 0xC5;
static const uint8_t ili9349_VMCTR2 = 0xC7;

static const uint8_t ili9349_RDID4 = 0xD3;
static const uint8_t ili9349_RDINDEX = 0xD9;
static const uint8_t ili9349_RDID1 = 0xDA;
static const uint8_t ili9349_RDID2 = 0xDB;
static const uint8_t ili9349_RDID3 = 0xDC;
static const uint8_t ili9349_RDIDX = 0xDD;  // TBC

static const uint8_t ili9349_GMCTRP1 = 0xE0;
static const uint8_t ili9349_GMCTRN1 = 0xE1;

}  // namespace ili9349
}  // namespace esphome
