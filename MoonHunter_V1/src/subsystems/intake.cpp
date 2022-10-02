#include "vex.h"

using namespace vex;

//competition Competition;

bool intakeBool = false;
bool indexerBool = false;

void intakeToggle(controller Controller1, motor intake)
{
  if (Controller1.ButtonL1.pressing())
  {
    if (intakeBool == false)
    {
      intake.spin(reverse, 100, percent);
      intakeBool = true;
    }
    else if (intakeBool == true)
    {
      intake.stop();
      intakeBool = false;
    }
  }
}

void intakeSpin(controller Controller1, motor intake)
{

}

void indexerToggle(controller Controller1, motor indexer)
{
  if (Controller1.ButtonUp.pressing())
  {
    if (indexerBool == false)
    {
      indexer.spin(forward, 100, percent);
      indexerBool = true;
    }
    else if (indexerBool == true)
    {
      indexer.stop();
      indexerBool = false;
    }
  }
}

void indexerSpin(controller Controller1, motor indexer)
{

}