// author: chris-scientist
// created by: 17/10/2018

#include "ZlatkoLang.h"

const char* ZlatkoLang::aboutZlatkoFR = "A propos de Zlatko";
const char* ZlatkoLang::aboutZlatkoEN = "About Zlatko";
const char* ZlatkoLang::debuggingFR = "Debogage";
const char* ZlatkoLang::debuggingEN = "Debugging";
const char* ZlatkoLang::designedByFR = "Concu par";
const char* ZlatkoLang::designedByEN = "Designed by";
const char* ZlatkoLang::playFR = "Jouer";
const char* ZlatkoLang::playEN = "Play";
const char* ZlatkoLang::thisAppUseFR = "Cette app utilise";
const char* ZlatkoLang::thisAppUseEN = "This application use";

const char* ZlatkoLang::getAboutZlatko() {
  const MultiLang aboutZlatkoLang[] = {
    { LANG_EN, aboutZlatkoEN },
    { LANG_FR, aboutZlatkoFR }
  };

  return gb.language.get(aboutZlatkoLang);
}

const char* ZlatkoLang::getDebugging() {
  const MultiLang debuggingLang[] = {
    { LANG_EN, debuggingEN },
    { LANG_FR, debuggingFR }
  };

  return gb.language.get(debuggingLang);
}

const char* ZlatkoLang::getDesignedBy() {
  const MultiLang designedByLang[] = {
    { LANG_EN, designedByEN },
    { LANG_FR, designedByFR }
  };

  return gb.language.get(designedByLang);
}

const char* ZlatkoLang::getPlay() {
  const MultiLang playLang[] = {
    { LANG_EN, playEN },
    { LANG_FR, playFR }
  };

  return gb.language.get(playLang);
}

const char* ZlatkoLang::getThisAppUse() {
  const MultiLang thisAppUseLang[] = {
    { LANG_EN, thisAppUseEN },
    { LANG_FR, thisAppUseFR }
  };

  return gb.language.get(thisAppUseLang);
}

