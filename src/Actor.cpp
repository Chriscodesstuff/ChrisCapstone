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

void Actor::setVelocity(Vector* v) {
    pVel = v;
}

Vector* Actor::getVelocity() {
    return pVel;
}

void Actor::setParent(World* w) {
    pParent = w;
}

void Actor::move() {
    for (int i = 0; i < (*pParent).getBarriersSize(); i++) {
        if((*(*pParent).getBarrier(i)).contains((*pPos)+pVel)) {
            return;
        }
    }
    pPos = (*pPos)+pVel;
}
