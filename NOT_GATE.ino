
#include <LiquidCrystal.h> // LCD HEADER FILE

const int inputA = 7;



LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
   pinMode(inputA, OUTPUT); // Set both pins to outputs
   lcd.begin(16,2);

   
  lcd.setCursor(0,0); 
lcd.print("NOT GATE"); // Print title:

}

void loop (){
  digitalWrite(inputA,HIGH);
     lcd.setCursor(0,1);
lcd.print("1 -> 0");
  delay(1000);


    digitalWrite(inputA,LOW);
       lcd.setCursor(0,1);
lcd.print("0 -> 1");
  delay(1000);
}