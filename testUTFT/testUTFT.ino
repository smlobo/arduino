// Test the UTFT library
#include <UTFT.h>

// Declare which fonts we will be using
extern uint8_t SmallFont[];
extern uint8_t BigFont[];
extern uint8_t SevenSegment96x144Num[];
extern uint8_t Grotesk32x64[];

//UTFT myGLCD(CTE32HR,38,39,40,41);
UTFT myGLCD(ILI9486,38,39,40,41);

void setup() {
  delay(100);
  // put your setup code here, to run once:
  // Setup the LCD
  myGLCD.InitLCD();
  //myGLCD.setFont(SmallFont);
  //myGLCD.setFont(BigFont);
  //myGLCD.setFont(SevenSegment96x144Num);
  myGLCD.setFont(Grotesk32x64);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Clear the screen and draw the frame
  myGLCD.clrScr();

  myGLCD.setColor(255, 0, 0);
  myGLCD.fillRect(0, 0, 479, 100);
  myGLCD.setColor(0, 255, 255);
  myGLCD.fillRect(0, 220, 479, 319);

  myGLCD.setColor(255, 255, 255);
  //myGLCD.print("Ryan Lobo", CENTER, 160);
  //myGLCD.print("012", CENTER, 110);
  myGLCD.print("Ryan Lobo", CENTER, 110);

  delay(10000);
}
