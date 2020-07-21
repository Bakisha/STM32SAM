
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


  voice1.sam ("/HEHLOW3 EH5VRIXWAHN. IHT SHUH4R IHZ NAY3S - TAX BIY /HIY4R TUH7DEY."        ,  1 /*phonetic*/,  0 /*singmode*/,  64 /*pitch*/ , 74 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );
  voice1.sam ( "AY3 AEM SAE4M -"                                                            ,  1 /*phonetic*/,  0 /*singmode*/,  64 /*pitch*/ , 74 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );
  voice1.sam ( "DHAX BRAE4ND NUW5 VOY4S FOHR DHAX KAA4MIXDOH6R"                             ,  1 /*phonetic*/,  0 /*singmode*/,  64 /*pitch*/ , 74 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );
  voice1.sam ( "SIH4KSTIYFOH6R KUMPYUW4TER."                                                ,  1 /*phonetic*/,  0 /*singmode*/,  64 /*pitch*/ , 77 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );
  voice1.sam ( "AY4 AEM DHAX MOW5ST VER4SIXTUL -"                                           ,  1 /*phonetic*/,  0 /*singmode*/,  64 /*pitch*/ , 74 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );
  voice1.sam ( "AH5NDERSTAE4NDIXBUL SPIY5CH SIH3NTHAXSAY7ZER"                               ,  1 /*phonetic*/,  0 /*singmode*/,  64 /*pitch*/ , 72 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );
  voice1.sam ( "AAN DHAX MAA3RKIXT."                                                        ,  1 /*phonetic*/,  0 /*singmode*/,  64 /*pitch*/ , 74 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );
  voice1.sam ( "AE4AE7ND- AY4 AEM DHAX LOHOW4EHST PRAY4ST- AHV DHEHM AO4UL."                ,  1 /*phonetic*/,  0 /*singmode*/,  64 /*pitch*/ , 74 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );
  voice1.sam ( "BAH6T WHAH4T KAEN YUW DUW3 WHIHTH MIYIY."                                   ,  1 /*phonetic*/,  0 /*singmode*/,  64 /*pitch*/ , 74 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );
  voice1.sam ( "WAY7 YUW3 KAEN PUH5T MIY-IH5NTUX YOHR OW7N PROH3GRAEMZ."                    ,  1 /*phonetic*/,  0 /*singmode*/,  64 /*pitch*/ , 74 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );
  voice1.sam ( "/HAW4 WUHD YUW4 LAYK YOHR BIH3ZNIXS SAO5FTWEHR TUX SEY-"                    ,  1 /*phonetic*/,  0 /*singmode*/,  64 /*pitch*/ , 74 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );
  voice1.sam ( "PLIY4Z EH5NTER DHIH4S WIY6KS PER3CHAHSIXZ."                                 ,  1 /*phonetic*/,  0 /*singmode*/,  64 /*pitch*/ , 74 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );
  voice1.sam ( "OH3ER- IHMAE3JIXN AEN EHDVEH4NCHER GEY6M DHAET DAH6Z DHIH4S."               ,  1 /*phonetic*/,  0 /*singmode*/,  64 /*pitch*/ , 74 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );
  voice1.sam ( "DHIY EH3LF WAHZ KAE3PCHERD-BAY DHAX JAY3IXNT."                              ,  1 /*phonetic*/,  0 /*singmode*/,  64 /*pitch*/ , 74 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );
  voice1.sam ( "/HIY BIHGAE5N TUX KRAA3IY-AEND /HIY SEH4D."                                 ,  1 /*phonetic*/,  0 /*singmode*/,  64 /*pitch*/ , 74 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );
  voice1.sam (  "OH5OW7 NAX5OW. PLIY5Z DOWNT /HER5T MIY-MIH6STER JAYIXNT?"                  ,  1 /*phonetic*/,  0 /*singmode*/,  31 /*pitch*/ , 74 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );
  voice1.sam ( "BAH6T DHAX JAY4IXNT WAHZ VEH3RIY MIY6N-"                                    ,  1 /*phonetic*/,  0 /*singmode*/,  64 /*pitch*/ , 76 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );
  voice1.sam (  "AEND /HIY4 OW3NLIY SEHD-"                                                  ,  1 /*phonetic*/,  0 /*singmode*/,  64 /*pitch*/ , 76 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );
  voice1.sam (  "/HOW2- /HOW4- /HOW."                                                       ,  1 /*phonetic*/,  0 /*singmode*/,  120/*pitch*/ , 80 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );
  voice1.sam ( "DHEH5R IHZ NOW LIH3MIXT-TUX DHAX PAA4SAXBUL AE5PLIXKEY3SHUNZ-"              ,  1 /*phonetic*/,  0 /*singmode*/,  64 /*pitch*/ , 72 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );
  voice1.sam ( "AHV SPIY4CH IHN YOH7R PROH3GRAEMZ."                                         ,  1 /*phonetic*/,  0 /*singmode*/,  64 /*pitch*/ , 72 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );
  voice1.sam ( "AO3LSOW7W3- AY4 AEM VEH3RIY IY4ZIY TUX YUW4Z."                              ,  1 /*phonetic*/,  0 /*singmode*/,  64 /*pitch*/ , 72 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );
  voice1.sam ( "EH2NIYWAH6N KAEN AE5DSPIY5CH-TUX6 AH BEY4SIHKQPROH4GRAEM."                  ,  1 /*phonetic*/,  0 /*singmode*/,  64 /*pitch*/ , 72 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );
  voice1.sam ( "AY4 KAEN IY3VIXN TAOK VEH4RIY KWIH4KLIY."                                   ,  1 /*phonetic*/,  0 /*singmode*/,  64 /*pitch*/ , 72 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );
  voice1.sam (  "LIH4SUN TUX6 DHIH3S WAHN."                                                 ,  1 /*phonetic*/,  0 /*singmode*/,  64 /*pitch*/ , 72 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );
  voice1.sam ( "PIY4TER PAY3PER- PIH4KT AH PEH4K AHV PIH4KULD PEH4PERZ."                    ,  1 /*phonetic*/,  0 /*singmode*/,  64 /*pitch*/ , 30 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );
  voice1.sam (  "/HAW3 MEHNIY PEH4KS AHV PIH4KULD PEH4PERZ-DIHD PIY4TER PAY3PER PIH6K."     ,  1 /*phonetic*/,  0 /*singmode*/,  64 /*pitch*/ , 28 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );
  voice1.sam ( "QQQQ WWAW7IY1IY3IY. DHAE3T WHAHZ AH TAH4FIY."                               ,  1 /*phonetic*/,  0 /*singmode*/,  64 /*pitch*/ , 100/*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );
  voice1.sam ( "EH2NIYWEY6- YUW4 GEHT DHIY AYDIY5AH."                                       ,  1 /*phonetic*/,  0 /*singmode*/,  64 /*pitch*/ , 72 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );
  voice1.sam (  "SAE3M IHZ DHIY MOW3STEHKSAY4TIHNX NUW4 PRAA4DAHKT - AHV DHIHS YIY4R."      ,  1 /*phonetic*/,  0 /*singmode*/,  64 /*pitch*/ , 72 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );
  voice1.sam (  "SOH3OW7-/HAW4AHBAW3T IHT. WOH3NT YUW PLIY2Z TEY6KMIY /HOW6M?"              ,  1 /*phonetic*/,  0 /*singmode*/,  64 /*pitch*/ , 72 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );
  voice1.sam ( "Q SAE4M IHZ /HIY3R TUX STEY4IY."                                            ,  1 /*phonetic*/,  0 /*singmode*/,  64 /*pitch*/ , 72 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );
  voice1.sam (  "THAE2NXKS FOHR LIH4SUNIHNX EHVRIXBAH5DIY."                                 ,  1 /*phonetic*/,  0 /*singmode*/,  64 /*pitch*/ , 72 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );
  voice1.sam ( "AY /HOW3P YUW EHNJOY4D-MAYLIH4TUL TAOK."                                    ,  1 /*phonetic*/,  0 /*singmode*/,  64 /*pitch*/ , 72 /*speed*/ , 128 /*mouth*/ , 128 /*throat*/ );



}

void loop() {



}
