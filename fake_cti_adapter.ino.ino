void setup() {
  // put your setup code here, to run once:
  initSerial();
}

void loop() {
  // put your main code here, to run repeatedly:
  int data = 1234567890;
  Serial.print(data);
  Serial.flush();
  Serial.write("\n");

  delay(3000);
}

void initSerial() {
  Serial.begin(9600);
}
