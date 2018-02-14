#pragma once

#include "Barrier.h"

class Barrier;

/** A container for actors and Barriers which alows simple interaction between
 * the two.
 * @author Chris Muller
 */
class World {
private:
    const static int ARRAY_CHUNK = 5;
    bool debug;
    double* actors;
    int actorsSize;
    int actorsMaxSize;
    Barrier** barriers;
    int barriersSize;
    int barriersMaxSize;

public:

    /** Empty Constructor
     * Initializes a world with no actors or barriers;
     */
     World();

    /** Adds an actor to the world.
     * @param a Actor
     */
    void addActor(double a);

    /** Gets the actor at a given index, likely wont be used
     * @param i Index
     * @return Actor
     */
    double getActor(int i);

    /** Gets the number of actors in the world
     * @return Number of Actors
     */
    int getActorsSize();

    /** Adds a Barrier to the World
     * @param b Barrier
     */
    void addBarrier(Barrier* b);

    /** Gets a Barrier at the given index.
     * @param i index
     * @return Barrier
     */
    Barrier* getBarrier(int i);

    /**
     *
     */
    Barrier** getBarriers();

    /** Gets the Number of Barriers in the World.
     * @return Number of Barriers
     */
    int getBarriersSize();

    /** Draws all actors and barriers.
     * TODO: (and background; Only within visible window)
     */
    void draw();

    /** Sets whether additional information should be displayed.
     * @param b True if additional information should be displayed
     */
    void setDebug(bool b);

    /** Tells an object whether it should be displaying additional information.
     * e.g. hitboxes
     * @return True if additional information should be displayed
     */
    bool getDebug();
};
