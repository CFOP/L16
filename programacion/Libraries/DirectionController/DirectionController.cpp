#include "Arduino.h";
#include "DirectionController.h";
#include "MotorController.h";

DirectionController::DirectionController(int actv,int m1d1,int m1d2,int power1,int m2d1,int m2d2,int power2,bool invert1,bool invert2,
int actv2,int m1d12,int m1d22,int power12,int m2d12,int m2d22,int power22,bool invert12,bool invert22){
	controller1=new MotorController(actv,m1d1,m1d2,power1,m2d1,m2d2,power2,invert1,invert2);
	controller2=new MotorController(actv2,m1d12,m1d22,power12,m2d12,m2d22,power22,invert12,invert22);
}
void DirectionController::moveForward(int speed){
	controller1.setSpeed(MOTOR1,speed);
	controller1.setSpeed(MOTOR2,speed);
	controller2.setSpeed(MOTOR1,speed);
	controller2.setSpeed(MOTOR2,speed);

	controller1.forward(MOTOR1);
	controller2.forward(MOTOR2);
	controller1.forkward(MOTOR2);
	controller2.forkward(MOTOR1);
}
void DirectionController::moveBackward(int speed){
	controller1.setSpeed(MOTOR1,speed);
	controller1.setSpeed(MOTOR2,speed);
	controller2.setSpeed(MOTOR1,speed);
	controller2.setSpeed(MOTOR2,speed);

	controller1.backward(MOTOR1);
	controller2.backward(MOTOR2);
	controller1.backward(MOTOR2);
	controller2.backward(MOTOR1);
}
void DirectionController::right(int speed){
	controller1.setSpeed(MOTOR1,speed);
	controller1.setSpeed(MOTOR2,speed);
	controller2.setSpeed(MOTOR1,speed);
	controller2.setSpeed(MOTOR2,speed);

	controller1.forward(MOTOR1);
	controller2.backward(MOTOR2);
	controller1.forward(MOTOR2);
	controller2.backward(MOTOR1);
}
void DirectionController::left(int speed){
	controller1.setSpeed(MOTOR1,speed);
	controller1.setSpeed(MOTOR2,speed);
	controller2.setSpeed(MOTOR1,speed);
	controller2.setSpeed(MOTOR2,speed);

	controller1.backward(MOTOR1);
	controller2.forward(MOTOR2);
	controller1.backward(MOTOR2);
	controller2.forward(MOTOR1);
}
void DirectionController::diagTR(int speed){//diagonal top right
	controller1.setSpeed(MOTOR1,speed);
	controller1.setSpeed(MOTOR2,speed);
	controller2.setSpeed(MOTOR1,speed);
	controller2.setSpeed(MOTOR2,speed);

	controller1.forward(MOTOR1);
	controller2.stop(MOTOR2);
	controller1.stop(MOTOR2);
	controller2.forward(MOTOR1);
}
void DirectionController::diagBR(int speed){ //diagonal bottom right
	controller1.setSpeed(MOTOR1,speed);
	controller1.setSpeed(MOTOR2,speed);
	controller2.setSpeed(MOTOR1,speed);
	controller2.setSpeed(MOTOR2,speed);

	controller1.stop(MOTOR1);
	controller2.backward(MOTOR2);
	controller1.backward(MOTOR2);
	controller2.stop(MOTOR1);
}
void DirectionController::diagTL(int speed){ //diagonal top  left
	controller1.setSpeed(MOTOR1,speed);
	controller1.setSpeed(MOTOR2,speed);
	controller2.setSpeed(MOTOR1,speed);
	controller2.setSpeed(MOTOR2,speed);

	controller1.stop(MOTOR1);
	controller2.forward(MOTOR2);
	controller1.forward(MOTOR2);
	controller2.stop(MOTOR1);
}
void DirectionController::diagBL(int speed){ //diagonal bottom left
	controller1.setSpeed(MOTOR1,speed);
	controller1.setSpeed(MOTOR2,speed);
	controller2.setSpeed(MOTOR1,speed);
	controller2.setSpeed(MOTOR2,speed);

	controller1.backward(MOTOR1);
	controller2.stop(MOTOR2);
	controller1.stop(MOTOR2);
	controller2.backward(MOTOR1);
}