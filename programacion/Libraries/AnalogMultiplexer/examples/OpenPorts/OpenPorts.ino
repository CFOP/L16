#include <AnalogMultiplexer.h>
AnalogMultiplexer mux=AnalogMultiplexer(3,2,A0);
void setup() {
}

void loop() {
  for(int i=0;i<=7;i++){
    mux.openPort(i);
    delay(1000);
  }
}
