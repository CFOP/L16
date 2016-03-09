/*
 -------------------------------------------------
 MotorController
 -------------------------------------------------
MotorController es una librería que permite al
usuario controlar 2 motores de una manera sencilla
utilizando un shield fabricado por pololu (VNH5019)
*/
#include <MotorController.h>
//Constantes del "shield" para Arduino uno
#define DEFM1D1 2
#define DEFM1D2 4
#define DEFM2D1 7
#define DEFM2D2 8
#define DEFMPW1 9
#define DEFMPW2 10

//Constructor "MotorcController"-Parámetros del constructor: pin de activación, puerto 1 del motor 1, puerto 2 del motor 1, pin de potencia del motor 1, puerto 1 del motor 2, puerto 2 del motor 2, pin de potencia del motor 2, boleana de inversión del motor 1, boleana de inversión del motor 2.
MotorController controller(DEFM1D1,DEFM1D1,DEFM1D2,DEFPW1,DEFM2D1,DEFM2D2,DEFPW2,false,false);
void setup() {

}
void loop() {
  //Función para cambiar potencia en un motor-Parámetros de setSpeed: constante de motor (MOTOR1/MOTOR2), potencia (0-255).
  controller.setSpeed(MOTOR1,255);
  //Función para activar el motor en dirección frontal dependiendo si está invertido-Parámetros: constante de motor (MOTOR1/MOTOR2).
  controller.forward();
  delay(500);
  //Función para detener el motor-Parámetros: constante de motor (MOTOR1/MOTOR2).
  controller.stop(MOTOR1);
  delay(500);
  //Función para activar el motor en dirección posterior dependiendo si está invertido-Parámetros: constante de motor (MOTOR1/MOTOR2).
  controller.backward();
  delay(500);
  controller.stop(MOTOR1);
}
