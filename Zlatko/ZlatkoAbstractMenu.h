// author: chris-scientist
// created at: 22/10/2018
// updated at: 03/11/2018
// description: classe abstraite dont doit hériter votre menu pour utiliser le système par défaut

#ifndef ZLATKOABSTRACTMENU
#define ZLATKOABSTRACTMENU

#include "ZlatkoStateManager.h"

class ZlatkoAbstractMenu {
  protected:
    ZlatkoStateManager * stateManager;
  public:
    virtual void paint();
    virtual void manageCommands();
};

#endif

