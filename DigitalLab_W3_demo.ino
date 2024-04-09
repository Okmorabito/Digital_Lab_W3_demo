int ledPin1 = 32;
int buttonPin1 = 33;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(buttonPin1, INPUT);
}

void loop() {
  if (digitalRead(buttonPin1) == HIGH) {
    usbMIDI.sendNoteOn(60, 127, 1);
    digitalWrite(ledPin1, HIGH);
    delay(5);
  }
  else if (digitalRead(buttonPin1) == LOW) {
    usbMIDI.sendNoteOff(60, 0, 1);
    digitalWrite(ledPin1, LOW);
    delay(5);
  }
}
