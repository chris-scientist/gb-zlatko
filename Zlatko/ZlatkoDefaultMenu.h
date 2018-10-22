// author: chris-scientist
// created at: 22/10/2018

#ifndef ZLATKODEFAULTMENU
#define ZLATKODEFAULTMENU

#include "ZlatkoConstantes.h"
#include "ZlatkoAbstractMenu.h"

#include <Gamebuino-Meta.h>

#include "ZlatkoLang.h"

class ZlatkoDefaultMenu : public ZlatkoAbstractMenu {
  private:
    unsigned int item;
    
    const unsigned int PLAY_ITEM = 0;
    const unsigned int ABOUT_ZLATKO_ITEM = 4294967294;
    const unsigned int DEBUGGING_ITEM = 4294967295;
    
  public:
    ZlatkoDefaultMenu();
    void paint();
    
    bool isPlayItem() const;
    bool isAboutZlatkoItem() const;
    bool isDebuggingItem() const;
};

#endif

