// author: chris-scientist
// created at: 19/01/2019
// description: élément d'une liste doublement chaînée

#ifndef ZLATKOITEMLINKEDLIST
#define ZLATKOITEMLINKEDLIST

template<typename T>
class ZlatkoItemLinkedList {
  private:
    T value;
    bool hasPrevious;
    bool hasNext;
    ZlatkoItemLinkedList<T> * previous;
    ZlatkoItemLinkedList<T> * next;
  public:
    ZlatkoItemLinkedList(T aValue);
    T getValue() const;
    bool havePrevious() const;
    bool haveNext() const;
    void setHasPrevious(bool _hasPrevious);
    void setHasNext(bool _hasNext);
    ZlatkoItemLinkedList<T> * getPrevious() const;
    ZlatkoItemLinkedList<T> * getNext() const;
    void setPrevious(ZlatkoItemLinkedList<T> * anItem);
    void setNext(ZlatkoItemLinkedList<T> * anItem);
};

// *********************************************************************************************
// ** CODE DE L'ITEM                                                                          **
// *********************************************************************************************

template<typename T>
ZlatkoItemLinkedList<T>::ZlatkoItemLinkedList(T aValue) : value(aValue), hasPrevious(false), hasNext(false) {
  
}

template<typename T>
T ZlatkoItemLinkedList<T>::getValue() const {
  return value;
}

template<typename T>
bool ZlatkoItemLinkedList<T>::havePrevious() const {
  return hasPrevious;
}

template<typename T>
bool ZlatkoItemLinkedList<T>::haveNext() const {
  return hasNext;
}

template<typename T>
void ZlatkoItemLinkedList<T>::setHasPrevious(bool _hasPrevious) {
  hasPrevious = _hasPrevious;
}

template<typename T>
void ZlatkoItemLinkedList<T>::setHasNext(bool _hasNext) {
  hasNext = _hasNext;
}

template<typename T>
ZlatkoItemLinkedList<T> * ZlatkoItemLinkedList<T>::getPrevious() const {
  return previous;
}

template<typename T>
ZlatkoItemLinkedList<T> * ZlatkoItemLinkedList<T>::getNext() const {
  return next;
}

template<typename T>
void ZlatkoItemLinkedList<T>::setPrevious(ZlatkoItemLinkedList<T> * anItem) {
  previous = anItem;
}

template<typename T>
void ZlatkoItemLinkedList<T>::setNext(ZlatkoItemLinkedList<T> * anItem) {
  next = anItem;
}

#endif
