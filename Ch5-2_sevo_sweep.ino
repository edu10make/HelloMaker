#include <Servo.h>

Servo myservo;  //서보모터 이름(myservo) 정하기 

int pos = 0;    // 서보모터의 각도 변수 생성

void setup(){
  myservo.attach(9);  // 서보모터 9번핀 사용
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // 0도 에서 180도 까지 각도 설정 & 각도에 1값을 계속 더해서 0도 -> 180도
    myservo.write(pos);              // 서보모터의 각도 값을 'pos'로 지정
    delay(15);                       // 각도 값이 적용되게 움직이기 위해 15ms를 기다리기
  }
  for (pos = 180; pos >= 0; pos -= 1) { // 180도에서 0도 까지 각도 설정 & 각도에 -1값을 계속 더해서 180도 -> 0도
    myservo.write(pos);              // 서보모터의 각도 값을 'pos'로 지정
    delay(15);                       // 각도 값이 적용되게 움직이기 위해 15ms를 기다리기
  }
}

