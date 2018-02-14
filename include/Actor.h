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
    double SPEED = 10;

public:

    /**
     *
     */
    Actor();

    Actor(double x, double y);

    /** Constructor.
     * @param x Center X position
     * @param y Center Y position
     * @param w Width
     * @param h Height
     */
    Actor(double x, double y, double w, double h);


    void setVelocity(Vector* t);


    Vector* getVelocity();


    void setParent(World* w);


    void move();


    void draw();

};
