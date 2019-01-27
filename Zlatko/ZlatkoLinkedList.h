// author: chris-scientist
// created at: 19/01/2019
// description: liste doublement chainée

#ifndef ZLATKOLINKEDLIST
#define ZLATKOLINKEDLIST

#include "ZlatkoItemLinkedList.h"

template<typename U>
class ZlatkoLinkedList {
  private:
    ZlatkoItemLinkedList<U> * firstItem;
    ZlatkoItemLinkedList<U> * lastItem;
    int sizeOfList;
    static const int DEFAULT_SIZE = 0;
  public:
    ZlatkoLinkedList();
    void addTop(U aValueItem);
    void addBottom(U aValueItem);
    U removeTop();
    U getTop() const;
    int getSize() const;
    bool isEmpty() const;
    ZlatkoItemLinkedList<U> * getFirstItem() const;
    ZlatkoItemLinkedList<U> * getLastItem() const;
};

// *********************************************************************************************
// ** CODE DE LA LISTE DOUBLEMENT CHAINEE                                                     **
// *********************************************************************************************

template<typename U>
ZlatkoLinkedList<U>::ZlatkoLinkedList() : sizeOfList(DEFAULT_SIZE) {
  
}

template<typename U>
void ZlatkoLinkedList<U>::addTop(U aValueItem) {
  ZlatkoItemLinkedList<U> * addedItem = new ZlatkoItemLinkedList<U>(aValueItem);
  if(sizeOfList == DEFAULT_SIZE) {
    // S'il n'y a pas d'élément dans la liste
    firstItem = addedItem;
    lastItem = addedItem;
  } else {
    // S'il y a au moins un élément dans la liste
    ZlatkoItemLinkedList<U> * tmpItem = firstItem;
    firstItem = addedItem;
    tmpItem->setPrevious(firstItem);
    tmpItem->setHasPrevious(true);
    firstItem->setNext(tmpItem);
    firstItem->setHasNext(true);
  }
  sizeOfList++;
}

template<typename U>
void ZlatkoLinkedList<U>::addBottom(U aValueItem) {
  ZlatkoItemLinkedList<U> * addedItem = new ZlatkoItemLinkedList<U>(aValueItem);
  if(sizeOfList == DEFAULT_SIZE) {
     // S'il n'y a pas d'élément dans la liste
     firstItem = addedItem;
     lastItem = addedItem;
  } else {
    // S'il y a au moins un élément dans la liste
    ZlatkoItemLinkedList<U> * tmpItem = lastItem;
    lastItem = addedItem;
    tmpItem->setNext(lastItem);
    tmpItem->setHasNext(true);
    lastItem->setPrevious(tmpItem);
    lastItem->setHasPrevious(true);
  }
  sizeOfList++;
}

template<typename U>
U ZlatkoLinkedList<U>::removeTop() {
  ZlatkoItemLinkedList<U> * item;
  U value;
  if(sizeOfList == DEFAULT_SIZE) {
    // S'il n'y a pas d'élément dans la liste
    return 0;
  } else {
    // S'il y a au mois un élément dans la liste
    item = firstItem;
    value = item->getValue();
    if(item->haveNext()) {
      firstItem = item->getNext();
      firstItem->setHasPrevious(false);
    } else {
      delete lastItem;
    }
    delete item;
  }
  sizeOfList--;
  return value;
}

template<typename U>
U ZlatkoLinkedList<U>::getTop() const {
  if(isEmpty()) {
    return 0;
  }
  return firstItem->getValue();
}

template<typename U>
int ZlatkoLinkedList<U>::getSize() const {
  return sizeOfList;
}

template<typename U>
bool ZlatkoLinkedList<U>::isEmpty() const {
  return (getSize() == DEFAULT_SIZE);
}

template<typename U>
ZlatkoItemLinkedList<U> * ZlatkoLinkedList<U>::getFirstItem() const {
  return firstItem;
}

template<typename U>
ZlatkoItemLinkedList<U> * ZlatkoLinkedList<U>::getLastItem() const {
  return lastItem;
}

#endif
