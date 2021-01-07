#include <Wire.h>
#include <LiquidCrystal_I2C.h>

const int trigPin = 9;
const int echoPin = 10;

int timer = 0;
const int TIMER_INCREMENTS = 1000;

LiquidCrystal_I2C lcd(0x27, 20, 4); // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd
  // Print a message to the LCD.
  lcd.backlight();
  lcd.cursor();
  lcd.clear();
  lcd.setCursor(1, 0);
  lcd.print("hello everyone");
  lcd.setCursor(1, 1);
  lcd.print("konichiwaa");
  delay(200);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  lcd.clear();
  lcd.print(timer);
  timer += TIMER_INCREMENTS;
  

  long duration = 0;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  lcd.setCursor(0, 1);
  Serial.println(duration);
  lcd.print(duration);

  delay(TIMER_INCREMENTS);
}
