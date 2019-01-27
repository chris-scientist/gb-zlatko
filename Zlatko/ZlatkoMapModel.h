// author: chris-scientist
// created at: 17/11/2018
// updated at: 19/01/2019
// description: gestion d'une carte du jeu

#ifndef ZLATKOMAPMODEL
#define ZLATKOMAPMODEL

#include "ZlatkoMatrix.h"

class ZlatkoMapModel {
  protected:
    const int heightMap;
    const int widthMap;
    ZlatkoMatrix<char> * mapOfGame;
  public:
    ZlatkoMapModel(const int aHeightMap, const int aWidthMap, ZlatkoMatrix<char> * aMap);
    ZlatkoMapModel(ZlatkoMapModel * aMap);
    const char getTypeOfSprites(const int aXSprites, const int aYSprites);
    const int getHeight();
    const int getWidth();
    const ZlatkoMatrix<char> * getMap() const;
};

#endif
