// Projeto 1 - LED piscante
int ledPin = 10;

//Setup = Executa uma única vez
void setup() {
  //pinMode = Define um dos pinos como saída
  //primeiro parâmetro(var. ledPin) = numero do pino
  //segundo parâmetro(OUTPUT) = Modo
  pinMode(ledPin, OUTPUT);
}

void loop() {
  //digitalWrite = Envia um valor HIGH ou LOW para ser enviado ao pino
  //HIGH = 5v
  //LOW = 0v
  digitalWrite(ledPin, HIGH);

  //Aguardar 1 segundo
  delay(200);
  digitalWrite(ledPin, LOW);
  delay(200);
}
