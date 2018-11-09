
# Gérer l'état du jeu avec ZlatkoStateManager - Zlatko Framework

v0.0.4

[Retour au sommaire](../README.MD)

## Présentation

Le cycle de votre jeu est jalonné par des états, par exemple le menu, l'affichage des crédits, etc sont des états. Un état se caractérise par un affichage et des commandes qui lui sont propre.

Détaillons quelques états, en reprenant nos exemples :
* Le menu utilise une fonctionnalité fourni par la Gamebuino META qui gère l'affichage et les commandes.
* L'affichage des crédits nécessite d'écrire son écran et de gérer les commandes pour par exemple revenir au menu en pressant le bouron A.

Le framework intègre un gestionnaire d'état qui est représenté par la classe *ZlatkoStateManager*. Ce gestionnaire fournit des états par défauts, et accepte des états dont vous pourriez avoir besoin.

Voyons le détail de ces états par défauts et ces fonctionnalités.

## Etats par défauts

Les 10 000 premiers états sont réservés par le framework, ainsi **vos états ne doivent pas prendre une valeur comprise entre 0 et 9 999**. Il vous reste les 4 294 957 295 autres valeurs de 10 000 à 4 294 967 295 inclus pour coder vos états personnalisés. En effet, les états sont des constantes d'entiers non signés (unsigned int).

Listons les états par défauts :
* UNDEFINED_STATE : état indéfini
* MAIN_MENU_STATE : menu principale
* GAME_STATE : jeu en cours
* PAUSE_STATE : jeu en pause
* ABOUT_ZLATKO_STATE : afficher les crédits du framework
* DEBUG_STATE : écran de débugage

## Fonctionnalités de ZlatkoStateManager

Détaillons les méthodes exposés par le gestionnaire d'états.

### Passer à l'état suivant

La méthode *void nextState()* permet de passer l'état suivant. Effectivement les états sont enregistrés dans un vecteur ainsi cette méthode sans paramètre passe à l'état suivant, faites donc attention à l'ordre d'enregistrement de vos états si vous souhaitez utiliser cette méthode. De plus, si l'état courrant est le dernier de la liste, et que vous appelez cette méthode alors l'état courant sera *MAIN_MENU_STATE*.

### Passer à un état précis

La méthode *void setState(const int aState)* permet de passer à coup sûr à l'état donné en paramètre "aState", si toutefois l'état n'est pas trouvé alors l'application passe à l'état *UNDEFINED_STATE*.

### Ajouter un état personnalisé

La méthode *const int addState(const int aState)* permet d'ajouter votre état au gestionnaire, si l'opération réussi alors la méthode renvoie ZlatkoErrorManager::NO_ERROR (cf. [code d'erreurs](002_erreurs.MD)).

Pour ajouter un état, il est conseillé de passer par la classe [ZlatkoEngine](099_zlatko_engine.MD).

### Contrôler l'état courant

La méthode *bool isCurrentState(const int aState) const* permet de contrôler que l'état passé en paramètre "aState" correspond à l'état courant. Utilisez cette méthode pour contrôler si votre état personnalisé est égale à l'état courant.

Les états par défauts ont leur propre méthode pour voir si votre application se trouve dans cet état.

* *bool isUndefinedState() const* renvoie true si l'état courant est égale à UNDEFINED_STATE, sinon false.
* *bool isMainMenuState() const* renvoie true si l'état courant est égale à MAIN_MENU_STATE, sinon false.
* *bool isGameState() const* renvoie true si l'état courant est égale à GAME_STATE, sinon false.
* *bool isPauseState() const* renvoie true si l'état courant est égale à PAUSE_STATE, sinon false.
* *bool isAboutZlatkoState() const* renvoie true si l'état courant est égale à ABOUT_ZLATKO_STATE, sinon false.
* *bool isDebugState() const* renvoie true si l'état courant est égale à DEBUG_STATE, sinon false.
