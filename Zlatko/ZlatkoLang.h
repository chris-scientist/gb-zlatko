// author: chriis-scientist
// created at: 17/10/2018
// updated at: 09/11/2018
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
    static const char* errorAddStateFR;
    static const char* errorAddStateEN;
    static const char* errorWithCodeFR;
    static const char* errorWithCodeEN;
    static const char* forOneStateFR;
    static const char* forOneStateEN;
    static const char* playFR;
    static const char* playEN;
    static const char* thisAppUseFR;
    static const char* thisAppUseEN;

    static const char* getAboutZlatko();
    static const char* getDebugging();
    static const char* getDesignedBy();
    static const char* getErrorAddState();
    static const char* getErrorWithCode();
    static const char* getForOneState();
    static const char* getPlay();
    static const char* getThisAppUse();
};

#endif

