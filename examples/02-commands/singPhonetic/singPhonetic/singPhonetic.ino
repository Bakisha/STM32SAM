
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


void setup() {
  // put your setup code here, to run once:
  voice1.begin();

  voice1.sayPhonetic ( "/HEH5EH4EH3EH2EH2EH3EH4EH5EHLP.") ;

  voice1.sayPhonetic ( "/H8EH7EH6EH5EH4EH3EH2EH1EHLP.") ;


  voice1.sayPhonetic("AY5 AEM EY TAO4LXKIHNX KAX4MPYUX4TAH.");

  voice1.sayPhonetic("GOW4 AH/HEH3D PAHNK.");

  voice1.sayPhonetic("MEYK MAY8 DEY.");

}

void loop() {


  // say phonetic
  voice1.sayPhonetic ( "WAY2 SHUH7D AY WAO5K TUX DHAH STOH5R.") ;

  voice1.sayPhonetic ( "WAY7 SHUH2D AY WAO7K TUX DHAH STOH5R.") ;

  voice1.sayPhonetic ( "WAY5 SHUH7D AY2 WAO7K TUX DHAH STOHR.") ;

  voice1.sayPhonetic ( "WAY5 SHUHD AY7 WAO2K TUX7 DHAH STOHR.") ;

  voice1.sayPhonetic ( "WAY5 SHUHD AY WAO5K TUX DHAH STOH2OH7R.") ;

  // sing phonetic
  voice1.singPhonetic ( "WAY2 SHUH7D AY WAO5K TUX DHAH STOH5R.") ;

  voice1.singPhonetic ( "WAY7 SHUH2D AY WAO7K TUX DHAH STOH5R.") ;

  voice1.singPhonetic ( "WAY5 SHUH7D AY2 WAO7K TUX DHAH STOHR.") ;

  voice1.singPhonetic ( "WAY5 SHUHD AY7 WAO2K TUX7 DHAH STOHR.") ;

  voice1.singPhonetic ( "WAY5 SHUHD AY WAO5K TUX DHAH STOH2OH7R.") ;


}
