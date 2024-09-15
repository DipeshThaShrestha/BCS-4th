#include <windows.h>
#include <GL/glut.h>

void init () 
{
    glClearColor (0.0, 0.0, 0.0, 0.0);//select clearing (background) color
    glMatrixMode(GL_PROJECTION);  //initialize viewing values 
    glLoadIdentity(); // to load the program
    gluOrtho2D (0.0, 200.0, 0.0, 300.0); //glOrtho2D - the display will be in the range of this area
}
void display()
{
    glClear (GL_COLOR_BUFFER_BIT);//clear all pixels
    glColor3f (1.0, 1.0, 0.0);//set color to yellow
    glPointSize(5.0f);//set point size to 10 pixels
    glBegin(GL_POINTS);
      glVertex2i(50, 100);//defines a point at x = 100, y = 150, z = 0; 
      glVertex2i(75, 150);//this function takes only 2 parameters, z is always 0.
      glVertex2i(100, 200);
    glEnd();
    glFlush (); //start processing buffered OpenGL routines
}

