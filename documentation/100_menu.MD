
# Menu avec ZlatkoAbstractMenu et ZlatkoDefaultMenu - Zlatko Framework

v0.0.5

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
    #include "ZlatkoStateManager.h"
    
    class VotreMenu : public ZlatkoAbstractMenu {
        public:
            VotreMenu(ZlatkoStateManager * aStateManager);
            void paint();
            void manageCommands();
    }
    
    // VotreMenu.cpp
    
    #include "VotreMenu.h"
    
    VotreMenu::VotreMenu(ZlatkoStateManager * aStateManager) {
        ZlatkoAbstractMenu::stateManager = aStateManager;
    }
    
    void VotreMenu::paint() {
    	// Le code de votre menu ici...
    }

    void VotreMenu::manageCommands() {
        // Changer l'état en fonction de l'item sélectionné.
    }
