// author: chris-scientist
// created at: 18/10/2018
// updated at: 21/10/2018
// description: implémentation d'un vecteur, c'est à dire qu'on associe à un index : une valeur

#ifndef ZLATKOVECTOR
#define ZLATKOVECTOR

template<typename U>
class ZlatkoVector {
  private:
    U * values;
    unsigned int sizeOfVector;

    static const int DEFAULT_SIZE = 0;
  public:
    ZlatkoVector();
    bool add(U aValue);
    U removeAtIndex(unsigned int anIndex);
    void removeAll();
    U getValueAtIndex(unsigned int anIndex);
    unsigned int getSize() const;
    bool isEmpty() const;
};

#endif

