#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

const int trigPin = 9;
const int echoPin = 10;

int timer = 0;
const int TIMER_INCREMENTS = 200;

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
  // Print a message to the LCD.
  lcd.backlight();
  lcd.cursor();
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("hello everyone");
  lcd.setCursor(1,1);
  lcd.print("konichiwaa");
  delay(200);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(LED_BUILTIN, LOW);   // Turn the LED on (Note that LOW is the voltage level

  delay(1000);                      // Wait for a second
  digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED off by making the voltage HIGH
  delay(2000);                      // Wait for two seconds (to demonstrate the active low LED)
  
  lcd.clear();
  lcd.print(timer);
  timer +=TIMER_INCREMENTS;
  delay(TIMER_INCREMENTS);

  long duration = 0;
digitalWrite(trigPin, LOW);
delayMicroseconds(5);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);
Serial.println(duration);
}
