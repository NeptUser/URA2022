#include <Servo.h>

bool luminosidade(int ld1, int ld2);

int bts;
int ldrdir;
int ldresq;
int ldrR = A0;
int ldrL = A1;
int button = 3;
int bts;
Servo motorH;

void setup() {
  motor.attach(2);


}

void loop() {
  
  luz = luminosidade(ldrdir, ldresq);

  while(luz == true){
    if(ldrdir > ldresq){
      //motor para direita

    }else{
      //motor para esquerda
      
    }
  }

}

bool luminosidade(int ld1, int ld2){
  if(ld1 > 50 || ld2 > 50){
    return true;
  }else{
    return false;
  }
}
