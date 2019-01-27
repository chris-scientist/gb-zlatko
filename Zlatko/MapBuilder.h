// author: chris-scientist
// created at: 19/01/2019
// description: générateur de map

#ifndef MAPBUILDER
#define MAPBUILDER

#include "GameConstantes.h"
#include "ZLatkoMatrix.h"
#include "ZlatkoLevelManager.h"

class MapBuilder {
  public:
    static void build(ZlatkoLevelManager * levelManager);
};

#endif
