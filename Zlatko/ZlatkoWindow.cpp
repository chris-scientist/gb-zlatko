// author: chris-scientist
// created at: 17/10/2018

#include "ZlatkoWindow.h"

void ZlatkoWindow::paintAboutZlatko() {
  gb.display.setColor(WHITE);
  gb.display.println(ZlatkoLang::getThisAppUse());
  gb.display.println("");
  gb.display.setColor(BROWN);
  gb.display.println("Zlatko Framework");
  gb.display.setColor(WHITE);
  gb.display.println("");
  gb.display.println(ZlatkoLang::getDesignedBy());
  gb.display.println("");
  gb.display.setColor(BROWN);
  gb.display.println("chris-scientist");
  gb.display.setColor(WHITE);
  gb.display.println("");
  gb.display.println("Framework version:");
  gb.display.println(ZLATKO_VERSION);
}

