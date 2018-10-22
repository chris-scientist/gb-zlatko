// author: chris-scientist
// created at: 18/10/2018
// updated at: 21/10/2018

#include "ZlatkoVector.h"

template<typename U>
ZlatkoVector<U>::ZlatkoVector() : sizeOfVector(DEFAULT_SIZE) {
  
}

// Ajouter une valeur à la fin du vecteur.
template<typename U>
bool ZlatkoVector<U>::add(U aValue) {
  U * oldValues = values;
  if(!isEmpty()) {
    delete [] values;
  }
  sizeOfVector++;
  values = new U[sizeOfVector];
  
  for(unsigned int i = 0 ; i<sizeOfVector ; i++) {
    if(i == (sizeOfVector - 1)) {
      values[i] = aValue;
    } else {
      values[i] = oldValues[i];
    }
  }
}

// Supprimer la valeur à un index donné.
template<typename U>
U ZlatkoVector<U>::removeAtIndex(unsigned int anIndex) {
  if(anIndex >= DEFAULT_SIZE && anIndex < sizeOfVector) {
    U removedValue = getValueAtIndex(anIndex);
    U * oldValues = values;
    if(!isEmpty()) {
      delete [] values;
    }
    sizeOfVector--;
    values = new U[sizeOfVector];
    for(unsigned int i = 0 ; i<sizeOfVector ; i++) {
      if(i >= anIndex) {
        values[i] = oldValues[i + 1];
      } else {
        values[i] = oldValues[i];
      }
    }
    return removedValue;
  }
  return 0;
}

// Vider le vecteur.
template<typename U>
void ZlatkoVector<U>::removeAll() {
  if(!isEmpty()) {
    delete[] values;
    sizeOfVector = DEFAULT_SIZE;
  }
}

// Récupérer la valeur à un index donné.
template<typename U>
U ZlatkoVector<U>::getValueAtIndex(unsigned int anIndex) {
  if(anIndex >= DEFAULT_SIZE && anIndex < sizeOfVector) {
    return values[anIndex];
  }
  return 0;
}

// Récupérer la taille du vecteur.
template<typename U>
unsigned int ZlatkoVector<U>::getSize() const {
  return sizeOfVector;
}

// Détermminer si le vecteur est vide.
template<typename U>
bool ZlatkoVector<U>::isEmpty() const {
  return (sizeOfVector == DEFAULT_SIZE);
}

