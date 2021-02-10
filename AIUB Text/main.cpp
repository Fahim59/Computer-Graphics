#include <windows.h>
#include <GL/glut.h>

void display() {

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque

    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    glLineWidth(.5);

    glBegin(GL_QUADS);  //A
    glColor3f(0.0f, 0.0f, 1.0f);

    glVertex2f(-0.8f, -0.2f);
    glVertex2f(-0.5f, 0.35f);
    glVertex2f(-0.55f, 0.45f);
    glVertex2f(-0.9f, -0.2f);

    glBegin(GL_QUADS);  //A

    glVertex2f(-0.3f, -0.2f);
    glVertex2f(-0.58f, 0.4f);
	glVertex2f(-0.55f, 0.45f);
	glVertex2f(-0.2f, -0.2f);

	glBegin(GL_QUADS);  //A

    glVertex2f(-0.7f, -0.1f);
    glVertex2f(-0.4f, 0.0f);
    glVertex2f(-0.4f, -0.1f);
    //glVertex2f(-0.7f, -0.1f);
	glVertex2f(-0.7f, 0.0f);

	glEnd();

	glBegin(GL_QUADS);  //I

    glVertex2f(-0.14f, 0.45f);
    glVertex2f(-0.14f, -0.2f);
    glVertex2f(-0.18f, -0.2f);
    glVertex2f(-0.18f, 0.45f);

	glEnd();

	glBegin(GL_QUADS); //U

	glVertex2f(0.01f, 0.45f);
    glVertex2f(0.01f, -0.2f);
    glVertex2f(0.05f, -0.2f);
    glVertex2f(0.05f, 0.45f);

	glEnd();

	glBegin(GL_QUADS);  //U

    glVertex2f(0.22f, 0.45f);
    glVertex2f(0.22f, -0.2f);
    glVertex2f(0.26f, -0.2f);
    glVertex2f(0.26f, 0.45f);

	glEnd();

	glBegin(GL_QUADS);  //U

    glVertex2f(0.01f, -0.2f);
    glVertex2f(0.01f, -0.16f);
    glVertex2f(0.26f, -0.16f);
    glVertex2f(0.26f, -0.2f);

	glEnd();

	glBegin(GL_QUADS);  //B

    glVertex2f(0.3f, 0.45f);
    glVertex2f(0.3f, -0.2f);
    glVertex2f(0.34f, -0.2f);
    glVertex2f(0.34f, 0.45f);

    glEnd();

    glBegin(GL_QUADS);  //B

    glVertex2f(0.52f, 0.45f);
    glVertex2f(0.52f, -0.2f);
    glVertex2f(0.56f, -0.2f);
    glVertex2f(0.56f, 0.45f);

    glEnd();

    glBegin(GL_QUADS);  //B

    glVertex2f(0.3f, -0.2f);
    glVertex2f(0.3f, -0.16f);
    glVertex2f(0.56f, -0.16f);
    glVertex2f(0.56f, -0.2f);

    glEnd();

    glBegin(GL_QUADS);  //B

    glVertex2f(0.3f, 0.45f);
    glVertex2f(0.3f, 0.41f);
    glVertex2f(0.56f, 0.41f);
    glVertex2f(0.56f, 0.45f);

    glEnd();

    glBegin(GL_QUADS);  //B

    glVertex2f(0.3f, 0.10f);
    glVertex2f(0.3f, 0.14f);
    glVertex2f(0.56f, 0.14f);
    glVertex2f(0.56f, 0.10f);

    glEnd();

    glFlush();
}

int main(int argc, char** argv) {

    glutInit(&argc, argv);                 // Initialize GLUT

    glutCreateWindow("AIUB TEXT");        // Create a window with the given title
    glutReshapeWindow(700, 400);

    glutDisplayFunc(display);           // Register display callback handler for window re-paint

    glutMainLoop();                    // Enter the event-processing loop

    return 0;
}
