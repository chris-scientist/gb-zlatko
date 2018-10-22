// author: chriis-scientist
// created at: 17/10/2018
// description: système multi-langage du framework

#ifndef ZLATKOLANG
#define ZLATKOLANG

#include <Gamebuino-Meta.h>

class ZlatkoLang {
  public:
    static const char* aboutZlatkoFR;
    static const char* aboutZlatkoEN;
    static const char* debuggingFR;
    static const char* debuggingEN;
    static const char* designedByFR;
    static const char* designedByEN;
    static const char* playFR;
    static const char* playEN;
    static const char* thisAppUseFR;
    static const char* thisAppUseEN;

    static const char* getAboutZlatko();
    static const char* getDebugging();
    static const char* getDesignedBy();
    static const char* getPlay();
    static const char* getThisAppUse();
};

#endif

