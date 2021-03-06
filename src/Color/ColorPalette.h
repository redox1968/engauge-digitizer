/******************************************************************************************************
 * (C) 2014 markummitchell@github.com. This file is part of Engauge Digitizer, which is released      *
 * under GNU General Public License version 2 (GPLv2) or (at your option) any later version. See file *
 * LICENSE or go to gnu.org/licenses for details. Distribution requires prior written permission.     *
 ******************************************************************************************************/

#ifndef COLOR_PALETTE_H
#define COLOR_PALETTE_H

#include <QString>

enum ColorPalette {
  COLOR_PALETTE_BLACK,
  COLOR_PALETTE_BLUE,
  COLOR_PALETTE_CYAN,
  COLOR_PALETTE_GOLD,
  COLOR_PALETTE_GREEN,
  COLOR_PALETTE_MAGENTA,
  COLOR_PALETTE_RED,
  COLOR_PALETTE_YELLOW,
  COLOR_PALETTE_TRANSPARENT,
  NUM_PALETTE_COLORS
};

extern QString colorPaletteToString (ColorPalette colorPalette);

#endif // COLOR_PALETTE_H
