


# STM32SAM
Speech synthesis for STM32 series of microcontrollers, for Arduino IDE (stm32duino and Roger's core), ported from original source code: https://github.com/s-macke/SAM


## Hardware:

Compatible with any STM32 board that stm32duino core support, must have PA8 pin on TIM1 CH1

## SCHEMATICS:


(not to scale) :

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




License
=======

The software is a reverse-engineered version of a software 
published more than 34 years ago by "Don't ask Software".

The company no longer exists. Any attempt to contact the original
authors failed. Hence S.A.M. can be best described as Abandonware
(http://en.wikipedia.org/wiki/Abandonware)

As long this is the case I cannot put my code under any specific open
source software license. However the software might be used under the
"Fair Use" act (https://en.wikipedia.org/wiki/FAIR_USE_Act) in the USA.
