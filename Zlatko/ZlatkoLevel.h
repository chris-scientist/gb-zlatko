// author: chris-scientist
// created at: 19/01/2019
// description: niveau

#ifndef ZLATKOLEVEL
#define ZLATKOLEVEL

#include "ZlatkoMatrix.h"

class ZlatkoLevel {
  private:
    bool lock;
    char * label;
    const char * code;
    ZlatkoMatrix<char> * mapOfLevel;
  public:
    ZlatkoLevel(const char * aCode, char * aLabel, ZlatkoMatrix<char> * aMap, bool isLock);
    bool isLock() const;
    char * getLabel() const;
    const char * getCode() const;
    ZlatkoMatrix<char> * getMap() const;
};

#endif
