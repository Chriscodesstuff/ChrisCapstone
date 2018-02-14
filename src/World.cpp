#include "World.h"

World::World() {
    actors = new double[ARRAY_CHUNK];
    actorsSize = 0;
    actorsMaxSize = ARRAY_CHUNK;
    barriers = new Barrier*[ARRAY_CHUNK];
    barriersSize = 0;
    barriersMaxSize = ARRAY_CHUNK;
    debug = true;
}

void World::addActor(double a) {
    if(actorsSize == actorsMaxSize) {
        double* ptr = actors;
        actorsMaxSize += ARRAY_CHUNK;
        actors = new double[actorsMaxSize];
        for (int i = 0; i < actorsSize; i++) {
            actors[i] = ptr[i];
        }
        delete[] ptr;
    }
    actors[actorsSize] = a;
    actorsSize++;
}

double World::getActor(int i) {
    return actors[i];
}

int World::getActorsSize() {
    return actorsSize;
}

void World::addBarrier(Barrier* b) {
    (*b).setParent(this);
    if(barriersSize == barriersMaxSize) {
        Barrier** ptr = barriers;
        barriersMaxSize += ARRAY_CHUNK;
        barriers = new Barrier*[barriersMaxSize];
        for (int i = 0; i < barriersSize; i++) {
            barriers[i] = ptr[i];
        }
        delete[] ptr;
    }
    barriers[barriersSize] = b;
    barriersSize++;
}

Barrier* World::getBarrier(int i) {
    return barriers[i];
}

int World::getBarriersSize() {
    return barriersSize;
}

void World::draw() {
    for (int i = 0; i < barriersSize; i++) {
        (*(barriers[i])).draw();
    }
}

void World::setDebug(bool b) {
    debug = b;
}

bool World::getDebug() {
    return debug;
}
