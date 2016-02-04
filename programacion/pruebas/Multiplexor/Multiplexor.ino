#define A 5 
#define B 6
#define C 7
int d, a, b, c;
void setup() {
  Serial.begin(9600);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(8, INPUT);
  /*digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(A,HIGH);*/
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(A, LOW);
}

void loop() {
  for(a=0; a<2; a++){
    for(b=0; b<2; b++){
      for(c=0; c<2; c++){
        cambio(c, b, a);
        d=analogRead(A5);
        Serial.print(d);
        Serial.print("\t");
      }
    }
  }
  Serial.println("--");
}
void cambio(bool a, bool b, bool c){
  digitalWrite(A, a);
  digitalWrite(B, b);
  digitalWrite(C, c);
}
