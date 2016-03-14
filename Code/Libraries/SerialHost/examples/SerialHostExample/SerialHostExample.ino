#include <Wire.h>
#include <HMC5583L.h>
#include <MotorController.h>
HMC5583L compass=HMC5583L(HMC5583L_DEFAULT_ADDRESS);
MotorController puenteL(22,23,24,2,26,27,28,3,false,false);
MotorController puenteR(30,34,32,4,33,35,33,5,false,false);
void stop(){
 puenteR.setSpeed(MOTOR1,0);
 puenteR.setSpeed(MOTOR2,0);
 puenteL.setSpeed(MOTOR1,0);
 puenteL.setSpeed(MOTOR2,0);
 puenteR.stop(MOTOR1);
 puenteR.stop(MOTOR2);
 puenteL.stop(MOTOR1);
 puenteL.stop(MOTOR2);
}
void forwd(int v){//izquierda
 puenteR.setSpeed(MOTOR1,v);
 puenteR.setSpeed(MOTOR2,v);
 puenteL.setSpeed(MOTOR1,v);
 puenteL.setSpeed(MOTOR2,v);
 puenteR.forward(MOTOR1);
 puenteR.forward(MOTOR2);
 puenteL.forward(MOTOR1);
 puenteL.forward(MOTOR2);
}
void backwd(int v){//izquierda
 puenteR.setSpeed(MOTOR1,v);
 puenteR.setSpeed(MOTOR2,v);
 puenteL.setSpeed(MOTOR1,v);
 puenteL.setSpeed(MOTOR2,v);
 puenteR.backward(MOTOR1);
 puenteR.backward(MOTOR2);
 puenteL.backward(MOTOR1);
 puenteL.backward(MOTOR2);
}
void der(int v){//derecha
 puenteR.setSpeed(MOTOR1,v);
 puenteR.setSpeed(MOTOR2,v);
 puenteL.setSpeed(MOTOR1,v);
 puenteL.setSpeed(MOTOR2,v);
 puenteR.forward(MOTOR1);
 puenteR.forward(MOTOR2);
 puenteL.backward(MOTOR1);
 puenteL.backward(MOTOR2);
  }
void izq(int v){//izquierda
 puenteR.setSpeed(MOTOR1,v);
 puenteR.setSpeed(MOTOR2,v);
 puenteL.setSpeed(MOTOR1,v);
 puenteL.setSpeed(MOTOR2,v);
 puenteR.backward(MOTOR1);
 puenteR.backward(MOTOR2);
 puenteL.forward(MOTOR1);
 puenteL.forward(MOTOR2);
}

void setup() {
  Serial.begin(9600);
  Wire.begin();
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  puenteL.turnOn(MOTOR1);
  puenteL.turnOn(MOTOR2);
  puenteR.turnOn(MOTOR1);
  puenteR.turnOn(MOTOR2);
  //compass.initialize();
  //compass.setStartingAngle();
}

void loop() {
 puenteR.setSpeed(MOTOR1,200);
 puenteR.setSpeed(MOTOR2,200);
 puenteL.setSpeed(MOTOR1,200);
 puenteL.setSpeed(MOTOR2,200);
 puenteR.forward(MOTOR1);
 puenteR.forward(MOTOR2);
 puenteL.forward(MOTOR1);
 puenteL.forward(MOTOR2);
  /*float angle=compass.getAngle();
  Serial.println(angle);
  if(angle<=10.0f||angle>=350.0f){
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
  }
  if(angle>5.0f&&angle<180.0f){
    int pw=(((angle+15.0f)/195.0f)*200.0f);
    izq(pw);
  }
  if(angle>=180.0f&&angle<355.0f){
    int pw=(((360.0f-(angle)+15.0f)/195.0f)*200.0f);
    der(pw);
  }*/
}



