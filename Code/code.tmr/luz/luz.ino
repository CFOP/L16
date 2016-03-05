#include <Photoresistor.h>
Photoresistor LightSensor1(A0,A1,A2);
Photoresistor LightSensor2(A3,A4,A5);
void setup() {
Serial.begin(9600);
while(millis()<10000){
  LightSensor1.calibrate();
  LightSensor2.calibrate();
  }
}
void loop() {
if(LightSensor1.getReading()==1||LightSensor2.getReading()==1){
  Serial.print('1');
  }
else{
   Serial.print('0');
  }
}
