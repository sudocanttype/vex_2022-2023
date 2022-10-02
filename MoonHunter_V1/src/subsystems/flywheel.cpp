#include "vex.h"

using namespace vex;

//competition Competition;

bool flywheelBool = false;

void flywheelToggle(controller Controller1, motor_group Flywheel)
{
  if (Controller1.ButtonA.pressing())
  {
    if (flywheelBool == false)
    {
      Flywheel.spin(forward, 100, percent);
      flywheelBool = true;
    }
    else if (flywheelBool == true)
    {
      Flywheel.stop();
      flywheelBool = false;
    }
  }
}

void flywheelSpin(controller Controller1, motor_group Flywheel)
{
  
}