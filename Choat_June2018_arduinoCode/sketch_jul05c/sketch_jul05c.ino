void setup() {
  // put your setup code here, to run once:
pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
tone(6, 440);
delay(500);
noTone(6);
delay(500);
tone(6, 440);
delay(500);
noTone(6);
delay(500);
tone(6, 440);
delay(500);
noTone(6);
delay(500);
}
