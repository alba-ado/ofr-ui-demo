#include <TFT_eSPI.h>
#include <Arduino.h>
#include "OpenFontRender.h"

//Display Instance (TFT_eSPI)
static TFT_eSPI tft = TFT_eSPI();
static TFT_eSprite display = TFT_eSprite(&tft);

static OpenFontRender openfont;

//Device Startup///////////////////////////////////////////////////////////////////////////////////
void setPins( void ) {
    pinMode(PIN_LCD_D0, OUTPUT);
    pinMode(PIN_LCD_D1, OUTPUT);
    pinMode(PIN_LCD_D2, OUTPUT);
    pinMode(PIN_LCD_D3, OUTPUT);
    pinMode(PIN_LCD_D4, OUTPUT);
    pinMode(PIN_LCD_D5, OUTPUT);
    pinMode(PIN_LCD_D6, OUTPUT);
    pinMode(PIN_LCD_D7, OUTPUT);

    pinMode(PIN_LCD_RST, OUTPUT);
    pinMode(PIN_LCD_DC, OUTPUT);
    pinMode(PIN_LCD_WR, OUTPUT);
    pinMode(PIN_LCD_RD, OUTPUT);

    //Initialize the Arduino framework
    initArduino();
    srand(esp_random());

    //Wait a little for the systems to stabilize
    vTaskDelay(100 / portTICK_PERIOD_MS);
}

void systemStartup( void ) {
    tft.init();
    tft.setRotation(2);
    tft.fillScreen(TFT_BLACK);

    //Set the drawing functions
    openfont.setDrawer(tft);

    //Credit the open font render library
    openfont.setSerial(Serial);
	openfont.showCredit();
}

extern "C" void app_main() {
    setPins();
    systemStartup();
}