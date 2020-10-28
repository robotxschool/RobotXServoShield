#ifndef _RobotX_Servoshield_H_
#define _RobotX_Servoshield_H_

#include <Arduino.h>

void servoTurn(uint8_t Set_SerVo, uint16_t timeR, uint8_t sp = 0, uint8_t current = 0);
void servoReset(uint8_t servoNum);
void servoInit(uint8_t servoNum,uint16_t startPos=1500);
#endif //_RobotX_ServoShield_H_
