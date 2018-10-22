// author: chris-scientist
// created at: 17/10/2018

#include <Gamebuino-Meta.h>

#include "ZlatkoEngine.h"

ZlatkoEngine * engine;

void setup() {
  // initialisation de la gamebuino
  gb.begin();
  // initialisation des objets
  engine = new ZlatkoEngine();
}

void loop() {
  // boucle d'attente
  while(!gb.update());

  // effacer l'écran
  gb.display.clear();

  engine->run();
}
