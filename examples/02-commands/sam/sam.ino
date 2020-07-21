
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

  voice1.begin();                            // start voice with default  pitch (64), speed (72), mouth (128) and throat (128)


}

void loop() {


  char number[256];


  for (int i = 0; i < 256; i = i + 1) {



    voice1.sam ( itoa(i, number, 10),  0 /*phonetic*/,  1 /*singmode*/,  64 /*pitch*/ , 72 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );     // default SAM

    voice1.sam ( itoa(i, number, 10),  0 /*phonetic*/,  0 /*singmode*/,  64 /*pitch*/ , 72 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );     // default SAM

    delay(500);


  }

}
