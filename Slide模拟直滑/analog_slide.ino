// Description: the sample to drive some analog sensors 60行程模拟直滑传感器
// Connection: Signal output pin  -> Analog pin 0
// Author: Jiahui Tang
// Date: 2016-12-27

void setup()
{
  Serial.begin(9600);     //Set serial baud rate to 9600 bps
}
void loop()
{
  int val;
  val=analogRead(0);      //Read slider value from analog 0
  Serial.println(val,DEC);//Print the value to serial port
  delay(100);
}
