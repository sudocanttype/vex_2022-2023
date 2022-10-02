#include "vex.h"

using namespace vex;

void splitArcadeMecanum(controller Controller1, motor leftMotorA, motor leftMotorB, motor rightMotorA, motor rightMotorB, int db)
{

  int blSpeed = Controller1.Axis3.position() + Controller1.Axis1.position() - Controller1.Axis4.position();
    
  int alSpeed = Controller1.Axis3.position() + Controller1.Axis1.position() + Controller1.Axis4.position();
    
  int brSpeed = Controller1.Axis3.position() - Controller1.Axis1.position() + Controller1.Axis4.position();
    
  int arSpeed = Controller1.Axis3.position() - Controller1.Axis1.position() - Controller1.Axis4.position();

  if (abs(blSpeed) < db)
  {
    leftMotorB.setVelocity(0, percent);
  }
  else
  {
    leftMotorB.setVelocity(blSpeed, percent);
  }

  if (abs(alSpeed) < db)
  {
    leftMotorA.setVelocity(0, percent);
  }
  else
  {
    leftMotorA.setVelocity(alSpeed, percent);
  }

  if (abs(arSpeed) < db)
  {
    rightMotorA.setVelocity(0, percent);
  }
  else
  {
    rightMotorA.setVelocity(arSpeed, percent);
  }

  if (abs(brSpeed) < db)
  {
    rightMotorB.setVelocity(0, percent);
  }
  else
  {
    rightMotorB.setVelocity(brSpeed, percent);
  }

  leftMotorB.spin(vex::forward);
  leftMotorA.spin(vex::forward);
  rightMotorA.spin(vex::forward);
  rightMotorB.spin(vex::forward);

}

void arcadeMecanum(motor leftMotorA, motor leftMotorB, motor rightMotorA, motor rightMotorB)
{

}

void tankMecanum(motor leftMotorA, motor leftMotorB, motor rightMotorA, motor rightMotorB)
{

}
