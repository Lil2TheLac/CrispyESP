#include <Arduino.h>


//cd -LiteralPath "D:\WORK\1. [PERSONAL]\3. LIBRARIES\3. ESP32-STM32\CrispyESP"

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}