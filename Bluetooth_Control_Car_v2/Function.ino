
void allLed()
{
  digitalWrite(frontLed, 1); digitalWrite(backLed, 1);
  digitalWrite(leftLed, 1); digitalWrite(rightLed, 1);
}

//void speedControl(int speed)
//{
//  analogWrite(leftMotorEn, speed);
//  analogWrite(rightMotorEn, speed);
//}

void moveForward()
{
  //digitalWrite(leftMotorEn, 1); digitalWrite(rightMotorEn, 1);
  digitalWrite(leftMotorA, 1); digitalWrite(leftMotorB, 0);
  digitalWrite(rightMotorA, 1); digitalWrite(rightMotorB, 0);
  digitalWrite(frontLed, 1);
}

void moveBackward()
{
  //digitalWrite(leftMotorEn, 1); digitalWrite(rightMotorEn, 1);
  digitalWrite(leftMotorA, 0); digitalWrite(leftMotorB, 1);
  digitalWrite(rightMotorA, 0); digitalWrite(rightMotorB, 1);
  digitalWrite(backLed, 1);
}

void moveLeft()
{
  //digitalWrite(leftMotorEn, 1); digitalWrite(rightMotorEn, 1);
  digitalWrite(leftMotorA, 0); digitalWrite(leftMotorB, 1);
  digitalWrite(rightMotorA, 1); digitalWrite(rightMotorB, 0);
  digitalWrite(leftLed, 1);
}

void moveRight()
{
 // digitalWrite(leftMotorEn, 1); digitalWrite(rightMotorEn, 1);
  digitalWrite(leftMotorA, 1); digitalWrite(leftMotorB, 0);
  digitalWrite(rightMotorA, 0); digitalWrite(rightMotorB, 1);
  digitalWrite(rightLed, 1);
}

void moveStop()
{
  digitalWrite(leftMotorA, 0); digitalWrite(leftMotorB, 0);
  digitalWrite(rightMotorA, 0); digitalWrite(rightMotorB, 0);
  //digitalWrite(rightMotorEn, 0); digitalWrite(rightMotorEn, 0);

  digitalWrite(rightLed, 0); digitalWrite(leftLed, 0);
  digitalWrite(frontLed, 0); digitalWrite(backLed, 0);
  digitalWrite(buzz, 0);
}

void moveFR()
{
  //digitalWrite(leftMotorEn, 1); digitalWrite(rightMotorEn, 1);
  digitalWrite(leftMotorA, 1); digitalWrite(leftMotorB, 0);
  digitalWrite(rightMotorA, 0); digitalWrite(rightMotorB, 0);
  digitalWrite(rightLed, 1);
}

void moveFL()
{
  //digitalWrite(leftMotorEn, 1); digitalWrite(rightMotorEn, 1);
  digitalWrite(leftMotorA, 0); digitalWrite(leftMotorB, 0);
  digitalWrite(rightMotorA, 1); digitalWrite(rightMotorB, 0);
  digitalWrite(leftLed, 1);
}

void moveBR()
{
  //digitalWrite(leftMotorEn, 1); digitalWrite(rightMotorEn, 1);
  digitalWrite(leftMotorA, 0); digitalWrite(leftMotorB, 1);
  digitalWrite(rightMotorA, 1); digitalWrite(rightMotorB, 1);
  digitalWrite(rightLed, 1);
}

void moveBL()
{
  //digitalWrite(leftMotorEn, 1); digitalWrite(rightMotorEn, 1);
  digitalWrite(leftMotorA, 1); digitalWrite(leftMotorB, 1);
  digitalWrite(rightMotorA, 0); digitalWrite(rightMotorB, 1);
  digitalWrite(leftLed, 1);
}
