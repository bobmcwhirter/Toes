#include <LiquidCrystal.h>

int pushButton = 2;
volatile int lastState = 0;
volatile int lastPressStart = 0;
volatile int roundNum = 1;
volatile int stitchNum = 0;

void buttonStateChange();

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  pinMode(pushButton, INPUT);
  //attachInterrupt( 0, buttonStateChange, CHANGE );
  Serial.begin(9600);
  Serial.print( "Round: " );
  Serial.println( roundNum );
  lcd.clear();
  delay(3000);
  lcd.begin(16, 2);
  lcd.setCursor(0,0);
  lcd.print("Toe-Tapper");
  lcd.setCursor(0,1);
  lcd.print("Copyright 2013");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("McWhirter");
  lcd.setCursor(0,1);
  lcd.print("Software, Inc.");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Ready!");

}

void loop() {
  //lcd.setCursor( 0,1);
  //lcd.print("hello, world!");
  //int duration = 0;
  delay(50);
/*
  if ( lastPressStart > 0 ) {
    duration = millis() - lastPressStart;
    if ( duration > 1500 ) {
      ++roundNum;
      stitchNum = 0;
      Serial.print( "Round: " );
      Serial.println( roundNum );
      lastPressStart = 0;
    }
  }
*/
}

/*
void buttonStateChange() {
  int duration = 0;
  int state = digitalRead( pushButton );
  if ( state == 1 ) {
    lastPressStart = millis();
  } else if ( state == 0 ) {
    duration = millis() - lastPressStart; 
    lastPressStart = 0;
  }

  if ( duration > 150 ) {
    if ( duration < 1000 ) {
      ++stitchNum;
      Serial.print( "Stitch: " );
      Serial.println( stitchNum );
    }
  }
}



*/
