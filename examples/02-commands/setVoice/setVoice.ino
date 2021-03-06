
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

  voice1.begin();                           // start voice with default  pitch (64), speed (72), mouth (128) and throat (128)

}

void loop() {

  voice1.setVoice();                          // set default pitch (64), speed (72), mouth (128) and throat (128)

  voice1.say("Hello world!");

  delay(500);

  voice1.setVoice( random(256) /*pitch*/ , random(256) /*speed*/ , random(256) /*mouth*/ , random(256) /*throat*/ );

  voice1.say("Hello world!");

  delay(500);


}