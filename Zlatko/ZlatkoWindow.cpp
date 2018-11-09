// author: chris-scientist
// created at: 17/10/2018

#include "ZlatkoWindow.h"

// Afficher les crédits du framework
void ZlatkoWindow::paintAboutZlatko() {
  gb.display.setFontSize(1);
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

// Afficher l'écran de debugagge
void ZlatkoWindow::paintDebugWindow() {
  gb.display.setFontSize(1);
  gb.display.setColor(WHITE);
  gb.display.print("CPU: ");
  gb.display.setColor(BROWN);
  gb.display.print(gb.getCpuLoad());
  gb.display.println(" %");
  gb.display.setColor(WHITE);
  gb.display.print("RAM : ");
  gb.display.setColor(BROWN);
  gb.display.println(gb.getFreeRam());
}

