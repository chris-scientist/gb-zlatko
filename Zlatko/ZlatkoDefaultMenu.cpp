// author: chris-scientist
// created at: 22/10/2018

#include "ZlatkoDefaultMenu.h"

ZlatkoDefaultMenu::ZlatkoDefaultMenu() :
  item(PLAY_ITEM)
{
  
}

// Afficher le menu
void ZlatkoDefaultMenu::paint() {
  #if ZLATKO_DEBUG
  const char * items[] = {
    ZlatkoLang::getPlay(),
    ZlatkoLang::getAboutZlatko(),
    ZlatkoLang::getDebugging()
  };
  #else
  const char * items[] = {
    ZlatkoLang::getPlay(),
    ZlatkoLang::getAboutZlatko()
  };
  #endif

  const uint8_t indexItem = gb.gui.menu("Menu", items);
  item = PLAY_ITEM;
  if(items[indexItem] == ZlatkoLang::aboutZlatkoFR || items[indexItem] == ZlatkoLang::aboutZlatkoEN) {
    item = ABOUT_ZLATKO_ITEM;
  } else if(items[indexItem] == ZlatkoLang::debuggingFR || items[indexItem] == ZlatkoLang::debuggingEN) {
    item = DEBUGGING_ITEM;
  }
}

bool ZlatkoDefaultMenu::isPlayItem() const {
  return (item == PLAY_ITEM);
}

bool ZlatkoDefaultMenu::isAboutZlatkoItem() const {
  return (item == ABOUT_ZLATKO_ITEM);
}

bool ZlatkoDefaultMenu::isDebuggingItem() const {
  return (item == DEBUGGING_ITEM);
}

