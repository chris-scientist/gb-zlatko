// author: chris-scientist
// created at: 17/10/2018
// updated at: 10/11/2018

#include "ZlatkoLang.h"

const char* ZlatkoLang::aboutZlatkoFR = "A propos de Zlatko";
const char* ZlatkoLang::aboutZlatkoEN = "About Zlatko";
const char* ZlatkoLang::debuggingFR = "Debogage";
const char* ZlatkoLang::debuggingEN = "Debugging";
const char* ZlatkoLang::designedByFR = "Concu par";
const char* ZlatkoLang::designedByEN = "Designed by";
const char* ZlatkoLang::errorAddStateFR = "Echec ajout etat !";
const char* ZlatkoLang::errorAddStateEN = "Failed to add state!";
const char* ZlatkoLang::errorWithCodeFR = "ERREUR: %d";
const char* ZlatkoLang::errorWithCodeEN = "ERROR: %d";
const char* ZlatkoLang::forOneStateFR = "Pour l'etat %d.";
const char* ZlatkoLang::forOneStateEN = "For %d state.";
const char* ZlatkoLang::goToMenuFR = "(%c) acceder au menu";
const char* ZlatkoLang::goToMenuEN = "(%c) go to menu";
const char* ZlatkoLang::playFR = "Jouer";
const char* ZlatkoLang::playEN = "Play";
const char* ZlatkoLang::thisAppUseFR = "Cette app utilise";
const char* ZlatkoLang::thisAppUseEN = "This application use";
const char* ZlatkoLang::undefinedStateFR = "Etat indefini !";
const char* ZlatkoLang::undefinedStateEN = "Undefined state!";

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

const char* ZlatkoLang::getErrorAddState() {
  const MultiLang errorAddStateLang[] = {
    { LANG_EN, errorAddStateEN },
    { LANG_FR, errorAddStateFR }
  };

  return gb.language.get(errorAddStateLang);
}

const char* ZlatkoLang::getErrorWithCode() {
  const MultiLang errorWithCodeLang[] = {
    { LANG_EN, errorWithCodeEN },
    { LANG_FR, errorWithCodeFR }
  };

  return gb.language.get(errorWithCodeLang);
}

const char* ZlatkoLang::getForOneState() {
  const MultiLang forOneStateLang[] = {
    { LANG_EN, forOneStateEN },
    { LANG_FR, forOneStateFR }
  };

  return gb.language.get(forOneStateLang);
}

const char* ZlatkoLang::getGoToMenu() {
  const MultiLang goToMenuLang[] = {
    { LANG_EN, goToMenuEN },
    { LANG_FR, goToMenuFR }
  };

  return gb.language.get(goToMenuLang);
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

const char* ZlatkoLang::getUndefinedState() {
  const MultiLang undefinedStateLang[] = {
    { LANG_EN, undefinedStateEN },
    { LANG_FR, undefinedStateFR }
  };

  return gb.language.get(undefinedStateLang);
}

