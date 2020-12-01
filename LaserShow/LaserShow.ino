// See LICENSE file for details
// Copyright 2016 Florian Link (at) gmx.de

#include "Laser.h"
#include "Drawing.h"
//#include "Cube.h"
#include "Objects.h"
//#include "Logo.h"

// Create laser instance (with laser pointer connected to digital pin 5)
Laser laser(5);

void setup()
{  
  laser.init();
}

void drawTestSquare()
{
  long centerX, centerY, w,h;
  int count = 10000;
  laser.setScale(2);
  laser.setOffset(0,0);

  for (int i = 0;i<count;i++) {
    Drawing::drawObject(draw_octogon, sizeof(draw_octogon)/4);
 
    }
}


void loop() {
  drawTestSquare();
}
