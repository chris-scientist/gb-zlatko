// author: chris-scientist
// created at: 19/01/2019
// description: afficher le gestionnaire de niveau

#ifndef ZLATKOLEVELSVIEW
#define ZLATKOLEVELSVIEW

#include <Gamebuino-Meta.h>

#include "ZlatkoLevelManager.h"
#include "ZlatkoLevel.h"

class ZlatkoLevelsView {
  private:
    ZlatkoLevelManager * levelManager;
    ZlatkoItemLinkedList<ZlatkoLevel *> * currentLevel;
  public:
    ZlatkoLevelsView(ZlatkoLevelManager * aLevelManager);
    void paint() const;
    void manageCommands();
};

#endif
