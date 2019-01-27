// author: chris-scientist
// created at: 17/11/2018

#ifndef ZLATKOCURRENTMAPMODEL
#define ZLATKOCURRENTMAPMODEL

#include "ZlatkoMapModel.h"
#include "GameConstantes.h"

class ZlatkoCurrentMapModel : public ZlatkoMapModel {
  public:
    ZlatkoCurrentMapModel(ZlatkoMapModel * aMap);
    const int* getPlayerPositions() const;
    void setTypeOfSprites(const int aXSprites, const int aYSprites, const char aTypeOfSprites);
    bool isFinish() const;
  private:
    int playerPositions[2] = {-1, -1}; // 0 = position X, 1 = position Y
    char playerChar;
    
    void initPlayerPositions();
};

#endif
