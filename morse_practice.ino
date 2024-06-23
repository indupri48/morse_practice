int keyPin = 8;
int speakerPin = 3;

int toneFrequencyHz = 800;

int previousKeyState = LOW;

void setup() {

  pinMode(keyPin, INPUT);
  pinMode(speakerPin, OUTPUT);

}

void loop() {
  
  int keyState = digitalRead(keyPin);

  if (keyState == HIGH) {
    if (previousKeyState == LOW){
      tone(speakerPin, toneFrequencyHz);
    }
  } else {
    if (previousKeyState == HIGH) {
      noTone(speakerPin);
    }
  }

  previousKeyState = keyState;
}
