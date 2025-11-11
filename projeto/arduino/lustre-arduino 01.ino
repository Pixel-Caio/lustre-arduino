// Definindo LEDs
int ledPin1 = 4;
int ledPin2 = 3;
int ledPin3 = 2;
// Definindo o Botão
int buttonPin = 9;
// Guardando o estado do botãp
int buttonState = 0;

void setup() {
  // Prepara os LEDs
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  // Preparando o botão com Pullup interno
  pinMode(buttonPin, INPUT_PULLUP);
  
// Deixando o primeiro LED sempre ligado
  digitalWrite(ledPin1, HIGH);

}

void loop() {
  // Lê o estado do botão
  buttonState = digitalRead(buttonPin);

  // Verifica se o botão foi pressionado (Low)
  if (buttonState == LOW) {
    // Liga o LED quando pressionado
    digitalWrite(ledPin3, HIGH);
  } else {
    // Em qualquer outra ocasião, ou seja não pressionado, ele desliga o LED.
    digitalWrite(ledPin3, LOW);
  }
  digitalWrite(ledPin2, HIGH);
  delay(3000);
  digitalWrite(ledPin2, LOW);
  delay(3000);
}
