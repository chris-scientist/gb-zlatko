// author: chris-scientist
// created at: 19/01/2019

#include "ZlatkoLevel.h"

ZlatkoLevel::ZlatkoLevel(const char * aCode, char * aLabel, ZlatkoMatrix<char> * aMap, bool isLock) :
  code(aCode),
  label(aLabel),
  mapOfLevel(aMap),
  lock(isLock)
{
  
}

bool ZlatkoLevel::isLock() const {
  return lock;
}

char * ZlatkoLevel::getLabel() const {
  return label;
}

const char * ZlatkoLevel::getCode() const {
  return code;
}

ZlatkoMatrix<char> * ZlatkoLevel::getMap() const {
  return mapOfLevel;
}
