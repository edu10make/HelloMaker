int led = 3;
int cds = A0;

void setup() {
  Serial.begin(9600); //추가
  pinMode(led, OUTPUT); 
}

void loop() {
  int light = analogRead(cds); 
  Serial.println(light); //추가
  delay(500); //추가

  if (light < 600) {
    digitalWrite(led, HIGH);
  }
  
  else {
    digitalWrite(led, LOW);
  }

}
