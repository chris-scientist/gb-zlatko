// author: chris-scientist
// created at: 20/01/2019
// description: matrice

#ifndef ZLATKOMATRIX
#define ZLATKOMATRIX

template<typename T>
class ZlatkoMatrix {
  private:
    T** matrix;
    const int widthMatrix;
    const int heightMatrix;
  public:
    ZlatkoMatrix(const int aWidth, const int aHeight);
    T getCell(const int aX, const int aY) const;
    void setCell(const int aX, const int aY, T aValue);
    const int getWidth() const;
    const int getHeight() const;
};

template<typename T>
ZlatkoMatrix<T>::ZlatkoMatrix(const int aWidth, const int aHeight) :
  widthMatrix(aWidth),
  heightMatrix(aHeight)
{
  matrix = new T*[heightMatrix];
  for(int i = 0 ; i < heightMatrix ; i++) {
    matrix[i] = new T[widthMatrix];
  }
}

template<typename T>
T ZlatkoMatrix<T>::getCell(const int aX, const int aY) const {
  return (T)matrix[aY][aX];
}

template<typename T>
void ZlatkoMatrix<T>::setCell(const int aX, const int aY, T aValue) {
  matrix[aY][aX] = (T)aValue;
}

template<typename T>
const int ZlatkoMatrix<T>::getWidth() const {
  return widthMatrix;
}

template<typename T>
const int ZlatkoMatrix<T>::getHeight() const {
  return heightMatrix;
}

#endif
