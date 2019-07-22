//SDS011-master.zip(라이브러리)을 라이브러리에 추가한 후 아래 코드를 사용하세요.

#include <SDS011.h>

float p10, p25;
int error;

SDS011 my_sds;

void setup() {
  my_sds.begin(D6, D7); 
  Serial.begin(9600);
}

void loop() {
  error = my_sds.read(&p25, &p10);
  if (!error) {
    Serial.println("P2.5: " + String(p25));
    Serial.println("P10:  " + String(p10));
  }
  delay(100);
}
