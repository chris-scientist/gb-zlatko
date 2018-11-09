// author: chris-scientist
// created at: 22/10/2018
// updated at: 03/11/2018

#ifndef ZLATKODEFAULTMENU
#define ZLATKODEFAULTMENU

#include <Gamebuino-Meta.h>

#include "ZlatkoConstantes.h"
#include "ZlatkoAbstractMenu.h"
#include "ZlatkoStateManager.h"
#include "ZlatkoLang.h"

class ZlatkoDefaultMenu : public ZlatkoAbstractMenu {
  private:
    unsigned int item;
    
    const unsigned int PLAY_ITEM = 0;
    const unsigned int ABOUT_ZLATKO_ITEM = 4294967294;
    const unsigned int DEBUGGING_ITEM = 4294967295;
    
    bool isPlayItem() const;
    bool isAboutZlatkoItem() const;
    bool isDebuggingItem() const;
  public:
    ZlatkoDefaultMenu(ZlatkoStateManager * aStateManager);
    void paint();
    void manageCommands();
};

#endif

