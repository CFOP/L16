int message=255;
bool dir=true;
void setup(){
  Serial1.begin(19200);
}
void loop(){
  Serial1.println("hola");
  delay(4000);
}
