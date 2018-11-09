// author: chris-scientist
// created at: 22/10/2018
// updated at: 03/11/2018

#include "ZlatkoDefaultMenu.h"

ZlatkoDefaultMenu::ZlatkoDefaultMenu(ZlatkoStateManager * aStateManager) :
  item(PLAY_ITEM)
{
  ZlatkoAbstractMenu::stateManager = aStateManager;
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

// Gérer les commandes relatives au menu
void ZlatkoDefaultMenu::manageCommands() {
  if(this->isPlayItem()) {
    ZlatkoAbstractMenu::stateManager->nextState();
  } else if(this->isAboutZlatkoItem()) {
    ZlatkoAbstractMenu::stateManager->setState(ZlatkoStateManager::ABOUT_ZLATKO_STATE);
  } else if(this->isDebuggingItem()) {
    ZlatkoAbstractMenu::stateManager->setState(ZlatkoStateManager::DEBUG_STATE);
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

