//
//  main.cpp
//  Trigonometric Circle Drawing Algorithm
//
//  Created by Asif Mohaimen on 4/10/16.
//  Copyright © 2016 Asif Mohaimen. All rights reserved.
//

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double cx,cy,r;

void mydisplay()
{
    cx = rint(cx);
    cy = rint(cy);
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(5.0f);
    glBegin(GL_POINTS);
    double i,j,k;
    for (k=0;k<=45;++k){
        i = r * cos(k*(3.14159/180));
        j = r * sin(k*(3.14159/180));
        i = rint(i);
        j = rint(j);
        glVertex2f((i/100)+cx/100, (j/100)+cy/100);
        glVertex2f((i/100)+cx/100, -(j/100)+cy/100);
        glVertex2f((j/100)+cx/100, -(i/100)+cy/100);
        glVertex2f((j/100)+cx/100, (i/100)+cy/100);
        glVertex2f(-(j/100)+cx/100, -(i/100)+cy/100);
        glVertex2f(-(i/100)+cx/100, -(j/100)+cy/100);
        glVertex2f(-(i/100)+cx/100, (j/100)+cy/100);
        glVertex2f(-(j/100)+cx/100, (i/100)+cy/100);
    }
    glEnd();
    glFlush();
}

int main(int argc, char** argv)
{
    
    scanf("%lf %lf %lf",&cx,&cy,&r);
    glutInit(&argc,argv);
    glutCreateWindow("Trigonometric Circle Drawing Algorithm");
    glutDisplayFunc(mydisplay);
    glutMainLoop();
    
}