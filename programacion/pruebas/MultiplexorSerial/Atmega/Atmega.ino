#define A 12
#define B 11
#define C 10
int d, a, b, c;
int pin, p;
void setup() {
  Serial.begin(19200);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(8, INPUT);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(A, LOW);
}

void loop() {
  p=0;
  for(a=0; a<2; a++){
    for(b=0; b<2; b++){
      for(c=0; c<2; c++){
        cambio(c, b, a);
        d=analogRead(A5);
        pin=0;
        if(a)pin+=1;
        if(b)pin+=2;
        if(c)pin+=4;
        if(d>900)p=pin;
      }
    }
  }
  Serial.println((p)? ((p<4)? "a":"b") :"n");
}
void cambio(bool a, bool b, bool c){
  digitalWrite(A, a);
  digitalWrite(B, b);
  digitalWrite(C, c);
}
