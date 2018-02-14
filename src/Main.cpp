/*
 * GL01Hello.cpp: Test OpenGL/GLUT C/C++ Setup
 * Tested under Eclipse CDT with MinGW/Cygwin and CodeBlocks with MinGW
 * To compile with -lfreeglut -lglu32 -lopengl32
 */
//#include <windows.h>  // for MS Windows
using namespace std;

#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <thread>
#include <iostream>
#include "World.h"

World world;

/*void square() {
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3f(1.0f, 0.0f, 0.0f); // Red
      glVertex2f(-0.5f, -0.5f);    // x, y
      glVertex2f( 0.5f, -0.5f);
      glVertex2f( 0.5f,  0.5f);
      glVertex2f(-0.5f,  0.5f);
    glEnd();
}*/

void resize(GLint w, int h) {
    //(*world.getCamera()).resize();
   // Compute aspect ratio of the new window
   if (height == 0) height = 1;                // To prevent divide by 0
   GLfloat aspect = (GLfloat)width / (GLfloat)height;

   // Set the viewport to cover the new window
   glViewport(0, 0, width, height);

   // Set the aspect ratio of the clipping area to match the viewport
   glMatrixMode(GL_PROJECTION);  // To operate on the Projection matrix
   glLoadIdentity();             // Reset the projection matrix
   if (width >= height) {
     // aspect >= 1, set the height from -1 to 1, with larger width
      gluOrtho2D(-1.0 * aspect, 1.0 * aspect, -1.0, 1.0);
   } else {
      // aspect < 1, set the width to -1 to 1, with larger height
     gluOrtho2D(-1.0, 1.0, -1.0 / aspect, 1.0 / aspect);
   }
}


void render() {

    glClearColor(0.0f, 0.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    world.draw();

    //square();

    //glFlush();
    glutSwapBuffers();
}

void initGraphics(int argc, char** argv) {
    glutInit(&argc, argv);                 // Initialize GLUT
    glutCreateWindow("OpenGL Stuff"); // Create a window with the given title
    glutInitWindowSize(1320, 620);   // Set the window's initial width & height
    glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
    glutDisplayFunc(render); // Register display callback handler for window re-paint
    glutReshapeFunc(resize);

    glutIdleFunc(render);

    glutMainLoop();
}

void processingLoop() {
    world.addBarrier(new Barrier(-1,-1,1,1));
    world.addBarrier(new Barrier(0,0,1,1));
    while(true) {

    }
}

int main(int argc, char** argv) {
    thread t1(initGraphics, argc, argv);
    thread t2(processingLoop);
    t1.join();
    t2.join();
    return 0;
}
