#include <windows.h>
#include <GL/glut.h>
#include<math.h>>
# define PI 3.14159265358979323846

void display()
{
    glClearColor(0.0f,1.0f,0.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(3);

    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 0.0f);

    glVertex2f(-0.9,0.0); //Field
    glVertex2f(0.2,0);
    glVertex2f(0.2,0.9);
    glVertex2f(-0.9,0.9);

    glEnd();

    glBegin(GL_LINES);
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);

    glVertex2f(-0.9,0.9); //Field box
    glVertex2f(-0.9,0.0);

    glVertex2f(0.2,0.9);
    glVertex2f(0.2,0.0);

    glVertex2f(-0.9,0.9);
    glVertex2f(0.2,0.9);

    glVertex2f(-0.9,0.0);
    glVertex2f(0.2,0.0);

    glVertex2f(0.1,0.9); //Right upper corner
    glVertex2f(0.2,0.8);

    glVertex2f(-0.8,0.9); //Left upper corner
    glVertex2f(-0.9,0.8);

    glVertex2f(0.1,0.0); //Right down corner
    glVertex2f(0.2,0.1);

    glVertex2f(-0.8,0.0); //Left down corner
    glVertex2f(-0.9,0.1);
    //---------------------------------------//

    glVertex2f(-0.9f, 0.45f); //Half Line
	glVertex2f(0.2f, 0.45f);
	//---------------------------------------//

	glVertex2f(-0.6f, 0.7f); //Left D Box big
	glVertex2f(-0.1f, 0.7f);

	glVertex2f(-0.6f, 0.9f); //Left D Box left
	glVertex2f(-0.6f, 0.7f);

	glVertex2f(-0.1f, 0.9f); //Left D Box right
	glVertex2f(-0.1f, 0.7f);

	glVertex2f(-0.5f, 0.8f); //Left D Box small
	glVertex2f(-0.2f, 0.8f);

	glVertex2f(-0.5f, 0.9f); //Left D Box small left
	glVertex2f(-0.5f, 0.8f);

	glVertex2f(-0.2f, 0.9f); //Left D Box small right
	glVertex2f(-0.2f, 0.8f);
	//-------------------------------------------------//
	glVertex2f(-0.6f, 0.2f); //Right D Box big
	glVertex2f(-0.1f, 0.2f);

	glVertex2f(-0.6f, 0.0f); //Right D Box left
	glVertex2f(-0.6f, 0.2f);

	glVertex2f(-0.1f, 0.0f); //Right D Box right
	glVertex2f(-0.1f, 0.2f);

	glVertex2f(-0.5f, 0.1f); //Right D Box small
	glVertex2f(-0.2f, 0.1f);

	glVertex2f(-0.5f, 0.0f); //Right D Box small left
	glVertex2f(-0.5f, 0.1f);

	glVertex2f(-0.2f, 0.0f); //Right D Box small right
	glVertex2f(-0.2f, 0.1f);

	glEnd();
	//-------------------------------------------------//
	glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.5f);

    glVertex2f(0.4,0.1); //Gallery
    glVertex2f(0.9,0.1);
    glVertex2f(0.9,0.8);
    glVertex2f(0.4,0.8);
    //-------------------------------------------------//
    glBegin(GL_QUADS);
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);

    glVertex2f(0.4,0.3); //Path
    glVertex2f(0.9,0.3);
    glVertex2f(0.9,0.6);
    glVertex2f(0.4,0.6);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.1f, 0.0f, 0.0f);

    glVertex2f(0.45f, 0.6f); //Path way
	glVertex2f(0.45f, 0.3f);

    glVertex2f(0.5f, 0.6f); //Path way
	glVertex2f(0.5f, 0.3f);

	glVertex2f(0.55f, 0.6f); //Path way
	glVertex2f(0.55f, 0.3f);

    glVertex2f(0.6f, 0.6f); //Path way
	glVertex2f(0.6f, 0.3f);

	glVertex2f(0.65f, 0.6f); //Path way
	glVertex2f(0.65f, 0.3f);

    glVertex2f(0.7f, 0.6f); //Path way
	glVertex2f(0.7f, 0.3f);

	glVertex2f(0.75f, 0.6f); //Path way
	glVertex2f(0.75f, 0.3f);

    glVertex2f(0.8f, 0.6f); //Path way
	glVertex2f(0.8f, 0.3f);

	glVertex2f(0.85f, 0.6f); //Path way
	glVertex2f(0.85f, 0.3f);
	//-------------------------------------------------//
	glBegin(GL_LINES);
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);

	glVertex2f(0.4f, 0.6f); //Gallery seat -
	glVertex2f(0.9f, 0.6f);

	glVertex2f(0.4f, 0.3f); //Gallery seat -
	glVertex2f(0.9f, 0.3f);

	glVertex2f(0.5f, 0.3f); //Gallery seat |
	glVertex2f(0.5f, 0.1f);

	glVertex2f(0.6f, 0.3f); //Gallery seat |
	glVertex2f(0.6f, 0.1f);

	glVertex2f(0.7f, 0.3f); //Gallery seat |
	glVertex2f(0.7f, 0.1f);

	glVertex2f(0.8f, 0.3f); //Gallery seat |
	glVertex2f(0.8f, 0.1f);

	glVertex2f(0.5f, 0.8f); //Gallery seat |
	glVertex2f(0.5f, 0.6f);

	glVertex2f(0.6f, 0.8f); //Gallery seat |
	glVertex2f(0.6f, 0.6f);

	glVertex2f(0.7f, 0.8f); //Gallery seat |
	glVertex2f(0.7f, 0.6f);

	glVertex2f(0.8f, 0.8f); //Gallery seat |
	glVertex2f(0.8f, 0.6f);

	glEnd();
	//-------------------------------------------------//
	glPointSize(8.0);

	glBegin(GL_POINTS);
	glColor4f(1.0f, 1.0f, 1.0f, 0.0f);

	glVertex2f(-0.35f, 0.75f); //Left penalty point
	glVertex2f(-0.35f, 0.15f); //Right penalty point

	glEnd();
	//-------------------------------------------------//
    float x1,y1,x2,y2; //Circle
    float angle;
    double radius=0.1;

    x1 = -0.36,y1=0.45;
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1,y1);

    for (angle=1.0f;angle<361.0f;angle+=0.2)
    {
       x2 = x1+sin(angle)*radius;
       y2 = y1+cos(angle)*radius;
       glVertex2f(x2,y2);
    }
	glEnd();
	//-------------------------------------------------//
    int i; //C-Building

	GLfloat x=0.0f; GLfloat y=-0.1f; GLfloat radiuss =.4f;
	int triangleAmount = 25;

	GLfloat twicePi = 2.0f * PI;

	glTranslatef(0.0f,-0.35f,0.0f);
	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(164,164,164);

    glColor3ub(0,0,0);
    glVertex2f(x, y);

    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(x+(radiuss*cos(i*twicePi/triangleAmount)),y+(radiuss*sin(i*twicePi/triangleAmount)));
    }

	glEnd();
	glLoadIdentity();
    //-------------------------------------//
	glBegin(GL_QUADS);
	glColor3ub(192,192,192);

	glVertex2f(-0.25,-0.95); //Base
	glVertex2f(0.25,-0.95);
	glVertex2f(0.25,-0.8);
	glVertex2f(-0.25,-0.8);

	glColor3ub(64,64,64);

	glVertex2f(-0.22,-0.92); //Sub Base
	glVertex2f(0.22,-0.92);
	glVertex2f(0.22,-0.83);
	glVertex2f(-0.22,-0.83);

	glColor3ub(0,153,153);

	glVertex2f(-0.3,-0.19); //1st quad
	glVertex2f(0.3,-0.19);
	glVertex2f(0.2,-0.1);
	glVertex2f(-0.2,-0.1);

	glVertex2f(-0.38,-0.33); //2nd quad
	glVertex2f(0.38,-0.33);
	glVertex2f(0.33,-0.23);
	glVertex2f(-0.33,-0.23);

	glVertex2f(-0.4,-0.48); //3rd quad
	glVertex2f(0.398,-0.48);
	glVertex2f(0.39,-0.38);
	glVertex2f(-0.39,-0.38);

	glVertex2f(-0.34,-0.65); //4th quad
	glVertex2f(0.34,-0.65);
	glVertex2f(0.39,-0.55);
	glVertex2f(-0.39,-0.55);

	glVertex2f(-0.2,-0.8); //last quad
	glVertex2f(0.2,-0.8);
	glVertex2f(0.3,-0.71);
	glVertex2f(-0.3,-0.71);
	glEnd();
	//-------------------------------------//
	glBegin(GL_LINES);
	glColor3ub(0,0,0);

	glVertex2f(-0.3,-0.19);
	glVertex2f(-0.3,-0.71);

	glVertex2f(-0.2,-0.1);
	glVertex2f(-0.2,-0.8);

	glVertex2f(-0.1,-0.06);
	glVertex2f(-0.1,-0.8);

	glVertex2f(0,-0.05);
	glVertex2f(0,-0.8);

	glVertex2f(0.1,-0.06);
	glVertex2f(0.1,-0.8);

	glVertex2f(0.2,-0.1);
	glVertex2f(0.2,-0.8);

	glVertex2f(0.3,-0.19);
	glVertex2f(0.3,-0.71);

	glEnd();
	//----------------------------//
	glBegin(GL_QUADS);
	glColor3ub(190,190,190);

	glVertex2f(-1.0,-0.3); //Main Road Left
	glVertex2f(-0.37,-0.3);
	glVertex2f(-0.22,-0.1);
	glVertex2f(-1.0,-0.1);

	glVertex2f(0.38,-0.3); //Main Road Right
	glVertex2f(1.0,-0.3);
	glVertex2f(1.0,-0.1);
	glVertex2f(0.22,-0.1);

	glVertex2f(-1.0,-0.46); //Second Main Road
	glVertex2f(-0.25,-0.95);
	glVertex2f(-0.25,-0.8);
	glVertex2f(-1.0,-0.3);

	glColor3ub(105,105,105);

	glVertex2f(-1.0,-0.26); //Sub Road Left
	glVertex2f(-0.35,-0.26);
	glVertex2f(-0.25,-0.14);
	glVertex2f(-1.0,-0.14);

	glVertex2f(0.35,-0.26); //Sub Road Right
	glVertex2f(1.0,-0.26);
	glVertex2f(1.0,-0.14);
	glVertex2f(0.25,-0.14);

	glVertex2f(-1.0,-0.43); //Second Sub Road
	glVertex2f(-0.3,-0.88);
	glVertex2f(-0.3,-0.8);
	glVertex2f(-1.0,-0.33);

	glEnd();
	//-----------------------------//
	glBegin(GL_LINES);
	glColor3ub(255,255,255);

	glVertex2f(-0.9f, -0.2f); //Dot dot
	glVertex2f(-0.8f, -0.2f);

	glVertex2f(-0.7f, -0.2f); //Dot dot
	glVertex2f(-0.6f, -0.2f);

	glVertex2f(-0.5f, -0.2f); //Dot dot
	glVertex2f(-0.4f, -0.2f);

	glVertex2f(0.5f, -0.2f); //Dot dot
	glVertex2f(0.4f, -0.2f);

	glVertex2f(0.7f, -0.2f); //Dot dot
	glVertex2f(0.6f, -0.2f);

	glVertex2f(0.9f, -0.2f); //Dot dot
	glVertex2f(0.8f, -0.2f);

	glVertex2f(-0.95f, -0.42f); //Dot dot
	glVertex2f(-0.88f, -0.47f);

	glVertex2f(-0.79f, -0.52f); //Dot dot
	glVertex2f(-0.72f, -0.57f);

	glVertex2f(-0.64f, -0.62f); //Dot dot
	glVertex2f(-0.57f, -0.67f);

	glVertex2f(-0.49f, -0.72f); //Dot dot
	glVertex2f(-0.42f, -0.77f);

	glEnd();
	//----------------------------//
	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(0,100,0);

	glVertex2f(0.5f, -0.3f); //Tree 1
	glVertex2f(0.6f, -0.2f);

	glVertex2f(0.7f, -0.3f); //Tree 1
	glVertex2f(0.6f, -0.2f);

	glVertex2f(0.5f, -0.3f); //Tree 1
	glVertex2f(0.55f, -0.3f);

	glVertex2f(0.65f, -0.3f); //Tree 1
	glVertex2f(0.7f, -0.3f);

	glVertex2f(0.5f, -0.4f); //Tree 1
	glVertex2f(0.55f, -0.3f);

	glVertex2f(0.7f, -0.4f); //Tree 1
	glVertex2f(0.65f, -0.3f);

	glVertex2f(0.5f, -0.4f); //Tree 1
	glVertex2f(0.7f, -0.4f);

	glVertex2f(0.58f, -0.4f); //Tree 1
	glVertex2f(0.58f, -0.5f);

	glVertex2f(0.62f, -0.4f); //Tree 1
	glVertex2f(0.62f, -0.5f);

	glVertex2f(0.58f, -0.5f); //Tree 1
	glVertex2f(0.62f, -0.5f);
	//-----------------------------//
	glVertex2f(0.8f, -0.3f); //Tree 2
	glVertex2f(0.9f, -0.2f);

	glVertex2f(0.9f, -0.2f); //Tree 2
	glVertex2f(1.0f, -0.3f);

	glVertex2f(0.8f, -0.3f); //Tree 2
	glVertex2f(0.85f, -0.3f);

	glVertex2f(0.95f, -0.3f); //Tree 2
	glVertex2f(1.0f, -0.3f);

	glVertex2f(0.85f, -0.3f); //Tree 2
	glVertex2f(0.8f, -0.4f);

	glVertex2f(0.95f, -0.3f); //Tree 2
	glVertex2f(1.0f, -0.4f);

	glVertex2f(0.8f, -0.4f); //Tree 2
	glVertex2f(1.0f, -0.4f);

	glVertex2f(0.88f, -0.4f); //Tree 2
	glVertex2f(0.88f, -0.5f);

	glVertex2f(0.92f, -0.4f); //Tree 2
	glVertex2f(0.92f, -0.5f);

	glVertex2f(0.88f, -0.5f); //Tree 2
	glVertex2f(0.92f, -0.5f);
	//-----------------------------//
	glVertex2f(-0.7f, -0.3f); //Tree 3
	glVertex2f(-0.6f, -0.2f);

    glVertex2f(-0.5f, -0.3f); //Tree 3
	glVertex2f(-0.6f, -0.2f);

	glVertex2f(-0.5f, -0.3f); //Tree 3
	glVertex2f(-0.55f, -0.3f);

	glVertex2f(-0.65f, -0.3f); //Tree 3
	glVertex2f(-0.7f, -0.3f);

	glVertex2f(-0.5f, -0.4f); //Tree 3
	glVertex2f(-0.55f, -0.3f);

	glVertex2f(-0.7f, -0.4f); //Tree 3
	glVertex2f(-0.65f, -0.3f);

	glVertex2f(-0.5f, -0.4f); //Tree 3
	glVertex2f(-0.7f, -0.4f);

	glVertex2f(-0.58f, -0.4f); //Tree 3
	glVertex2f(-0.58f, -0.5f);

	glVertex2f(-0.62f, -0.4f); //Tree 3
	glVertex2f(-0.62f, -0.5f);

	glVertex2f(-0.58f, -0.5f); //Tree 3
	glVertex2f(-0.62f, -0.5f);
	//-----------------------------//

    glEnd();

	glutSwapBuffers();
    glFlush();
}

int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitWindowSize(800,600);
    glutInitWindowPosition (300, 90);
    glutCreateWindow("AIUB View");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
