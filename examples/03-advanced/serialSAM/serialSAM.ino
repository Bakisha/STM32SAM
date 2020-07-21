
/*

  SCHEMATICS (not to scale) :

  STM32F103C8/B - STM32F401CC - STM32F411CE - STM32F407VE :

  .-------------------------------------.
  |                                     |
  | STM32FxxxXXxx                       |
  .-------------------------------------.
   |G                             P|
   |N                             A|
   |D                             8-----|R1|---+--|C2|-----------|
   |                                           |                 --
   |                                           C                 || P1
   |                                           1                 ||<----------------| OUDIO OUT
   |                                           |                 --
   .-------------------------------------------+-----------------+------------------| GND
                                             GND


  R1 = 100-500 Ohm
  C1 = 10-100 nF
  C2 = 10 uF
  P1 = 10KOhm potentiometer




  HAVE FUN :-)

*/

#include <STM32SAM.h>


STM32SAM voice1;                             // start voice instance with default (5) speed

int pos = 0;
char line [256];
char c;

#define Print Serial1                        // select serial port

void setup() {
  // put your setup code here, to run once:
  voice1.begin();

  Print.begin(115200);

  delay(1000);


  Print.println ( "hello world, I am S T M 32 SAM, automated voice! ") ;
  voice1.say ( "hello world,  I am S T M 32 SAM, automated voice! ") ;

}


void loop() {

  if (Print.available() > 0) {
    c = (char)Print.read();
    line[pos] = c;
    if ((c == '\n') | (pos > 254) ) { // end of string or maximum number of chars?
      pos = pos + 1;  //
      line[pos] = 0; // EOL
         Print.println(line); // print back
      voice1.say(line);// play 
      pos = 0; // reset position
    }
    else {
      pos = pos + 1;

    }
  }
}
