#include <windows.h>
#include <GL/glut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub (255, 255, 255);

    glBegin(GL_QUADS); //White

    glVertex2i(0, 0);
    glVertex2i(640, 0);
    glVertex2i(640, 480);
    glVertex2i(0, 480);

    glEnd();

    //Black
    glColor3ub (0, 0, 0);

    glBegin(GL_QUADS); //1

    glVertex2i(427, 440); //1
    glVertex2i(427, 465); //2
    glVertex2i(212, 465); //3
    glVertex2i(212, 440); //4

    glEnd();

    glBegin(GL_QUADS); //11

    glVertex2i(422, 34);
    glVertex2i(422, 59);
    glVertex2i(211, 59);
    glVertex2i(211, 34);

    glEnd();

    glBegin(GL_QUADS); //2

    glVertex2i(212, 414);
    glVertex2i(212, 440);
    glVertex2i(148, 440);
    glVertex2i(148, 414);

    glEnd();

    glBegin(GL_QUADS); //20

    glVertex2i(490, 414);
    glVertex2i(490,440);
    glVertex2i(427, 440);
    glVertex2i(427, 414);

    glEnd();

    glBegin(GL_QUADS); //3

    glVertex2i(148.5, 390);
    glVertex2i(148.5, 414);
    glVertex2i(118, 414);
    glVertex2i(118, 390);

    glEnd();

    glBegin(GL_QUADS); //19

    glVertex2i(520.5, 390);
    glVertex2i(520.5,414);
    glVertex2i(490, 414);
    glVertex2i(490, 390);

    glEnd();

    glBegin(GL_QUADS); //4

    glVertex2i(118, 366);
    glVertex2i(118,390);
    glVertex2i(87.5, 390);
    glVertex2i(87.5, 366);

    glEnd();

    glBegin(GL_QUADS); //18

    glVertex2i(550.5, 366);
    glVertex2i(550.5,390);
    glVertex2i(520, 390);
    glVertex2i(520, 366);

    glEnd();

    glBegin(GL_QUADS); //5

    glVertex2i(87, 342);
    glVertex2i(87,366);
    glVertex2i(56.5, 366);
    glVertex2i(56.5, 342);

    glEnd();

    glBegin(GL_QUADS); //17

    glVertex2i(580.5, 342);
    glVertex2i(580.5, 366);
    glVertex2i(550, 366);
    glVertex2i(550, 342);

    glEnd();

    glBegin(GL_QUADS); //6

    glVertex2i(56, 157);
    glVertex2i(56,342);
    glVertex2i(31, 342);
    glVertex2i(31, 157);

    glEnd();

    glBegin(GL_QUADS); //16

    glVertex2i(605, 157);
    glVertex2i(605,342);
    glVertex2i(580, 342);
    glVertex2i(580, 157);

    glEnd();

    glBegin(GL_QUADS); //7

    glVertex2i(85.5, 133);
    glVertex2i(85.5,157);
    glVertex2i(56, 157);
    glVertex2i(56, 133);

    glEnd();

    glBegin(GL_QUADS); //15

    glVertex2i(580, 133);
    glVertex2i(580, 157);
    glVertex2i(549.5, 157);
    glVertex2i(549.5, 133);

    glEnd();

    glBegin(GL_QUADS); //8

    glVertex2i(115.5, 109);
    glVertex2i(115.5,133);
    glVertex2i(85, 133);
    glVertex2i(85, 109);

    glEnd();

    glBegin(GL_QUADS); //14

    glVertex2i(549, 109);
    glVertex2i(549,133);
    glVertex2i(518.5, 133);
    glVertex2i(518.5, 109);

    glEnd();

    glBegin(GL_QUADS); //9

    glVertex2i(146, 85);
    glVertex2i(146, 109);
    glVertex2i(115.5, 109);
    glVertex2i(115.5, 85);

    glEnd();

    glBegin(GL_QUADS); //13

    glVertex2i(518, 85);
    glVertex2i(518,109);
    glVertex2i(487.5, 109);
    glVertex2i(487.5, 85);

    glEnd();

    glBegin(GL_QUADS); //10

    glVertex2i(211, 59);
    glVertex2i(211,85);
    glVertex2i(146, 85);
    glVertex2i(146, 59);

    glEnd();

    glBegin(GL_QUADS); //12

    glVertex2i(487, 59);
    glVertex2i(487,85);
    glVertex2i(422, 85);
    glVertex2i(422, 59);

    glEnd();
////////////////////////
    glColor3ub (255, 255, 0); //21

    glBegin(GL_QUADS);

    glVertex2i(580, 157);
    glVertex2i(580,342);
    glVertex2i(550, 342);
    glVertex2i(549.5, 157);

    glEnd();

    glBegin(GL_QUADS); //22

    glVertex2i(549, 133);
    glVertex2i(550, 366);
    glVertex2i(520, 366);
    glVertex2i(518.5, 133);

    glEnd();

    glBegin(GL_QUADS); //23

    glVertex2i(518, 109);
    glVertex2i(520.5, 390);
    glVertex2i(490, 390);
    glVertex2i(487.5, 109);

    glEnd();

    glBegin(GL_QUADS); //24

    glVertex2i(486.5, 85);
    glVertex2i(491, 414);
    glVertex2i(426, 414);
    glVertex2i(422, 85);

    glEnd();

    glBegin(GL_QUADS); //25

    glVertex2i(427, 440);
    glVertex2i(422,59);
    glVertex2i(211, 59);
    glVertex2i(212, 440);

    glEnd();

    glBegin(GL_QUADS); //26

    glVertex2i(211, 85);
    glVertex2i(212,414);
    glVertex2i(148, 414);
    glVertex2i(146, 85);

    glEnd();

    glBegin(GL_QUADS); //27

    glVertex2i(148, 109);
    glVertex2i(148.5,390);
    glVertex2i(119, 390);
    glVertex2i(115.5, 109);

    glEnd();

    glBegin(GL_QUADS); //28

    glVertex2i(115.5, 133);
    glVertex2i(118,366);
    glVertex2i(87.5, 366);
    glVertex2i(83.85, 133);

    glEnd();

    glBegin(GL_QUADS); //29

    glVertex2i(85.5, 157);
    glVertex2i(87,342);
    glVertex2i(56.5, 342);
    glVertex2i(56, 157);

    glEnd();

////////////////////////////

    glColor3ub (0, 0, 0);

    glBegin(GL_QUADS); //30

    glVertex2i(550, 182);
    glVertex2i(550, 305);
    glVertex2i(523, 305);
    glVertex2i(523, 182);

    glEnd();

    glBegin(GL_QUADS); //31

    glVertex2i(523, 157);
    glVertex2i(523, 334);
    glVertex2i(490, 334);
    glVertex2i(490, 157);

    glEnd();

    glBegin(GL_QUADS); //32

    glVertex2i(490, 130);
    glVertex2i(490, 360);
    glVertex2i(460, 360);
    glVertex2i(460, 130);

    glEnd();

    glBegin(GL_QUADS); //33

    glVertex2i(460, 180);
    glVertex2i(460, 310);
    glVertex2i(430, 310);
    glVertex2i(430, 180);

    glEnd();

    glBegin(GL_QUADS); //34

    glVertex2i(430, 155);
    glVertex2i(430, 280);
    glVertex2i(400, 280);
    glVertex2i(400, 155);

    glEnd();

    glBegin(GL_QUADS); //35

    glVertex2i(400, 205);
    glVertex2i(400, 310);
    glVertex2i(365, 310);
    glVertex2i(365, 205);

    glEnd();

    glBegin(GL_QUADS); //36

    glVertex2i(365, 155);
    glVertex2i(365, 360);
    glVertex2i(275, 360);
    glVertex2i(275, 155);

    glEnd();

    glBegin(GL_QUADS);

    glVertex2i(275, 205);
    glVertex2i(275, 310);
    glVertex2i(245, 310);
    glVertex2i(245, 205);

    glEnd();

    glBegin(GL_QUADS); //38

    glVertex2i(245, 155);
    glVertex2i(245, 280);
    glVertex2i(215, 280);
    glVertex2i(215, 155);

    glEnd();

    glBegin(GL_QUADS); //39

    glVertex2i(215, 180);
    glVertex2i(215, 310);
    glVertex2i(185, 310);
    glVertex2i(185, 180);

    glEnd();

    glBegin(GL_QUADS); //40

    glVertex2i(185, 130);
    glVertex2i(185, 360);
    glVertex2i(155, 360);
    glVertex2i(155, 130);

    glEnd();

    glBegin(GL_QUADS); //41

    glVertex2i(155, 157);
    glVertex2i(155, 334);
    glVertex2i(125, 334);
    glVertex2i(125, 157);

    glEnd();

    glBegin(GL_QUADS); //42

    glVertex2i(125, 182);
    glVertex2i(125, 306);
    glVertex2i(95, 306);
    glVertex2i(95, 182);

    glEnd();

    glBegin(GL_QUADS); //43

    glVertex2i(350, 105);
    glVertex2i(350, 360);
    glVertex2i(290, 360);
    glVertex2i(290, 105);

    glEnd();

    glBegin(GL_QUADS); //44

    glVertex2i(335, 80);
    glVertex2i(335, 105);
    glVertex2i(305, 105);
    glVertex2i(305, 80);

    glEnd();

    glBegin(GL_QUADS); //45

    glVertex2i(365, 360);
    glVertex2i(365, 385);
    glVertex2i(335, 385);
    glVertex2i(335, 360);

    glEnd();

    glBegin(GL_QUADS); //46

    glVertex2i(305, 360);
    glVertex2i(305, 385);
    glVertex2i(275, 385);
    glVertex2i(275, 360);

    glEnd();

    glBegin(GL_QUADS); //47

    glVertex2i(460, 345);
    glVertex2i(460, 370);
    glVertex2i(430, 370);
    glVertex2i(430, 345);

    glEnd();

    glBegin(GL_QUADS); //48

    glVertex2i(210, 345);
    glVertex2i(210, 370);
    glVertex2i(180, 370);
    glVertex2i(180, 345);

    glEnd();

    glFlush();
}

void myInit (void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);

    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize (640, 480);

    glutInitWindowPosition (100, 150);

    glutCreateWindow ("Batman Logo");

    glutDisplayFunc(display);

    myInit ();

    glutMainLoop();

    return 0;
}
