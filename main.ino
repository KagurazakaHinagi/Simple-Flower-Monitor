#include "U8glib.h"
#include "Wire.h"
#include "BH1750.h"

U8GLIB_MINI12864 u8g(4,5,6,7,8); 
BH1750 lightMeter;

float lux,temp_val,temp,moist;

void draw() {
  u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0,14);
  u8g.print("Temp:  ");
  u8g.print(temp);
  u8g.print("C");
  u8g.setPrintPos(0,28);
  u8g.print("Moist: ");
  u8g.print(moist);
  u8g.setPrintPos(0,42);
  u8g.print("Lux:   ");
  u8g.print(lux);
}

void loop() {
  temp_val = analogRead(A0);
  temp = temp_val * (5.0 / 1023.0*100);
  moist = analogRead(A1);
  lux = lightMeter.readLightLevel();
  
  u8g.firstPage();  
  do {
    draw();
  } while( u8g.nextPage() );
  delay(1000);
}

void setup() {
  Wire.begin();
  lightMeter.begin();
}
