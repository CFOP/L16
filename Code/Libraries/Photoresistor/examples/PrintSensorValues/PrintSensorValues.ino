#include <Photoresistor.h>
Photoresistor lightSensor(A0,A1,A2);
void setup(){
    Serial.begin(9600);
}
void loop(){
    lightSensor.calibrate();
    Serial.println((String)lightSensor.getValue());
}