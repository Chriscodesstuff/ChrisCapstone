#pragma once

#include <GL/glut.h>
#include "Tuple.h"

class Camera {
private:
    Tuple* pRes; //4:3, 16:9
    Tuple* pPos; //Center of Screen
    Tuple* pDim;
    double windowWidth;
    double windowHeight;
    double zoom; //relative world distance from center to right/left edge
    double WINDOW_MIN_WIDTH = 620;
    double WINDOW_MIN_HEIGHT = 320;
    double ZOOM_MAX = 100;
    double ZOOM_MIN = 50;

public:
    Camera();
    void resize();
    Tuple* getPos();
    double getZoom();
};
