#include <Wire.h>
#include <HTInfraredSeeker.h>
HTInfraredSeeker seeker;
InfraredInput input;
void setup() {
  Serial.begin(9600);
  seeker.init();
}

void loop() {
  input=seeker.readSensorValues();
  Serial.println((String)input.direction+" "+(String)input.strength1+" "+(String)input.strength2+" "+(String)input.strength3+" "+(String)input.strength4+" "+(String)input.strength5+" "+(String)input.strengthAll);
}
