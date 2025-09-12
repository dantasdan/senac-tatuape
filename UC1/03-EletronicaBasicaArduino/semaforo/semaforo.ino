/**
Semáforo
@author Daniel Dantas
*/

void setup() {
  pinMode(13, OUTPUT); // Vermelho
  pinMode(12, OUTPUT); // Amarelo
  pinMode(11, OUTPUT); // Verde
  pinMode(2, OUTPUT); // Verde
  pinMode(3, OUTPUT); // Amarelo
  pinMode(4, OUTPUT); // Vermelho
}

void loop() {
  // Pino 13 e 2 Vermelho e verde
  digitalWrite(13, HIGH);
  digitalWrite(2, HIGH);
  delay(3000);
  digitalWrite(13, LOW);
  digitalWrite(2, LOW);

  // Pino 13 e 3 Vermelho e amarelo
  digitalWrite(13, HIGH);
  digitalWrite(3, HIGH);
  delay(3000);
  digitalWrite(13, LOW);
  digitalWrite(3, LOW);

  //Pino 11 e 4 Verde e vermelho 
  digitalWrite(11, HIGH);
  digitalWrite(4, HIGH);
  delay(3000);
  digitalWrite(11, LOW);
  digitalWrite(4, LOW);

// Pino 12 e 4 Amarelo e vermelho
digitalWrite(12, HIGH);
  digitalWrite(4, HIGH);
  delay(3000);
  digitalWrite(12, LOW);
  digitalWrite(4, LOW);
}