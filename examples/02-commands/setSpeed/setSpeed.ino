
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




STM32SAM voice1(5);                          // start voice with custom speech speed (0 - 31 )


#include <itoa.h>                           // for Roger's core


void setup() {

  voice1.begin();                           // start voice with default speed (72)


}

void loop() {


  char number[256];


  for (int i = 0; i < 256; i = i + 8) {

    voice1.setSpeed();                          // set default pitch (64)

    voice1.say (itoa(i, number, 10));         // convert integer to string

    delay(500);

    voice1.setSpeed(i);

    voice1.say("Hello world!");

    delay(500);
  }

}
