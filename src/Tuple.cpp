#include "Tuple.h"

Tuple::Tuple(): x(0), y(0) {}


Tuple::Tuple(double v1, double v2): x(v1), y(v2) {}

Tuple::~Tuple() {}

//Tuple::Tuple(Tuple t): x(t.getX()), y(t.getY()) {}

double Tuple::getX() {
  return x;
}

void Tuple::setX(double v) {
  x = v;
}

double Tuple::getY() {
  return y;
}

void Tuple::setY(double v) {
  y = v;
}

Tuple Tuple::operator+(Tuple v) {
  return Tuple(v.getX() + x, v.getY() + y);
}

Tuple Tuple::operator-(Tuple v) {
  return Tuple(x - v.getX(), y - v.getY());
}

Tuple Tuple::operator*(double f) {
  return Tuple(x * f, y * f);
}

bool Tuple::operator==(Tuple v) {
  return ((x == v.getX()) && (y == v.getY()));
}
