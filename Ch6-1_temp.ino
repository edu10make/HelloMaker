#include <OneWire.h>
#include <DallasTemperature.h>

int temp = 2;
OneWire oneWire(temp);

DallasTemperature sensors(&oneWire);

void setup() {
  Serial.begin(9600);
  Serial.println("온도 측정하기");
  sensors.begin();
}

void loop() {
  sensors.requestTemperatures();

  Serial.print("현재 온도: ");
  Serial.println(sensors.getTempCByIndex(0));
  delay(1000);
}
