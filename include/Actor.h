#pragma once

#include "World.h"
#include "Barrier.h"
#include "Tuple.h"
#include "Vector.h"

class World;
class Barrier;

/**
 *
 */
class Actor {
private:
    Tuple* pPos;
    Tuple* pDim;
    Vector* pVel;
    World* pParent;
    const static double SPEED = 10;

public:

    /**
     *
     */
    Actor();

    /** Constructor.
     * @param x Center X position
     * @param y Center Y position
     * @param w Width
     * @param h Height
     */
    Actor(double x, double y, double w, double h);


    void setVelocity(Tuple* t);


    Tuple* getVelocity();


    void move();


    void draw();

}
