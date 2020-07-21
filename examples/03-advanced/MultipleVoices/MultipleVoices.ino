
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

/*
  DESCRIPTION          SPEED     PITCH     THROAT    MOUTH
  Elf                   72        64        110       160
  Little Robot          92        60        190       190
  Stuffy Guy            82        72        110       105
  Little Old Lady       82        32        145       145
  Extra-Terrestrial    100        64        150       200
  SAM                   72        64        128       128
*/



STM32SAM Elf(5);                        //
STM32SAM Little_Robot(5);               //
STM32SAM Stuffy_Guy(5);                 //
STM32SAM Little_Old_Lady(5);            //
STM32SAM Extra_Terrestrial(5);          //
STM32SAM Slow_SAM(3);                   // slow SAM
STM32SAM Fast_SAM(7);                   // fast SAM
STM32SAM SAM(5);                        // default SAM


#include <itoa.h>                       // for Roger's core


void setup() {

  SAM.begin();           // Only 1 voice need to be started to activate all voices


  Elf                   .setVoice( 72   /*pitch*/ , 64 /*speed*/ , 160 /*mouth*/ , 110 /*throat*/);
  Little_Robot          .setVoice( 60   /*pitch*/ , 92 /*speed*/ , 190 /*mouth*/ , 190 /*throat*/);
  Stuffy_Guy            .setVoice( 72   /*pitch*/ , 82 /*speed*/ , 105 /*mouth*/ , 110 /*throat*/);
  Little_Old_Lady       .setVoice( 72   /*pitch*/ , 82 /*speed*/ , 145 /*mouth*/ , 145 /*throat*/);
  Extra_Terrestrial     .setVoice( 64   /*pitch*/ , 100/*speed*/ , 200 /*mouth*/ , 150 /*throat*/);
  Fast_SAM              .setVoice( 64   /*pitch*/ , 72 /*speed*/ , 160 /*mouth*/ , 110 /*throat*/);
  Slow_SAM              .setVoice( 64   /*pitch*/ , 72 /*speed*/ , 160 /*mouth*/ , 110 /*throat*/);
  SAM                   .setVoice( 64   /*pitch*/ , 72 /*speed*/ , 160 /*mouth*/ , 110 /*throat*/);


  Elf                   .say("i am, elf!");
  Little_Robot          .say("i am, Little Robot   !");
  Stuffy_Guy            .say("i am, Stuffy Guy !");
  Little_Old_Lady       .say("i am, Little Old Lady!");
  Extra_Terrestrial     .say("i am, Extra Terrestrial!");
  Fast_SAM              .say("i am, fast SAM!");
  Slow_SAM              .say("i am, slow SAM!");
  SAM                   .say("i am, SAM!");

}

void loop() {

  char number[256];

  for (int i = 0; i < 256; i = i + 1) {


    SAM                   .say( itoa(i, number, 10)); delay(100);
    Slow_SAM              .say( itoa(i, number, 10)); delay(100);
    Fast_SAM              .say( itoa(i, number, 10)); delay(100);
    Elf                   .say( itoa(i, number, 10)); delay(100);
    Little_Robot          .say( itoa(i, number, 10)); delay(100);
    Stuffy_Guy            .say( itoa(i, number, 10)); delay(100);
    Little_Old_Lady       .say( itoa(i, number, 10)); delay(100);
    Extra_Terrestrial     .say( itoa(i, number, 10)); delay(100);

    delay(300);



  }







}
