int a;
void setup() {
  Serial.begin(9600);
  pinMode(10, OUTPUT);
}

void loop() {
  a=Serial.read();
  //if(a!=-1){
    Serial.println(analogRead(A5));
  //}
}
