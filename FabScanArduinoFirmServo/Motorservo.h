#ifndef MOTORSERVO_H
#define MOTORSERVO_H

#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <Servo.h>
extern Servo miServo;
void baudios(void);
float dir;
int val;

#endif

