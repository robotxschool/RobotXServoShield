#include<RobotXServoshield.h>
void servoTurn(uint8_t Set_SerVo, uint16_t timeR, uint8_t sp = 0, uint8_t current = 0) {
	
  uint8_t packet8[4];
  
  packet8[0] = 0b00000000 | ((timeR & (0b0000111111000000)) >> 6);
  packet8[1] = 0b01000000 | (timeR & (0b0000000000111111));
  packet8[2] = 0b10000000 | (Set_SerVo << 2) | ((current & 0b00000110) >> 1);
  packet8[3] = 0b11000000 | ((current & 0b00000001) << 5) | (sp << 1);

  for (int i=0;i<=1;i++) Serial.write(packet8, sizeof(packet8));

}

void servoReset(uint8_t servoNum) {
	
  servoTurn(servoNum, 0);
  
}

void servoInit(uint8_t servoNum,uint16_t startPos=1500) {
	
  servoTurn(servoNum, 4095);
  servoTurn(servoNum, startPos);

}