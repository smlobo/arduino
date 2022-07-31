// Christmas card for Ryan
#include <UTFT.h>

// Declare which fonts we will be using
extern uint8_t Grotesk32x64[];

// Setup the board
UTFT myGLCD(ILI9486,38,39,40,41);

void setup() {
  // put your setup code here, to run once:
  randomSeed(analogRead(0));

  myGLCD.InitLCD();
  myGLCD.setFont(Grotesk32x64);

}

void loop() {
  // put your main code here, to run repeatedly:
  myGLCD.clrScr();

  // Snow
  for (int i=0; i<5000; i++)
  {
    //myGLCD.setColor(random(255), random(255), random(255));
    myGLCD.setColor(255, 255, 255);
    //myGLCD.drawPixel(2+random(476), 16+random(289));
    //myGLCD.drawPixel(random(479), random(319));
    //myGLCD.drawCircle(random(479), random(319), 5);
    myGLCD.fillCircle(random(479), random(319), 7);
  }
  //delay(2000);

  // Fill the screen white
  myGLCD.fillRect(0, 0, 479, 319);
  //delay(1000);

  // Top to bottom with red lines
  myGLCD.setColor(255, 0, 0);
  for (int i=0; i<320; i++) {
    myGLCD.drawLine(0, i, 479, i);
    delay(10);
  }

  // Message
  myGLCD.setColor(255, 255, 255);
  myGLCD.setBackColor(255, 0, 0);
  myGLCD.print("Merry", CENTER, 30);
  myGLCD.print("Christmas,", CENTER, 130);
  myGLCD.print("Ryan!!!", CENTER, 230);

  // Delay
  delay(5000);

  // Top to bottom with greenlines
  myGLCD.setColor(0, 100, 0);
  for (int i=0; i<320; i++) {
    myGLCD.drawLine(0, i, 479, i);
    delay(10);
  }

  // Message
  myGLCD.setColor(255, 255, 255);
  myGLCD.setBackColor(0, 100, 0);
  myGLCD.print("Love,", CENTER, 30);
  myGLCD.print("Amelia,", CENTER, 130);
  myGLCD.print("Mom & Dad", CENTER, 230);

  // Final delay before the repeat
  delay(5000);
}
