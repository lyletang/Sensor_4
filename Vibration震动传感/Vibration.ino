// 震动传感器
// Author: Jiahui Tang
// Date: 2016-12-28

#define SensorLED     13
#define SensorINPUT   3  //Connect the sensor to digital Pin 3 which is Interrupts 1.

unsigned char state = 0;

void setup() 
{ 
  pinMode(SensorLED, OUTPUT); 
  pinMode(SensorINPUT, INPUT);
  attachInterrupt(1, blink, FALLING);// Trigger the blink function when the falling edge is detected

}

void loop()
{
      if(state!=0)
      {
        state = 0;
        digitalWrite(SensorLED,HIGH);
        delay(500);
      }  
      else 
        digitalWrite(SensorLED,LOW);
} 

void blink()//Interrupts function
{
  state++;
}

