int led = 3;
int cds = A0;

void setup() {
  Serial.begin(9600); 
  pinMode(led, OUTPUT); 
}

void loop() {
  int light = analogRead(cds); 
  Serial.println(light); 
  delay(500); 

  if (light < 600) {
    digitalWrite(led, HIGH);
  }
  
  else {
    digitalWrite(led, LOW);
  }

}
