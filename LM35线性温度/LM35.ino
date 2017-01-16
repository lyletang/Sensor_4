// LM35 线性温度传感器
// Author: Jiahui Tang
// Date: 2016-12-28

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  uint16_t val;
  double dat;
  val = analogRead(0);
  dat = (double) val * (5 / 10.24);
  Serial.print("Tep:");
  Serial.print(dat);
  Serial.println("C");
  delay(500);
}
