// author: chris-scientist
// created at: 17/11/2018
// updated at: 19/01/2019

#include "ZlatkoMapModel.h"

ZlatkoMapModel::ZlatkoMapModel(const int aHeightMap, const int aWidthMap, ZlatkoMatrix<char> * aMap) :
  heightMap(aHeightMap),
  widthMap(aWidthMap)
{
  // initialisation de la map
  mapOfGame = new ZlatkoMatrix<char>(widthMap, heightMap);
  for(int y = 0 ; y < heightMap ; y++) {
    for(int x = 0 ; x < widthMap ; x++) {
      mapOfGame->setCell(x, y, aMap->getCell(x, y));
    }
  }
}

ZlatkoMapModel::ZlatkoMapModel(ZlatkoMapModel * aMap) :
  heightMap(aMap->getHeight()),
  widthMap(aMap->getWidth())
{
  const ZlatkoMatrix<char> * _map = aMap->getMap();
  // initialisation de la map
  mapOfGame = new ZlatkoMatrix<char>(widthMap, heightMap);
  for(int y = 0 ; y < heightMap ; y++) {
    for(int x = 0 ; x < widthMap ; x++) {
      mapOfGame->setCell(x, y, _map->getCell(x, y));
    }
  }
}

const char ZlatkoMapModel::getTypeOfSprites(const int aXSprites, const int aYSprites) {
  return mapOfGame->getCell(aXSprites, aYSprites);
}

const int ZlatkoMapModel::getHeight() {
  return heightMap;
}

const int ZlatkoMapModel::getWidth() {
  return widthMap;
}

const ZlatkoMatrix<char> * ZlatkoMapModel::getMap() const {
  return mapOfGame;
}
