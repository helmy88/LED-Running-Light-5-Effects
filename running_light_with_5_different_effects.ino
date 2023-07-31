// Define the digital pins for the LEDs
const int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
const int numLeds = sizeof(ledPins) / sizeof(ledPins[0]);

// Set the delay time (in milliseconds) for each effect
const int delayTime = 100;

// Function declarations for the different effects
void runningLight();
void runningLightAlternate();
void runningLightWave();
void runningLightRandom();
void runningLightBouncing();

void setup() {
  // Set all LED pins as OUTPUT
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Call each effect one by one
  runningLight();
  runningLightAlternate();
  runningLightWave();
  runningLightRandom();
  runningLightBouncing();
}

// Effect 1: Running Light - All LEDs light up one after another
void runningLight() {
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(delayTime);
    digitalWrite(ledPins[i], LOW);
  }
}

// Effect 2: Running Light - Alternate LEDs light up
void runningLightAlternate() {
  for (int i = 0; i < numLeds; i += 2) {
    digitalWrite(ledPins[i], HIGH);
    delay(delayTime);
    digitalWrite(ledPins[i], LOW);
  }
  for (int i = 1; i < numLeds; i += 2) {
    digitalWrite(ledPins[i], HIGH);
    delay(delayTime);
    digitalWrite(ledPins[i], LOW);
  }
}

// Effect 3: Running Light - LEDs light up in a wave pattern
void runningLightWave() {
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(delayTime);
  }
  for (int i = numLeds - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], LOW);
    delay(delayTime);
  }
}

// Effect 4: Running Light - LEDs light up randomly
void runningLightRandom() {
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[random(numLeds)], HIGH);
    delay(delayTime);
    digitalWrite(ledPins[i], LOW);
  }
}

// Effect 5: Running Light - LEDs bounce back and forth
void runningLightBouncing() {
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(delayTime);
  }
  for (int i = numLeds - 2; i > 0; i--) {
    digitalWrite(ledPins[i], LOW);
    delay(delayTime);
  }
}
