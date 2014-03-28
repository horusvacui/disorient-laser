/* Welcome to DmxSimple. This library allows you to control DMX stage and
 ** architectural lighting and visual effects easily from Arduino. DmxSimple
 ** is compatible with the Tinker.it! DMX shield and all known DIY Arduino
 ** DMX control circuits.
 **
 ** DmxSimple is available from: http://code.google.com/p/tinkerit/
 ** Help and support: http://groups.google.com/group/dmxsimple       */

/* To use DmxSimple, you will need the following line. Arduino will
 ** auto-insert it if you select Sketch > Import Library > DmxSimple. */


//SET PINKO TO 101

#include <DmxSimple.h>


void setup() {
  /* The most common pin for DMX output is pin 3, which DmxSimple
   ** uses by default. If you need to change that, do it here. */
  DmxSimple.usePin(3);

  /* DMX devices typically need to receive a complete set of channels
   ** even if you only need to adjust the first channel. You can
   ** easily change the number of channels sent here. If you don't
   ** do this, DmxSimple will set the maximum channel number to the
   ** highest channel you DmxSimple.write() to. */
  DmxSimple.maxChannel(503);

  // beam on
  DmxSimple.write(1,255);
  // set color
  DmxSimple.write(2,40);
  // sine wave patter
  DmxSimple.write(3,145);
  DmxSimple.write(4,0);
  DmxSimple.write(5,0);
  DmxSimple.write(6,0);
  DmxSimple.write(7,0);
  DmxSimple.write(8,0);
  DmxSimple.write(9,0);
  DmxSimple.write(10,0);
  DmxSimple.write(11,0);
  DmxSimple.write(12,0);

  DmxSimple.write(101,16); //put it in manual
  DmxSimple.write(102,81);
  DmxSimple.write(103,50);
  DmxSimple.write(104,255);
  DmxSimple.write(105,0);
  DmxSimple.write(106, 64);
  DmxSimple.write(107,64);
  DmxSimple.write(108,0);
  DmxSimple.write(109,0);
  DmxSimple.write(110,255);

  Serial.begin(9600);
}



void loop() {
  //DmxSimple.write(3, 25);

  int xScaleVar, yScaleVar, spinVar, brightness, rotate, dots, color , trace, oddSdcale, onOff, colorMode, pattern, yOffset, xOffset, oddScale, yScale, xScale, slowGrowth, eric1, eric2, eric3, eric4 ;
  /* Simple loop to ramp up brightness */
  //for (channel=1; channel < 256; channel++) {

  onOff = 1;
  colorMode = 2;
  pattern = 3;
  yOffset = 4;
  xOffset = 5;
  yScale = 6;
  xScale = 7;
  rotate = 8;
  oddScale = 9;
  slowGrowth = 10;
  dots = 11;
  trace = 12;


  //for (int i = 0; i <255; i ++){
  //}

  if (Serial.available() > 0) {
    int  inComing = Serial.read();
   if (inComing > 127){
       DmxSimple.write(4, inComing);
     
  }
   if (inComing < 127){
     DmxSimple.write(5, inComing);
   }
     if (inComing == 144){
       DmxSimple.write(3, inComing);
   }
     if (inComing == 229){
       DmxSimple.write(3, inComing);
    }
      if (inComing == 32){
       DmxSimple.write(3, inComing);
    }
      if (inComing == 108){
        DmxSimple.write(3, inComing);
    }
       if (inComing == 48){
       DmxSimple.write(3, inComing);
    }
    
    if (inComing == 165){
       DmxSimple.write(3, inComing);
    }
    
    
   

 //   DmxSimple.write(110, inComing);
  }

   for (int i = 0; i <255; i ++){
     DmxSimple.write(8, i);
  //   delay (10);
  }


}






