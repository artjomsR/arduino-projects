#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

const int TIMER_INCREMENTS = 200;

//LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display
int timer = 0;

const int trigPin = 9;
const int echoPin = 10;


long duration;
int distance;

void setup()
{
//  lcd.init();                      // initialize the lcd 
//  // Print a message to the LCD.
//  lcd.backlight();
//  lcd.cursor();
//  lcd.clear();
//  lcd.setCursor(1,0);
//  lcd.print("hello everyone");
//  lcd.setCursor(1,1);
//  lcd.print("konichiwaa");
//  delay(200);

  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication
}

// the loop function runs over and over again forever
void loop() {
//  digitalWrite(LED_BUILTIN, LOW);   // Turn the LED on (Note that LOW is the voltage level
//
//  delay(1000);                      // Wait for a second
//  digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED off by making the voltage HIGH
//  delay(2000);                      // Wait for two seconds (to demonstrate the active low LED)
  
//  lcd.clear();
//  lcd.print(timer);
//  timer +=TIMER_INCREMENTS;
//  delay(TIMER_INCREMENTS);

  
//// Clears the trigPin
//digitalWrite(trigPin, LOW);
//delayMicroseconds(2);
//// Sets the trigPin on HIGH state for 10 micro seconds
//digitalWrite(trigPin, HIGH);
//delayMicroseconds(10);
//digitalWrite(trigPin, LOW);
//// Reads the echoPin, returns the sound wave travel time in microseconds
//duration = pulseIn(echoPin, HIGH);
//// Calculating the distance
//distance= duration*0.034/2;
//// Prints the distance on the Serial Monitor
//Serial.print("Distance: ");

Serial.print(digitalRead(echoPin));
Serial.print(digitalRead(trigPin));
Serial.println(analogRead(A5));
delay(200);
}
