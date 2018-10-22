
# Menu avec ZlatkoAbstractMenu et ZlatkoDefaultMenu - Zlatko Framework

v0.0.2

[Retour au sommaire](../README.MD)

## Présentation

La classe *ZlatkoDefaultMenu* est une implémentation de *ZlatkoAbstractMenu* et cette première fournit un menu par défaut.

Ce menu par défaut contient les rubriques suivantes :
* Jouer / Play
* A propos de Zlatko / About Zlatko
* Debogagge / Debugging (seulement en mode debug)

## Fonctionnement

Si vous voulez utiliser le système de menu par défaut mais que le menu par défaut fourni par le framework ne vous convient pas, vous devez alors écrire une classe qui hérite de *ZlatkoAbstractMenu*.

    // VotreMenu.h
    
    #include "ZlatkoAbstractMenu.h"
    
    class VotreMenu : public ZlatkoAbstractMenu {
        public:
            void paint();
    }
    
    // VotreMenu.cpp
    
    #include "VotreMenu.h"
    
    void VotreMenu::paint() {
    	// Le code de votre menu ici...
    }

Dans la classe *ZlatkoEngine*, et plus précisement la méthode *manageCommands()* il vous faudra adapter le code suivant :

    if(stateManager->isMainMenuState()) {
        // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
        // A moduler en fonction de votre système de menu.
        if(((ZlatkoDefaultMenu *)mainMenu)->isPlayItem()) {
            stateManager->nextState();
        } else if(((ZlatkoDefaultMenu *)mainMenu)->isAboutZlatkoItem()) {
            stateManager->setState(ZlatkoStateManager::ABOUT_ZLATKO_STATE);
        } else if(((ZlatkoDefaultMenu *)mainMenu)->isDebuggingItem()) {
            stateManager->setState(ZlatkoStateManager::DEBUG_STATE);
        }
        // <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
    }
