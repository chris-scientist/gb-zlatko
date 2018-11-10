// author: chris-scientist
// created at: 17/10/2018
// updated at: 10/11/2018
// description: fenêtres du framework

#ifndef ZLATKOWINDOW
#define ZLATKOWINDOW

#include <Gamebuino-Meta.h>

#include "ZlatkoConstantes.h"
#include "ZlatkoLang.h"

class ZlatkoWindow {
  public:
    static void paintAboutZlatko();
    static void paintDebugWindow();
    static void paintUndefinedStateWindow();
};

#endif

