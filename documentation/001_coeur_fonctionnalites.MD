
# Présentation du coeur du framework et de ses fonctionnalités - Zlatko Framework

v0.1.0

[Retour au sommaire](../README.MD)

## Coeur de votre application

La classe *ZlatkoEngine* représente le coeur de votre application, c'est dans cette classe que sont gérer l'affichage et la gestion des commandes (en fonction de l'état).

[Voir plus d'informations sur la classe ZlatkoEngine](099_zlatko_engine.MD)

## Menu

La classe abstraite *ZlatkoAbstractMenu* doit être hérité si vous souhaitez utiliser le système de menu par défaut. De plus, un menu par défaut est prévu, il s'agit de la classe *ZlatkoDefaultMenu*.

[Voir plus d'informations sur la création du menu](100_menu.MD)

## Gérer l'état du jeu

La classe *ZlatkoStateManager* vous permet de gérer l'état de votre jeu.

[Voir plus d'informations sur l'utilisation de cette classe](101_gestionnaire_etats.MD)

## Chronomètrer une partie

La classe *ZlatkoTimer* vous permet de chronométrer une partie.
