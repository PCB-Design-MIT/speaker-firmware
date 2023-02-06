#include <Arduino.h>
#include "BluetoothA2DPSink.h"

BluetoothA2DPSink a2dp_sink;

#define BOOST_EN 2
#define VBAT_SENSE 4
#define LED 12

void setup() {
  pinMode(BOOST_EN, OUTPUT); // 12V_EN
  pinMode(VBAT_SENSE, INPUT); // VBAT_SENSE
  pinMode(LED, OUTPUT);

  digitalWrite(BOOST_EN, HIGH);

  a2dp_sink.start("pear");
}

//float voltage = 0;
//bool boost_enable = 0;

void loop() {
//  voltage = 3.3*2*analogRead(VBAT_SENSE)/4096;
//  boost_enable = voltage >= 2.9;
  
//  digitalWrite(BOOST_EN, boost_enable);
//  digitalWrite(LED, boost_enable);

//  delay(200);
} 
