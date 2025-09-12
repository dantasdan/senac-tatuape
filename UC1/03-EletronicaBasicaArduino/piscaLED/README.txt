void setup() {
  pinMode(13, OUTPUT); = Modo do pin 13: SAIDA.
 linha 2: digitalWrite(13, HIGH); HIGH: saida de 5V ou 1 binário. Acenderá o LED
}

Apagamos a linha 2, agora usaremos o void loop! Para que o LED pisque

void loop() {
  digitalWrite(13, HIGH); Acenderá o LED
  delay(1500); por 1 segundo e meio
  digitalWrite(13, LOW); Apagará o LED
  delay(1500); por 1 segundo e meio
} 

Regras de etiqueta programação:

/**
Documentação
*/

/*
Comentário em Bloco
*/

// Comentário em Linha