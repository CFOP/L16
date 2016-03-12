#include <MotorController.h>
#define MAX 250
MotorController puenteL(6,2,4,9,7,8,10,false,false);
MotorController puenteR(29,25,27,2,24,26,3,false,false);
void setup(){
puenteL.turnOn(MOTOR1);
digitalWrite(12,HIGH);
}
void der(int v1, int v2){//derecha
 puenteR.setSpeed(MOTOR1,v1);
 puenteR.setSpeed(MOTOR2,v2);
 puenteL.setSpeed(MOTOR1,MAX);
 puenteL.setSpeed(MOTOR2,MAX);
 puenteR.backward(MOTOR1);
 puenteR.forward(MOTOR2);
 puenteL.forward(MOTOR1);
 puenteL.backward(MOTOR2);
  }
void izq(int v1, int v2){//izquierda
 puenteR.setSpeed(MOTOR1,v1);
 puenteR.setSpeed(MOTOR2,v2);
 puenteL.setSpeed(MOTOR1,MAX);
 puenteL.setSpeed(MOTOR2,MAX);
 puenteR.forward(MOTOR1);
 puenteR.backward(MOTOR2);
 puenteL.backward(MOTOR1);
 puenteL.forward(MOTOR2);
  }
void adelante(int v1, int v2){//adelante
 puenteR.setSpeed(MOTOR1,v1);
 puenteR.setSpeed(MOTOR2,v2);
 puenteL.setSpeed(MOTOR1,MAX);
 puenteL.setSpeed(MOTOR2,MAX);
 puenteR.forward(MOTOR1);
 puenteR.forward(MOTOR2);
 puenteL.forward(MOTOR1);
 puenteL.forward(MOTOR2);
  }
void atras(int v1, int v2){//atras
 puenteR.setSpeed(MOTOR1,v1);
 puenteR.setSpeed(MOTOR2,v2);
 puenteL.setSpeed(MOTOR1,MAX);
 puenteL.setSpeed(MOTOR2,MAX);
 puenteR.backward(MOTOR1);
 puenteR.backward(MOTOR2);
 puenteL.backward(MOTOR1);
 puenteL.backward(MOTOR2);
}
void suizq(int v1, int v2){//superior izquierda
 puenteR.setSpeed(MOTOR1,v1);
 puenteR.setSpeed(MOTOR2,v2);
 puenteL.setSpeed(MOTOR1,MAX);
 puenteL.setSpeed(MOTOR2,MAX);
 puenteR.forward(MOTOR1);
 puenteR.stop(MOTOR2);
 puenteL.stop(MOTOR1);
 puenteL.forward(MOTOR2);
  }
void suder(int v1, int v2){//superior derecha
 puenteR.setSpeed(MOTOR1,v1);
 puenteR.setSpeed(MOTOR2,v2);
 puenteL.setSpeed(MOTOR1,MAX);
 puenteL.setSpeed(MOTOR2,MAX);
 puenteR.stop(MOTOR1);
 puenteR.forward(MOTOR2);
 puenteL.forward(MOTOR1);
 puenteL.stop(MOTOR2);   
  }
void inizq(int v1, int v2)
{//inferior izquierda
 puenteR.setSpeed(MOTOR1,v1);
 puenteR.setSpeed(MOTOR2,v2);
 puenteL.setSpeed(MOTOR1,MAX);
 puenteL.setSpeed(MOTOR2,MAX);
 puenteR.stop(MOTOR1);
 puenteR.backward(MOTOR2);
 puenteL.backward(MOTOR1);
 puenteL.stop(MOTOR2);    
  }
void inder(int v1, int v2){//inferior derecha
 puenteR.setSpeed(MOTOR1,v1);
 puenteR.setSpeed(MOTOR2,v2);
 puenteL.setSpeed(MOTOR1,MAX);
 puenteL.setSpeed(MOTOR2,MAX);
 puenteR.backward(MOTOR1);
 puenteR.stop(MOTOR2);
 puenteL.stop(MOTOR1);
 puenteL.backward(MOTOR2); 
  }
void vueltader(int v1, int v2){//derecha
 puenteR.setSpeed(MOTOR1,v1);
 puenteR.setSpeed(MOTOR2,v2);
 puenteL.setSpeed(MOTOR1,MAX);
 puenteL.setSpeed(MOTOR2,MAX);
 puenteR.backward(MOTOR1);
 puenteR.backward(MOTOR2);
 puenteL.forward(MOTOR1);
 puenteL.forward(MOTOR2);
}
void vueltaizq(int v1, int v2){//izquierda
 puenteR.setSpeed(MOTOR1,v1);
 puenteR.setSpeed(MOTOR2,v2);
 puenteL.setSpeed(MOTOR1,MAX);
 puenteL.setSpeed(MOTOR2,MAX);
 puenteR.forward(MOTOR1);
 puenteR.forward(MOTOR2);
 puenteL.backward(MOTOR1);
 puenteL.backward(MOTOR2);
}
void loop(){
adelante(MAX,MAX);

}
