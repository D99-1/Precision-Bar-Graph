

const int pins[] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };

void setup() {
  for (int i = 0; i < 10; i++) {
    pinMode(pins[i], OUTPUT);
  }
}

int counter = 0;
void loop() {
  for (int i = 0; i < 10; i++) {
    digitalWrite(pins[i], HIGH);
  }
  counter++;
  delay(50);
}
