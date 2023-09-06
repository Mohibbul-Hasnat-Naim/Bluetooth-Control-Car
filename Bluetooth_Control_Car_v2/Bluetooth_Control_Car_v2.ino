#include <TypeDefine.h>

#define leftMotorA A5
#define leftMotorB A4
#define leftMotorEn 3
#define rightMotorA 5
#define rightMotorB 2
#define rightMotorEn 6

#define frontLed 11
#define backLed A2
#define leftLed A1
#define rightLed 10
#define buzz A3
#define delayTime 0

bool buzState = 0;
char command;

void setup()
{
  Serial.begin(9600);
  
  pinMode(leftMotorA, OUTPUT); pinMode(leftMotorB, OUTPUT); pinMode(leftMotorEn, OUTPUT);
  pinMode(rightMotorA, OUTPUT); pinMode(rightMotorB, OUTPUT); pinMode(rightMotorEn, OUTPUT);
  pinMode(leftLed, OUTPUT); pinMode(rightLed, OUTPUT); pinMode(frontLed, OUTPUT); pinMode(backLed, OUTPUT);
  pinMode(buzz, OUTPUT);

  digitalWrite(leftMotorEn, 1); digitalWrite(rightMotorEn, 1);
}

void loop()
{
 // allLed();
  if(Serial.available() != 0)
  {
    command = Serial.read();
  switch(command)
    {
      Serial.println(command);
      case 'F': moveForward(); break;
      case 'B': moveBackward(); break;
      case 'R': moveRight(); break;
      case 'L': moveLeft(); break;
      case 'S': moveStop(); break;
      case 'I': moveFR(); break;
      case 'G': moveFL(); break;
      case 'J': moveBR(); break;
      case 'H': moveBL(); break;
      case 'V': buzState = !buzState; digitalWrite(buzz, buzState); break;
      case 'W': digitalWrite(frontLed, 0); break;
      case 'w': digitalWrite(frontLed, 1); break;
    }
  }
}
