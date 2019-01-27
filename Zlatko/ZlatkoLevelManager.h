// author: chris-scientist
// created at: 19/01/2019
// description: gestionnaire de niveaux

#ifndef ZLATKOLEVELMANAGER
#define ZLATKOLEVELMANAGER

#include "ZlatkoLinkedList.h"
#include "ZlatkoLevel.h"

class ZlatkoLevelManager {
  private:
    ZlatkoLinkedList<ZlatkoLevel *> * listOfLevel;
  public:
    ZlatkoLevelManager();
    void addLevel(ZlatkoLevel * aLevel);
    ZlatkoLinkedList<ZlatkoLevel *> * getLevels() const;
};

#endif
