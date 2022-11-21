#include <NewPing.h>
#define pinotrig 5
#define pinoecho 3
int buzzer = 7;

NewPing sonar(pinotrig, pinoecho);

void alerta(int distancia);

void setup() {
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  int dist = sonar.ping_cm();
  Serial.print("Distancia: ");
  Serial.println(dist);
  delay(500);
  alerta(dist);
}
//faixas de alerta escolhido 10, 20 e 30 cm
void alerta(int distancia){

  int tempo = distancia * 5;

  if(distancia <= 10){
    tone(buzzer, 50, tempo);
    delay(tempo);
  }else if(distancia > 10 && distancia <= 20){
    tone(buzzer, 50, tempo);
    delay(tempo);
  }else if(distancia > 20 && distancia <= 30){
    tone(buzzer, 50, tempo);
    delay(tempo);
  }

}