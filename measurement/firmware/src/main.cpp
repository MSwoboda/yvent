#define MEGUNO_LINK
// #define SERIAL_LINK

#include <Arduino.h>
#include "SFM3000wedo.h"
#include <Wire.h>

SFM3000wedo measflow(64);

int offset = 32000;  // Offset for the sensor
float scale = 140.0; // Scale factor for Air and N2 is 140.0, O2 is 142.8

float pressureVoltage = 0;
float Pressure = 0;
float pressureOffset = 0;
float Flow = 0;

unsigned int result = 0;

const unsigned SendInterval = 20; // [ms]

#ifdef MEGUNO_LINK
#include "MegunoLink.h" // Helpful functions for communicating with MegunoLink.

// Millis value when the data was last sent.
long LastSent;

// Interval (milliseconds) between sending analog data

// The plot we are sending data to.
TimePlot FlowPlot;
TimePlot PressurePlot;

#endif

void setup()
{
  Wire.begin();
  Serial.begin(9600);
  delay(500);

  pinMode(A0, INPUT);
  measflow.init();

  pressureVoltage = (5.000 / 1023.000) * analogRead(A0);
  pressureOffset = -1.000 * (pressureVoltage - 2.50) / 0.09;

#ifdef MEGUNO_LINK

  LastSent = millis();

  FlowPlot.SetTitle("Flow Measurement");
  FlowPlot.SetXlabel("Time");
  FlowPlot.SetYlabel("Value");
  FlowPlot.SetSeriesProperties("Flow", Plot::Red, Plot::Solid, 2, Plot::Square);

  PressurePlot.SetTitle("Pressure Measurement");
  PressurePlot.SetXlabel("Time");
  PressurePlot.SetYlabel("Pressure");
  PressurePlot.SetSeriesProperties("Pressure", Plot::Blue, Plot::Solid, 2, Plot::Square);
  
#endif
}

void loop()
{

  if ((millis() - LastSent) > SendInterval)
  {
    LastSent = millis();

    result = measflow.getvalue();

    Flow = ((float)result - offset) / scale;

    pressureVoltage = (5.000 / 1023.000) * analogRead(A0);
    Pressure = 10.1972*((pressureVoltage - 2.5) / 0.09) + pressureOffset;

#ifdef SERIAL_LINK

    Serial.print(Flow, 2);
    Serial.print(",");
    Serial.print(Pressure );
    Serial.print("\n");
#endif
#ifdef MEGUNO_LINK

    FlowPlot.SendData("Flow", Flow);
    PressurePlot.SendData("Pressure", Pressure);

#endif
  }
}
