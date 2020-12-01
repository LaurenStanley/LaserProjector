// See LICENSE file for details
// Copyright 2016 Florian Link (at) gmx.de
#include "Drawing.h"

void Drawing::drawObject(const unsigned short* data, int size, long translateX, long translateY)
{
  const unsigned short* d = data;
  unsigned short posX;
  unsigned short posY;
  while (size>0) {
    posX = pgm_read_word(d);
    d++;
    posY = pgm_read_word(d);
    d++;
    size--;

    if (posX & 0x8000) {
      laser.on();
    } else {
      laser.off();
    }
    laser.sendto((posX & 0x7fff) + translateX, posY + translateY);
  }
  laser.off();
}

long SIN(unsigned int angle);
long COS(unsigned int angle);
