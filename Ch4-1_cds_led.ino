int led = 3;
int cds = A0;

void setup() {
  pinMode(led, OUTPUT); 
}

void loop() {
  int light = analogRead(cds); 

  if (light < 600) {
    digitalWrite(led, HIGH);
  }

  else {
    digitalWrite(led, LOW);
  }
}
