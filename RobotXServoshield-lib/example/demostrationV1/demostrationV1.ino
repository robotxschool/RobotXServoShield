#include<RobotXServoshield.h>
void setup() {
  Serial.begin(115200);
  pinMode(13, OUTPUT);
  delay(50);
  for (int i=0;i<=11;i++) {
    servoReset(i);
  }


  
   for (int i=0;i<=11;i++) {
    servoInit(i,1500);
   }
delay(5000);
}

void loop() {
/*
    servoTurn(0, 544);

  delay(5000);

    servoTurn(0, 2500);

  delay(5000);
   /*
  //servoTurn(1, 900, 1);
  delay(5000);
   for (int i=5;i<=11;i++) {
    servoTurn(i, 700, 5);delay(300);
  }
  

  delay(5000);
  for (int i=0;i<=4;i++) {
    servoTurn(i, 700, 9);
  }
  //servoTurn(1, 1500, 1);
  

  delay(5000);
   for (int i=0;i<=11;i++) {
    servoTurn(i, 2000, 0);
  }

  delay(5000);
  */  
}
