
#pragma once

/* Encoder */
#define ENCODER_RESOLUTION 4

/* ST7789 TFT Display */
#define ST7789_SPI_INSTANCE         spi0
#define ST7789_DC_PIN               GP21
#define ST7789_RST_PIN              GP20
#define ST7789_CS_PIN               GP17
#define ST7789_SCK_PIN              GP18
#define ST7789_MOSI_PIN             GP19
#define ST7789_DISPLAY_WIDTH        320
#define ST7789_DISPLAY_HEIGHT       240

/* LVGL */
#define QUANTUM_PAINTER_LVGL_UI_WIDTH   320
#define QUANTUM_PAINTER_LVGL_UI_HEIGHT  240

/* VIA */
#define DYNAMIC_KEYMAP_LAYER_COUNT 2
