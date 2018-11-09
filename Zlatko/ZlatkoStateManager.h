// author: chris-scientist
// created at: 18/10/2018
// updated at: 31/10/2018
// description: permet de gérer les différents états du jeu afin d'adapter les commandes et l'affichage

// **************************************************************************
// ** REMARQUE :                                                           **
// **                                                                      **
// ** Les 10 000 premiers états, de 0 à 9 999, sont réservés au framework. **
// **                                                                      **
// **************************************************************************

#ifndef ZLATKOSTATEMANAGER
#define ZLATKOSTATEMANAGER

#include "ZlatkoErrorManager.h"
#include "ZlatkoConstantes.h"
#include "ZlatkoVector.cpp"

class ZlatkoStateManager {
  public:
    // Etats fournis par le framework
    static const unsigned int UNDEFINED_STATE = 0;
    static const unsigned int MAIN_MENU_STATE = 1;
    static const unsigned int GAME_STATE = 2;
    static const unsigned int PAUSE_STATE = 3;
    static const unsigned int ABOUT_ZLATKO_STATE = 9998;
    static const unsigned int DEBUG_STATE = 9999;

    // Intervalles des index réservés (bornes incluses)
    static const unsigned int MIN_INDEX_RESERVED_STATE = 0;
    static const unsigned int MAX_INDEX_RESERVED_STATE = 9999;

    ZlatkoStateManager();
    void nextState();
    void setState(const unsigned int aState);
    bool isUndefinedState() const;
    bool isMainMenuState() const;
    bool isGameState() const;
    bool isPauseState() const;
    bool isAboutZlatkoState() const;
    bool isDebugState() const;
    bool isCurrentState(const unsigned int aState) const;
    const int addState(const unsigned int aState);
  private:
    int indexOfState;
    ZlatkoVector<unsigned int> * setOfState;

    void addStateWithoutRestrict(const unsigned int aState);
    const int getCurrentState() const;
    const int getState(const unsigned int anIndex) const;
    void initialize();
};

#endif

