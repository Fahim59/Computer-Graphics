#include <windows.h>
#include <math.h>
#include <GL/glut.h>
#include<iostream>
using namespace std;

int xc, yc, radius;

void plot_point(int x, int y)
{
      glBegin(GL_POINTS);

      glVertex2i(xc+x, yc+y);
      glVertex2i(xc+x, yc-y);
      glVertex2i(xc+y, yc+x);
      glVertex2i(xc+y, yc-x);
      glVertex2i(xc-x, yc-y);
      glVertex2i(xc-y, yc-x);
      glVertex2i(xc-x, yc+y);
      glVertex2i(xc-y, yc+x);

      glEnd();
}

void midpoint_circle(int r)
{
      int x=0,y=r;
      float pk=(5.0/4.0)-r;

      /* Plot the points */
      /* Plot the first point */

      plot_point(x,y);

      int k;

      /* Find all vertices till x=y */

      while(x < y)
      {
        x = x + 1;

        if(pk < 0)

          pk = pk + 2*x+1;

        else
        {
          y = y - 1;

          pk = pk + 2*(x - y) + 1;
        }

        plot_point(x,y);
      }
      glFlush();
}

// Function to draw circles

void display(void)
{
      /* Clears buffers to preset values */
      glClear(GL_COLOR_BUFFER_BIT);

      midpoint_circle(radius);
}

void Init()
{
      /* Set clear color to white */

      glClearColor(0.0,0.0,0.0,0);

      /* Set fill color to black */

      glColor3f(1.0,1.0,1.0);

      gluOrtho2D(0 , 640 , 0 , 480);
}

int main(int argc, char **argv)
{
    cout<<("Enter the co-ordinates\n(X-coordinate,Y-coordinate):-\n");
    cin>>xc>>yc;
    cout<<("Enter the radius:-\n");
    cin>>radius;

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(640,480);
    glutCreateWindow("Bresenham Mid-Point Circle Algorithm");
    Init();
    glutDisplayFunc(display);
    glutMainLoop();
}
