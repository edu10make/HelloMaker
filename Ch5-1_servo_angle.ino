#include <Servo.h> //서보모터 라이브러리 불러오기

Servo myservo;  //서보모터 이름(myservo) 정하기

void setup() {
  myservo.attach(9);  //서보모터 9번핀 사용
}

void loop() {
  
  myservo.write(0);   //0도로 움직이기
  delay(500);         //0.5초 기다리기
  myservo.write(90);  //90도로 움직이기
  delay(500);         //0.5초 기다리기
  myservo.write(180); //180도로 움직이기
  delay(500);         //0.5초 기다리기
  myservo.write(90);  //90도로 움직이기
  delay(500);         //0.5초 기다리기
  
}
