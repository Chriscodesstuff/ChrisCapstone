using namespace std;

#include "Vector.h"
#include <iostream>
#include <cmath>

Vector::Vector(): super() {}

Vector::Vector(double v1, double v2): super(v1, v2) {}

Vector::Vector(Tuple t): super() {
  setX(t.getX());
  setY(t.getY());
}

double Vector::getAngle() {
  return atan2(getY(), getX());
}

double Vector::getMagnitude() {
  return sqrt(pow(getX(), 2) + pow(getY(), 2));
}

Vector* Vector::atMagnitude(double m) {
  return new Vector(m * cos(atan2(getY(), getX())), m * sin(atan2(getY(), getX())));
}

Vector* Vector::atAngle(double a) {
  return new Vector(getMagnitude() * cos(a), getMagnitude() * sin(a));
}

Vector* Vector::dotProd(Vector* v) {
  return (*v).atMagnitude(getMagnitude() * cos(abs(getAngle() - (*v).getAngle())));
}
