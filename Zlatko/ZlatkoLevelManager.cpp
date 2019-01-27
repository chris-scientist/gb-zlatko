// author: chris-scientist
// created at: 19/01/2019

#include "ZlatkoLevelManager.h"

ZlatkoLevelManager::ZlatkoLevelManager() :
  listOfLevel(new ZlatkoLinkedList<ZlatkoLevel *>())
{
  
}

void ZlatkoLevelManager::addLevel(ZlatkoLevel * aLevel) {
  listOfLevel->addBottom(aLevel);
}

ZlatkoLinkedList<ZlatkoLevel *> * ZlatkoLevelManager::getLevels() const {
  return listOfLevel;
}
