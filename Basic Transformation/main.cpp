#include <windows.h>
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <time.h>
#include <vector>
#include <GL/glut.h>
# define PI 3.14159265358979323846
using namespace std;

GLfloat x,y;
GLfloat i = 0.0f;

int pntX1, pntY1,edges;
int transX, transY;
double scaleX, scaleY;
char reflectionAxis;
char shearingAxis;
int shearingX, shearingY;

vector<int> pntX;
vector<int> pntY;

/*void translationdisplay()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glScalef(x,y,1);

    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,0.0);

    glVertex2f(.3,.3);
    glVertex2f(-.3,.3);
    glVertex2f(-.3,-.3);
    glVertex2f(.3,-.3);

    glEnd();

    glTranslatef(-0.5,0.5,0);

    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);

    glVertex2f(.3,.3);
    glVertex2f(-.3,.3);
    glVertex2f(-.3,-.3);
    glVertex2f(.3,-.3);

    glEnd();

    glFlush();
}

void scalingdisplay()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glScalef(x,y,1);

    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,0.0);

    glVertex2f(.6,.6);
    glVertex2f(-.6,.6);
    glVertex2f(-.6,-.6);
    glVertex2f(.6,-.6);

    glEnd();

    glTranslatef(0.5,0.0,0);

    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);

    glVertex2f(.3,.3);
    glVertex2f(-.3,.3);
    glVertex2f(-.3,-.3);

    glEnd();

    glFlush();
}*/

void Idle()
{
    glutPostRedisplay();
}

void rotatedisplay()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    glRotatef(i,0,0.0,0.1);

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);

    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.5f, 0.0f);
    glVertex2f(0.5f, 0.4f);
    glVertex2f(0.0f, 0.4f);

    glEnd();

    glPopMatrix();

    i+=0.2f;

    glFlush();
}

void drawPolygon()
{
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);

    for (int i = 0; i < edges; i++)
    {
        glVertex2i(pntX[i], pntY[i]);
    }

    glEnd();
}

void drawPolygonMirrorReflection(char reflectionAxis)
{
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);

    if (reflectionAxis == 'x' || reflectionAxis == 'X')
    {
        for (int i = 0; i < edges; i++)
        {
            glVertex2i(round(pntX[i]), round(pntY[i] * -1));
        }
    }
    else if (reflectionAxis == 'y' || reflectionAxis == 'Y')
    {
        for (int i = 0; i < edges; i++)
        {
            glVertex2i(round(pntX[i] * -1), round(pntY[i]));
        }
    }

    glEnd();
}

void myInit(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);

    glPointSize(8.0);

    glMatrixMode(GL_PROJECTION);

    glLoadIdentity();

    gluOrtho2D(-640.0, 640.0, -480.0, 480.0);
}

void myDisplay(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);

    drawPolygon();
    drawPolygonMirrorReflection(reflectionAxis);

    glFlush();
}

void drawPolygonTrans(int x, int y) //Translation
{
    glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 0.0);
    for (int i = 0; i < edges; i++)
    {
        glVertex2i(pntX[i] + x, pntY[i] + y);
    }
    glEnd();
}
/*void drawPolygonScale(double x, double y)
{
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);
    for (int i = 0; i < edges; i++)
    {
        glVertex2i(round(pntX[i] * x), round(pntY[i] * y));
    }
    glEnd();
}*/
void myDisplay1(void) //Translation
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);

    drawPolygon();
    drawPolygonTrans(transX, transY);

    glFlush();
}

void drawPolygonShearing()
{
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.5);

    if (shearingAxis == 'x' || shearingAxis == 'X')
    {
        glVertex2i(pntX[0], pntY[0]);

        glVertex2i(pntX[1] + shearingX, pntY[1]);

        glVertex2i(pntX[2] + shearingX, pntY[2]);

        glVertex2i(pntX[3], pntY[3]);
    }
    else if (shearingAxis == 'y' || shearingAxis == 'Y')
    {
        glVertex2i(pntX[0], pntY[0]);

        glVertex2i(pntX[1], pntY[1]);

        glVertex2i(pntX[2], pntY[2] + shearingY);

        glVertex2i(pntX[3], pntY[3] + shearingY);
    }

    glEnd();
}

void shearingDisplay(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);

    drawPolygon();

    drawPolygonShearing();

    glFlush();
}

int main(int argc, char** argv)
{
    int option;

    cout<<"Enter Your Choice"<<endl;
    cout<<"1.Translation"<<endl;
    cout<<"2.Scaling"<<endl;
    cout<<"3.Rotation"<<endl;
    cout<<"4.Mirror Reflection"<<endl;
    cout<<"5.Shearing"<<endl;

    cin>>option;

    switch(option)
    {
        case 1:

        cout << "Translation" << endl;
        cout << "Enter no of edges for a Polygon: "; cin >> edges;

        for (int i = 0; i < edges; i++)
        {
            cout << "Enter co-ordinates for vertex  " << i + 1 << " : "; cin >> pntX1 >> pntY1;
            pntX.push_back(pntX1);
            pntY.push_back(pntY1);
        }
        cout << "Enter the translation factor for X and Y: "; cin >> transX >> transY;

        glutInit(&argc, argv);
        glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
        glutInitWindowSize(640, 480);
        glutInitWindowPosition(100, 150);
        glutCreateWindow("Translation");
        glutDisplayFunc(myDisplay1);
        myInit();
        glutMainLoop();

        return 0;

        break;

        case 2:

        cout << "Scaling" << endl;
        cout << "Enter no of edges for a Polygon: "; cin >> edges;

        for (int i = 0; i < edges; i++)
        {
            cout << "Enter co-ordinates for vertex  " << i + 1 << " : "; cin >> pntX1 >> pntY1;
            pntX.push_back(pntX1);
            pntY.push_back(pntY1);
        }
        cout << "Enter the scaling factor for X and Y: "; cin >> scaleX >> scaleY;

        glutInit(&argc, argv);
        glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
        glutInitWindowSize(640, 480);
        glutInitWindowPosition(100, 150);
        glutCreateWindow("Scaling");
        glutDisplayFunc(myDisplay1);
        myInit();
        glutMainLoop();

        return 0;

        break;

        case 3:

        glutInit(&argc, argv);

        cout<<" Rotation"<<endl;

        glutInitWindowSize(640, 480);
        glutCreateWindow("Rotation");
        glutDisplayFunc(rotatedisplay);
        glutIdleFunc(Idle);
        glutMainLoop();

        return 0;

        break;

        case 4 :

        cout << "Mirror Reflection" << endl;
        cout << "Enter no of edges for a Polygon: "; cin >> edges;

        for (int i = 0; i < edges; i++)
        {
            cout << "Enter co-ordinates for vertex " << i + 1 << " : "; cin >> pntX1 >> pntY1;
            pntX.push_back(pntX1);
            pntY.push_back(pntY1);
        }

        cout << "Enter reflection axis ( x or y ): "; cin >> reflectionAxis;

        glutInit(&argc, argv);
        glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
        glutInitWindowSize(640, 480);
        glutInitWindowPosition(100, 150);
        glutCreateWindow("Mirror Reflection");
        glutDisplayFunc(myDisplay);
        myInit();
        glutMainLoop();

        break;

        case 5:

        cout << "Shearing" << endl;
        cout << "Enter no of edges for a Polygon: "; cin >> edges;

        for (int i = 0; i < edges; i++)
        {
            cout << "Enter co-ordinates for vertex  " << i + 1 << " : "; cin >> pntX1 >> pntY1;

            pntX.push_back(pntX1);
            pntY.push_back(pntY1);
        }

        cout << "Enter reflection axis ( x or y ): "; cin >> shearingAxis;

        if (shearingAxis == 'x' || shearingAxis == 'X')
        {
            cout << "Enter the shearing factor for X: "; cin >> shearingX;
        }
        else
        {
            cout << "Enter the shearing factor for Y: "; cin >> shearingY;
        }

        glutInit(&argc, argv);
        glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
        glutInitWindowSize(640, 480);
        glutInitWindowPosition(100, 150);
        glutCreateWindow("Shearing");
        glutDisplayFunc(myDisplay);
        myInit();
        glutMainLoop();
    }
}
