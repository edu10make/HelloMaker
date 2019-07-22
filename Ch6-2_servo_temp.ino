#include <Servo.h>
#include <OneWire.h>
#include <DallasTemperature.h>

int temp = 2;
OneWire oneWire(temp);

DallasTemperature sensors(&oneWire);

Servo myservo;  
int pos = 0;    
 
void setup(void)
{
  Serial.begin(9600);
  Serial.println("온도 측정하기");

  sensors.begin();
  myservo.attach(9); 
}

void loop(void)
{
  sensors.requestTemperatures(); 
  
  Serial.print("현재 온도: ");
  Serial.println(sensors.getTempCByIndex(0));
  delay(1000);
 
  int pos = map(sensors.getTempCByIndex(0), 15, 30, 170, 10);
  myservo.write(pos);              
  delay(1000);
 
}
