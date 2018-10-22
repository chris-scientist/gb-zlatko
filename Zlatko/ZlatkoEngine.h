// author: chris-scientist
// created at: 17/10/2018
// description: classe principale

#ifndef ZLATKOENGINE
#define ZLATKOENGINE

#include <Gamebuino-Meta.h>

#include "ZlatkoWindow.h"
#include "ZlatkoStateManager.h"
#include "ZlatkoAbstractMenu.h"
#include "ZlatkoDefaultMenu.h"

class ZlatkoEngine {
  private:
    ZlatkoStateManager * stateManager;
    ZlatkoAbstractMenu * mainMenu;
    bool activeDefaultMenu;
  
    void paint() const;
    void manageCommands();
    void initialize();
  public:
    ZlatkoEngine();
    void run();
    void setActiveDefaultMenu(const bool isActive);
    void setDefaultMainMenu(ZlatkoAbstractMenu * aMainMenu);
};

#endif

