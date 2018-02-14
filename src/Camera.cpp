#include "Camera.h"

Camera::Camera() {
    pPos = new Tuple(0, 0);
    pRes = new Tuple(16, 9);
    pDim = new Tuple(3000,2000);
}

void Camera::resize() {
    windowWidth = glutGet(GLUT_WINDOW_WIDTH);
    windowHeight = glutGet(GLUT_WINDOW_HEIGHT);
    if(windowWidth < WINDOW_MIN_WIDTH || windowHeight < WINDOW_MIN_HEIGHT){
        //glutReshapeWindow((int)WINDOW_MIN_WIDTH, (int)WINDOW_MIN_HEIGHT);
    }
    if((windowWidth / (*pRes).getX()) < (windowHeight / (*pRes).getY())) {
        (*pDim).setX(windowWidth);
        (*pDim).setY(windowWidth * ((*pRes).getY() / (*pRes).getX()));
    } else {
        (*pDim).setX(windowHeight * ((*pRes).getX() / (*pRes).getY()));
        (*pDim).setY(windowHeight);
    }
}

Tuple* Camera::getPos() {
    return pPos;
}

double Camera::getZoom() {
    return zoom;
}
