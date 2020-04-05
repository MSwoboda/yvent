#include <Arduino.h>
#include "SFM3000wedo.h"
#include <Wire.h>

SFM3000wedo measflow(64);

int offset = 32000; // Offset for the sensor
float scale = 140.0; // Scale factor for Air and N2 is 140.0, O2 is 142.8

float pressureVoltage =0;
float pressure =0;
float pressureOffset = 0;
float Flow = 0;

unsigned int result = 0;

void setup() {
  Wire.begin();
  Serial.begin(9600);
  delay(500); 

  pinMode(A0,INPUT);
  measflow.init();

  pressureVoltage = (5.000/1023.000)*analogRead(A0);
  pressureOffset = -1.000 * (pressureVoltage - 2.50)/0.09;

}

void loop() {
  result = measflow.getvalue();

  Flow = ((float)result - offset) / scale;
    
  pressureVoltage = (5.000/1023.000)*analogRead(A0);
  pressure = ((pressureVoltage - 2.5)/0.09) + pressureOffset;

  Serial.print(Flow, 2);
  Serial.print(",");
  Serial.print(pressure*10.10);
  Serial.print("\n");

  delay(20);
}