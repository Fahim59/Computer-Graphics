#include<windows.h>
#include<GL/glut.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

int xa,xb,ya,yb;

void display (void)
{
    int dx=xb-xa;
    int dy=yb-ya;
    int m0 = dy/dx;
    float x=xa,y=ya;

    glClear (GL_COLOR_BUFFER_BIT);

    glColor3f (0.0, 1.0,0.0);

    glBegin(GL_POINTS);

    glVertex2i(x,y);

    int m =m0;
    int k;

    for(k=0;k<dx;k++)
    {
        if(m < 1)
        {
            x = x+1;
            y = y+m;
            glVertex2i(x,y);
        }
        else if(m > 1)
        {
            x=x+(1/m);
            y=y+1;
            glVertex2i(x,y);
        }
        else if(m = 1)
        {
            x = x+1; y = y+1;
            glVertex2i(x,y);
        }
    }

    glEnd();
    glFlush();
}

void init(void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
    cout<<("Enter the points\n(X1,Y1,X2,Y2):-\n");
    cin>>xa>>ya>>xb>>yb;

    glutInit(&argc, argv);

    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize (640, 560);

    glutInitWindowPosition (100, 100);

    glutCreateWindow ("DDA Line Algorithm");

    init();

    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}
