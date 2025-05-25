#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {2, 3, 4, 5}; // Adjust as per wiring
byte colPins[COLS] = {6, 7, 8, 9}; // Adjust as per wiring

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

const int buzzerPin = 10;

int noteFreqs[8] = {262, 294, 330, 349, 392, 440, 494, 523};

void setup() {
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  char key = keypad.getKey();
  if (key) {
    Serial.println(key);

    switch (key) {
      case '1': tone(buzzerPin, noteFreqs[0]); break; // C4
      case '2': tone(buzzerPin, noteFreqs[1]); break; // D4
      case '3': tone(buzzerPin, noteFreqs[2]); break; // E4
      case '4': tone(buzzerPin, noteFreqs[3]); break; // F4
      case '5': tone(buzzerPin, noteFreqs[4]); break; // G4
      case '6': tone(buzzerPin, noteFreqs[5]); break; // A4
      case '7': tone(buzzerPin, noteFreqs[6]); break; // B4
      case '8': tone(buzzerPin, noteFreqs[7]); break; // C5
      default: noTone(buzzerPin); break;
    }
  } else {
    noTone(buzzerPin);
  }
}
