#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 64
#define SCREEN_HEIGHT 32

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  Serial.begin(9600);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print("Type text...");
  display.display();
}

void loop() {
  if (Serial.available()) {
    String input = Serial.readStringUntil('\n');
    display.clearDisplay();
    display.setCursor(0, 0);
    display.println("You typed:");
    display.setCursor(0, 10);
    display.println(input);
    display.display();
  }
}
