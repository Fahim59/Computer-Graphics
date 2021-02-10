#include <windows.h>
#include <GL/glut.h>

void display()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

	glBegin(GL_QUADS);

    glColor3ub(255,255,255); // Stand Brown

    glVertex2f(-0.5f, 0.8f);    // x, y
	glVertex2f(-0.5f, -0.9f);    // x, y
	glVertex2f(-0.55f, -0.9f);
    glVertex2f(-0.55f, 0.8f);

    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(139,69,19); // Brown

    glVertex2f(-0.3f, -0.98f);    // x, y
	glVertex2f(-0.3f, -0.87f);    // x, y
	glVertex2f(-0.7f, -0.87f);
    glVertex2f(-0.7f, -0.98f);

    glEnd();

    glLineWidth(.5);

    glBegin(GL_QUADS);

    glColor3f(1.0f, 0.0f, 0.0f); //Red

    glVertex2f(-0.5f, .6f);    // x, y
    glVertex2f(0.5f, .6f);    // x, y
    glVertex2f(0.5f, 0.8f);
    glVertex2f(-0.5f, 0.8f);

    glEnd();

    glBegin(GL_QUADS);

    glColor3f(1.0f, 0.5f, 0.0f); // Orange

    glVertex2f(-0.5f, .4f);    // x, y
    glVertex2f(0.5f, .4f);    // x, y
    glVertex2f(0.5f, 0.6f);
    glVertex2f(-0.5f, 0.6f);

    glEnd();

    glBegin(GL_QUADS);

    glColor3f(1.0f, 1.0f, 0.0f);  //Yellow

    glVertex2f(-0.5f, 0.2f);    // x, y
    glVertex2f(0.5f, 0.2f);    // x, y
    glVertex2f(0.5f, 0.4f);
    glVertex2f(-0.5f, 0.4f);

    glEnd();

    glBegin(GL_QUADS);

    glColor3f(0.0f, 1.0f, 0.0f);   //Green

    glVertex2f(-0.5f, 0.0f);    // x, y
    glVertex2f(0.5f, 0.0f);    // x, y
    glVertex2f(0.5f, 0.2f);
    glVertex2f(-0.5f, 0.2f);

    glEnd();

    glBegin(GL_QUADS);

    glColor3f(0.0f, 0.0f, 1.0f); // Blue

    glVertex2f(-0.5f, -0.2f);    // x, y
    glVertex2f(0.5f, -0.2f);    // x, y
    glVertex2f(0.5f, 0.0f);
    glVertex2f(-0.5f, 0.0f);

    glEnd();

    glBegin(GL_QUADS);

    glColor3f(1.0f, 0.0f, 1.0f); // Indigo

    glVertex2f(-0.5f, -0.4f);    // x, y
    glVertex2f(0.5f, -0.4f);    // x, y
    glVertex2f(0.5f, -0.2f);
    glVertex2f(-0.5f, -0.2f);

    glEnd();

    glBegin(GL_QUADS);

    glColor3f(0.2f, 0.0f, 0.6f); // Violate

    glVertex2f(-0.5f, -0.6);    // x, y
    glVertex2f(0.5f, -0.6f);    // x, y
    glVertex2f(0.5f, -0.4f);
    glVertex2f(-0.5f, -0.4f);

    glEnd();

    glFlush();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);              // Initialize GLUT

    glutCreateWindow("Rainbow Flag"); // Create a window with the given title

    glutReshapeWindow(500, 600);   // Set the window's initial width & height

    glutDisplayFunc(display);     // Register display callback handler for window re-paint

    glutMainLoop();             // Enter the event-processing loop

    return 0;
}
