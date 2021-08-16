#include "Box.h"
#include <iostream>
using namespace std;
  void Box::setLenght(int l){
    length=l;
  }
  void Box::setWidth(int w)
  {
    width=w;
  }
  void Box::setHeight(int h)
  {
    height=h;
  }
  int Box::getLenght()
  {
    return length;
  }
  int Box::getWidth()
  {
    return width;
  }
  int Box::getHeight()
  {
    return height;
  }
  int Box::calcVolume()
  {
    return length*height*width;
  }
  

// Implement setters and getters

// Implemenet the calcVolume() unction

