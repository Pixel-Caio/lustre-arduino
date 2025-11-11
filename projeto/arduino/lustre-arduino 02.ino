// Definindo LEDs
int ledPin1 = 4;
int ledPin2 = 3;
int ledPin3 = 2;
// Definindo o Botão
int buttonPin = 9;
// Guardando o estado do botão
int buttonState = 0;

// Controle de tempo para o LED intermitente
unsigned long previousMillis = 0;
const long interval = 3000;
bool led2State = LOW;

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

  // LED do botão
  if (buttonState == LOW) {
    digitalWrite(ledPin3, HIGH);
  } else {
    digitalWrite(ledPin3, LOW);
  }

  // LED intermitente (sem travar o loop)
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    led2State = !led2State;
    digitalWrite(ledPin2, led2State);
  }
}
