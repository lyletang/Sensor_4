// MQ系列气体传感器
// Author: Jiahui Tang
// Date: 2016-12-28

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val;
  val = analogRead(0);
  Serial.println(val, DEC);
  delay(100);
}
