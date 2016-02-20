#include "Arduino.h";
#include "MotorController.h";
MotorController::MotorController(int interrupt,int m1d1,int m1d2,int power1,int m2d1,int m2d2,int power2,bool invert1,bool invert2){
	interruptor=interrupt;

	portM1D1=m1d1;
	portM1D2=m1d2;

	portM2D1=m2d1;
	portM2D2=m2d2;

	portPower1=power1;
	portPower2=power2;

	inverted1=invert1;
	inverted2=invert2;

	pinMode(interruptor,OUTPUT);
	pinMode(portM1D1,OUTPUT);
	pinMode(portM1D2,OUTPUT);
	pinMode(portM2D1,OUTPUT);
	pinMode(portM2D2,OUTPUT);
	pinMode(portPower1,OUTPUT);
	pinMode(portPower2,OUTPUT);
}
void MotorController::invert(short motor){
	if(motor==MOTOR1){
		if(inverted1){
			inverted1=false;
		}
		else{
			inverted1=true;	
		}
	}
	else{
		if(inverted2){
			inverted2=false;
		}
		else{
			inverted2=true;	
		}	
	}
}
void MotorController::turnOn(){
	digitalWrite(interruptor,LOW);
}
void MotorController::turnOff(){
	digitalWrite(interruptor,HIGH);
}
void MotorController::setSpeed(short motor,int speed){
	if(motor==MOTOR1){
		speed1=speed;
	}
	else{
		speed2=speed;
	}
}
void MotorController::forward(short motor){
	if(motor==MOTOR1){
		analogWrite(portPower1,speed1);
		if(inverted1){
			digitalWrite(portM1D1,HIGH);
			digitalWrite(portM1D2,LOW);
		}
		else{
			digitalWrite(portM1D1,LOW);
			digitalWrite(portM1D2,HIGH);
		}
	}
	else{
		analogWrite(portPower2,speed2);
		if(inverted2){
			digitalWrite(portM2D1,HIGH);
			digitalWrite(portM2D2,LOW);
		}
		else{
			digitalWrite(portM2D1,LOW);
			digitalWrite(portM2D2,HIGH);
		}	
	}
}
void MotorController::backward(short motor){
	if(motor==MOTOR1){
		analogWrite(portPower1,speed1);
		if(inverted1){
			digitalWrite(portM1D1,LOW);
			digitalWrite(portM1D2,HIGH);
		}
		else{
			digitalWrite(portM1D1,HIGH);
			digitalWrite(portM1D2,LOW);
		}
	}
	else{
		analogWrite(portPower2,speed2);
		if(inverted2){
			digitalWrite(portM2D1,LOW);
			digitalWrite(portM2D2,HIGH);
		}
		else{
			digitalWrite(portM2D1,HIGH);
			digitalWrite(portM2D2,LOW);
		}	
	}
}
void MotorController::stop(short motor){
	if(motor==MOTOR1){
		digitalWrite(portPower1,LOW);
		digitalWrite(portM1D1,LOW);
		digitalWrite(portM1D2,LOW);
	}
	else{
		digitalWrite(portPower2,LOW);
		digitalWrite(portM2D1,LOW);
		digitalWrite(portM2D2,LOW);
	}
}