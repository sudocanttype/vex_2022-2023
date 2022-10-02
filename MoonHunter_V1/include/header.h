#include "vex.h"

#ifndef HEADER_H
#define HEADER_H
void splitArcadeMecanum(controller Controller1, motor leftMotorA, motor leftMotorB, motor rightMotorA, motor rightMotorB, int db);
void flywheelToggle(controller Controller1, motor_group Flywheel);
void intakeToggle(controller Controller1, motor intake);
void indexerToggle(controller Controller1, motor indexer);
#endif
