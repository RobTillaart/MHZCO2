//
//    FILE: MHZCO2_PWM.ino
//  AUTHOR: Rob Tillaart
// VERSION: 0.1.0
// PURPOSE: demo MHZ library / sensor
//    DATE: 2020-09-01


/*
   DATASHEET P.?
   Conversion between PWM output and concentration,
  use interrupt pin 3 of Arduino UNO.
*/


#include "Arduino.h"


volatile uint16_t width;


void IRQ()
{
  static uint32_t start = 0;
  int v = digitalRead(3);
  if (v == HIGH) start = micros();
  else width = micros() - start;
}


uint16_t PWM_conc()
{
  noInterrupts();
  uint16_t ww = width;
  interrupts();

  uint16_t concentration =  round(ww * 2000.0 / 20000.0);  // TODO magic nrs.
  return concentration;
}


void setup()
{
  Serial.begin(115200);
  Serial.println(__FILE__);

  attachInterrupt(digitalPinToInterrupt(3), IRQ, CHANGE);
}


void loop()
{
  Serial.println(PWM_conc());
  delay(1000);
}


//  -- END OF FILE --

