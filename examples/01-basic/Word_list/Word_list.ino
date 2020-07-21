
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



STM32SAM voice1(5);                          // start voice with custom speach speed (0 - 31 )

#define NUMBER_OF_WORDS 16                   // set number of words for playlist. Must have at least 1, and must match lenght of a array



//const char * const WORDS_PLAYLIST            //  list in FLASH, pointers in FLASH memory
//const char *  WORDS_PLAYLIST                 //  list in FLASH, pointers in RAM memory
char *  WORDS_PLAYLIST                       //  list in RAM, pointers in RAM memory
[NUMBER_OF_WORDS ] =
{
  "Heloo world.",
  "Today is nice day.",
  "Why?",
  "Because i say so!",
  "Because i can talk! ",
  "Because i can sing!",
  "Because i can swim!  ",
  "  ",
  "lol  ",
  ",,,,,,  ",
  "  ",
  "This list can also be empty  ",
  "  "
  "  ",
  "  ",
  "  "
};


void setup() {

  voice1.begin();


}

void loop() {
  // put your main code here, to run repeatedly:


  for (int i = 0; i < NUMBER_OF_WORDS; i = i + 1) {

    voice1.say ( WORDS_PLAYLIST[i]);

    delay(500);

  }





}
