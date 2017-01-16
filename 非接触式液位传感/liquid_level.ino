// 非接触式液位传感器
// Author: Jiahui Tang
// Date: 2017-1-16

int ledPin = 13;                
int inputPin = 4;               

void setup() {
  pinMode(ledPin, OUTPUT);      
  pinMode(inputPin, INPUT);     
}

void loop(){
  int val = digitalRead(inputPin);  
  if (val == HIGH) {            
    Serial.println("Oh, 到达液位!");
  } else {
    Serial.println("还没到达指定液位!");
  }

  delay(500);
}
