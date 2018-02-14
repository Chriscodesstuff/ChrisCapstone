#pragma once

#include <GL/glut.h>
#include "Tuple.h"
#include "World.h"

class World;

/** An object which an Actor can't pass through.
 * @author Chris Muller
 */
class Barrier {

private:
    Tuple* pPos;
    Tuple* pDim;
    World* pParent;

public:

    /** Default Constructor.
     * Note: setParent() must be called seperately.
     */
    Barrier();

    /** Argument Constructor.
     * Note: setParent() must be called seperately.
     * @param x Top-left corner X position
     * @param y Top-left corner Y position
     * @param w Width
     * @param h Height
     */
    Barrier(double x, double y, double w, double h);

    /** Sets parent world.
     * @param *w Pointer to parent world
     */
    void setParent(World *w);

    /** Determines whether a given point is within the bounds of the barrier.
     * @param &p Reference to Point
     * @return True if point is within bounds
     */
    bool contains(Tuple* p);

    /** Draws the barrier's texture.
     * If debug is true, also draws hitbox in red
     */
    void draw();
};
