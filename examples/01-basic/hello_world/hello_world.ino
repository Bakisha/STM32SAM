
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
STM32SAM voice2(6);                          // start voice with custom speach speed (0 - 31 )


void setup() {
  // put your setup code here, to run once:
  voice1.begin();

  voice1.say ( "hello world, how are you? I am S T M 32 SAM, automated voice! ") ;

  voice2.say ( "hello world, how are you? I am S T M 32 SAM, automated voice! ") ;


delay(1000);


  voice1.sing ( "hello world, how are you? I am S T M 32 SAM, automated voice! ") ;

  voice2.sing ( "hello world, how are you? I am S T M 32 SAM, automated voice! ") ;


  

}

void loop() {
  // put your main code here, to run repeatedly:



}
