#include <TypeDefine.h>

#define leftMotorA A5
#define leftMotorB A4
#define leftMotorEn 3
#define rightMotorA 5
#define rightMotorB 2
#define rightMotorEn 6

#define rightLed 10
#define leftLed A1
#define backLed A2
#define frontLed 11
#define buzz A3
#define delayTime 1000

bool state = 1;
C command;

void setup()
{
  Serial.begin(9600);
  pinMode(rightLed, OUTPUT); pinMode(leftLed, OUTPUT);
  pinMode(backLed, OUTPUT); pinMode(frontLed, OUTPUT);
  pinMode(buzz, OUTPUT);
  pinMode(leftMotorA, OUTPUT); pinMode(leftMotorB, OUTPUT); pinMode(leftMotorEn, OUTPUT);
  pinMode(rightMotorA, OUTPUT); pinMode(rightMotorB, OUTPUT); pinMode(rightMotorEn, OUTPUT);

  moveStop();
}

void loop()
{
  //moveForward();
  if(Serial.available() != 0)
  {
    command = Serial.read();
    switch(command)
    {
      case 'F': moveForward(); delay(delayTime); break;
      case 'B': moveBackward(); delay(delayTime); break;
      case 'R': moveRight(); delay(delayTime); break;
      case 'L': moveLeft(); delay(delayTime); break;
      case 'S': moveStop(); delay(delayTime); break;
      case 'V': digitalWrite(buzz, 1); delay(delayTime); break;
      case 'W': digitalWrite(frontLed, 1); delay(delayTime); break;
    }
    moveStop();
  }
}
