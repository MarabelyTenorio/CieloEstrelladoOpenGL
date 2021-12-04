/*
	@autor: Marabely Alvarado,
	un simple cielo nocturno estrellado
*/

/*ESTE ES EL CODIGO FUNCIONAL PARA HACER ESTRELLAS EN EL CIELO*/
#include<stdio.h>
#include<stdlib.h>
#include<glut.h>

float genRan() {

    float rNUM = (-1) + (float)rand() / ((float)RAND_MAX / (1 - (-1)));
    return rNUM;
}


void grafico(void) {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPointSize(3);
    glBegin(GL_POINTS);
    glColor3f(0.0f, 0.5f, 1.0f);//baby Blue

    for (int i = 0; i < 100; i++) {
        glVertex2f(genRan(), genRan());
    }

    glEnd();

    glFlush();
}

int main(int argc, char** argv) {

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_DEPTH | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(640, 480);
    glutCreateWindow("DIBUJANDO GRAFICAS");
    glutDisplayFunc(grafico);
    glutMainLoop();
}