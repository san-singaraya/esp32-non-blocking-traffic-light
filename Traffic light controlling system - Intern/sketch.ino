#define RED_LED 15
#define YELLOW_LED 4
#define GREEN_LED 2

unsigned long oldTime = 0;
int state = 0;

void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);

  digitalWrite(RED_LED, HIGH);
}

void loop() {

  unsigned long newTime = millis();

  // RED → GREEN after 5 seconds
  if (state == 0 && newTime - oldTime >= 5000) {
    digitalWrite(RED_LED, LOW);
    digitalWrite(GREEN_LED, HIGH);

    oldTime = newTime;
    state = 1;
  }

  // GREEN → YELLOW after 5 seconds
  if (state == 1 && newTime - oldTime >= 5000) {
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(YELLOW_LED, HIGH);

    oldTime = newTime;
    state = 2;
  }

  // YELLOW → RED after 2 seconds
  if (state == 2 && newTime - oldTime >= 2000) {
    digitalWrite(YELLOW_LED, LOW);
    digitalWrite(RED_LED, HIGH);

    oldTime = newTime;
    state = 0;
  }
}