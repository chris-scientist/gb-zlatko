// author: chris-scientist
// created at: 21/10/2018
// updated at: 31/10/2018

#include "ZlatkoStateManager.h"

// REMARQUE: par défaut nous sommes dans un état indéfini
ZlatkoStateManager::ZlatkoStateManager() :
  indexOfState(0),
  setOfState(new ZlatkoVector<unsigned int>())
{
  initialize();
}

// Passer à l'état suivant.
// REMARQUE: on revient par défaut au menu.
void ZlatkoStateManager::nextState() {
  indexOfState = (indexOfState == setOfState->getSize() - 1 ? 1 : indexOfState + 1);
}

// Changer l'état courant en passant en paramètre un état (état dans lequel on souhaite être).
void ZlatkoStateManager::setState(const unsigned int aState) {
  indexOfState = 0;
  bool stop = false;
  for(unsigned int i=0 ; !stop && i<setOfState->getSize() ; i++) {
    if(setOfState->getValueAtIndex(i) == aState) {
      indexOfState = i;
      stop = true;
    }
  }
}

// Récupérer l'état courant.
const int ZlatkoStateManager::getCurrentState() const {
  return getState(indexOfState);
}

// Récupérer l'état relatif à un index.
const int ZlatkoStateManager::getState(const unsigned int anIndex) const {
  return setOfState->getValueAtIndex(anIndex);
}

// Contrôler si l'état courant est égale à celui fourni en paramètre.
bool ZlatkoStateManager::isCurrentState(const unsigned int aState) const {
  return (getCurrentState() == aState);
}

// Ajouter un état, retourne true si l'état est ajouté et sinon false.
const int ZlatkoStateManager::addState(const unsigned int aState) {
  if(setOfState->getSize() >= MAX_VALUE_UNSIGNED_INT) {
    // S'il y a trop d'état...
    return ZlatkoErrorManager::MORE_STATE_ERROR;
  } else if(aState >= MIN_INDEX_RESERVED_STATE && aState <= MAX_INDEX_RESERVED_STATE) {
    // Si l'index est réservé par le framework...
    return ZlatkoErrorManager::RESERVED_STATE_ERROR;
  } else {
    // Sinon on peut ajouter l'état...
    for(unsigned int i = 0 ; i < setOfState->getSize() ; i++) {
      if(setOfState->getValueAtIndex(i) == aState) {
        return ZlatkoErrorManager::STATE_ALREADY_ADDED_ERROR;
      }
    }
    addStateWithoutRestrict(aState);
    return ZlatkoErrorManager::NO_ERROR;
  }
  return ZlatkoErrorManager::UNDEFINED_ERROR;
}

// Ajouter un état (méthode interne).
void ZlatkoStateManager::addStateWithoutRestrict(const unsigned int aState) {
  setOfState->add(aState);
}

bool ZlatkoStateManager::isUndefinedState() const {
  return isCurrentState(UNDEFINED_STATE);
}

bool ZlatkoStateManager::isMainMenuState() const {
  return isCurrentState(MAIN_MENU_STATE);
}

bool ZlatkoStateManager::isGameState() const {
  return isCurrentState(GAME_STATE);
}

bool ZlatkoStateManager::isPauseState() const {
  return isCurrentState(PAUSE_STATE);
}

bool ZlatkoStateManager::isAboutZlatkoState() const {
  return isCurrentState(ABOUT_ZLATKO_STATE);
}

bool ZlatkoStateManager::isDebugState() const {
  return isCurrentState(DEBUG_STATE);
}

// Initialiser le gestionnaire d'état
void ZlatkoStateManager::initialize() {
  // Ajout des états fournis par le framework
  addStateWithoutRestrict(UNDEFINED_STATE);
  addStateWithoutRestrict(MAIN_MENU_STATE);
  addStateWithoutRestrict(GAME_STATE);
  addStateWithoutRestrict(PAUSE_STATE);
  addStateWithoutRestrict(ABOUT_ZLATKO_STATE);
  addStateWithoutRestrict(DEBUG_STATE);
}

