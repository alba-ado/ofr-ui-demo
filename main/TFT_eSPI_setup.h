#ifndef __ILI9488_TFT_LCD_TFT_eSPI_LIBRARY_SETUP__
#define __ILI9488_TFT_LCD_TFT_eSPI_LIBRARY_SETUP__

#define USER_SETUP_ID 146
#define TFT_PARALLEL_8_BIT
#define ILI9488_DRIVER

#define PIN_LCD_D0              15
#define PIN_LCD_D1              16
#define PIN_LCD_D2              17
#define PIN_LCD_D3              18
#define PIN_LCD_D4              12
#define PIN_LCD_D5              11
#define PIN_LCD_D6              10
#define PIN_LCD_D7              9

#define PIN_LCD_RST             4
#define PIN_LCD_DC              5
#define PIN_LCD_WR              6
#define PIN_LCD_RD              7
#define PIN_LCD_CS              PIN_I2C_SCL     //Manually configured with jumpers CSS(CS to SCL) and CSG(CS to GND)

// ESP32 S3 pins used for the parallel interface TFT
//#define TFT_CS          PIN_LCD_CS  //  Not used if the CS pin is fixed on the PCB.
#define TFT_DC          PIN_LCD_DC  // Data Command control pin - must use a GPIO in the range 0-31
#define TFT_RST         PIN_LCD_RST

#define TFT_WR          PIN_LCD_WR  // Write strobe control pin - must use a GPIO in the range 0-31
#define TFT_RD          PIN_LCD_RD

#define TFT_D0          PIN_LCD_D0  // Must use GPIO in the range 0-31 for the data bus
#define TFT_D1          PIN_LCD_D1  // so a single register write sets/clears all bits
#define TFT_D2          PIN_LCD_D2
#define TFT_D3          PIN_LCD_D3
#define TFT_D4          PIN_LCD_D4
#define TFT_D5          PIN_LCD_D5
#define TFT_D6          PIN_LCD_D6
#define TFT_D7          PIN_LCD_D7

#define LOAD_GLCD   // Font 1. Original Adafruit 8 pixel font needs ~1820 bytes in FLASH
#define LOAD_FONT2  // Font 2. Small 16 pixel high font, needs ~3534 bytes in FLASH, 96 characters
#define LOAD_FONT4  // Font 4. Medium 26 pixel high font, needs ~5848 bytes in FLASH, 96 characters
#define LOAD_FONT6  // Font 6. Large 48 pixel font, needs ~2666 bytes in FLASH, only characters 1234567890:-.apm
#define LOAD_FONT7  // Font 7. 7 segment 48 pixel font, needs ~2438 bytes in FLASH, only characters 1234567890:.
#define LOAD_FONT8  // Font 8. Large 75 pixel font needs ~3256 bytes in FLASH, only characters 1234567890:-.
#define LOAD_GFXFF  // FreeFonts. Include access to the 48 Adafruit_GFX free fonts FF1 to FF48 and custom fonts

#define SMOOTH_FONT

#endif

//Use it with: #include "../../include/LCD_Setup.h"