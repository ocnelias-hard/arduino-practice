int leds[] = {2, 3, 4, 5, 6};
int count = 5;
int current = 0;
int direction = 1;
int speed = 300;

void setup() {
  for (int i = 0; i < count; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < count; i++) {
    digitalWrite(leds[i], LOW);
  }

  digitalWrite(leds[current], HIGH);

  delay(speed);

  current += direction;

  if (current == count - 1 || current == 0) {
    direction = -direction;
  }
}