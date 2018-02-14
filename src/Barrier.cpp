#include "Barrier.h"

Barrier::Barrier() {
    pPos = new Tuple();
    pDim = new Tuple();
}

Barrier::Barrier(double x, double y, double w, double h) {
    pPos = new Tuple(x, y);
    pDim = new Tuple(w, h);
}

void Barrier::setParent(World* w) {
    pParent = w;
}

bool Barrier::contains(Tuple* p) {
    return ((*pPos).getX() <= (*p).getX() &&
            (*pPos).getX() + (*pDim).getX() >= (*p).getX() &&
            (*pPos).getY() <= (*p).getY() &&
            (*pPos).getY() + (*pDim).getY() >= (*p).getY()
    );
}

void Barrier::draw() {
    if((*pParent).getDebug()) {
        glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
            glColor3f(1.0f, 0.0f, 0.0f); // Red
            glVertex2d((*pPos).getX(), (*pPos).getY());    // x, y
            glVertex2d((*pPos).getX() + (*pDim).getX(), (*pPos).getY());
            glVertex2d((*pPos).getX() + (*pDim).getX(), (*pPos).getY() + (*pDim).getY());
            glVertex2d((*pPos).getX(), (*pPos).getY() + (*pDim).getX());
        glEnd();
    }
}
