
#include <LiquidCrystal.h> // LCD HEADER FILE

const int inputA = 7;
const int inputB = 8;


LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  pinMode(inputA, OUTPUT); // Set both pins to outputs
  pinMode(inputB, OUTPUT);

  lcd.begin(16,2); // Set LCD for 16 columns and 2 rows

lcd.setCursor(0,0); 
lcd.print("OR GATE"); // Print title:
}

void loop() {


  // TRUTH TABLE
  digitalWrite(inputA,LOW);
  digitalWrite(inputB,LOW);
   lcd.setCursor(0,1);
lcd.print("0,0 -> 0");
  delay(1000);

 digitalWrite(inputA,HIGH);
  digitalWrite(inputB,LOW);
     lcd.setCursor(0,1);
lcd.print("1,0 -> 1");
  delay(1000);

  
  digitalWrite(inputA,LOW);
  digitalWrite(inputB,HIGH);
     lcd.setCursor(0,1);
lcd.print("0,1 -> 1");

  delay(1000);

 digitalWrite(inputA,HIGH);
  digitalWrite(inputB,HIGH);
       lcd.setCursor(0,1);
lcd.print("1,1 -> 1");

  delay(1000);
}