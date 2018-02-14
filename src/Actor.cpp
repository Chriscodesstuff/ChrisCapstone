#include "Actor.h"

Actor::Actor() {

}

Actor::Actor(double x, double y) {
    pPos = new Tuple(x, y);
    pDim = new Tuple(10, 10);
    pVel = new Vector(0, 0);
}

Actor::Actor(double x, double y, double w, double h) {
    pPos = new Tuple(x, y);
    pDim = new Tuple(w, h);
    pVel = new Vector(0, 0);
}
