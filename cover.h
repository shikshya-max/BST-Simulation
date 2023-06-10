#ifndef COVER_H_INCLUDED
#define COVER_H_INCLUDED
#define RENDERX 0
#define RENDERY 100
#define RAD 100
#include<GL/glut.h>
#include<math.h>
extern void renderBitmap(float ,float,void*,char*);
//char buffer[100]={};
void displayCoverWindow()
{
    glColor3f(0,0,0);
    glRectf(-960,-540,960,540);
    glColor3ub(73,77,98);
    glBegin(GL_POLYGON);
        for(int i=0; i<360; i++)
        {   theta = i;
            glVertex2f(RENDERX +(RAD)*cos(theta),RENDERY+(RAD)*sin(theta));

        }
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(RENDERX-RAD,RENDERY-RAD);
    glVertex2f(RENDERX+RAD,RENDERY-RAD);
    glVertex2f(RENDERX+RAD,RENDERY+RAD);
    glEnd();

    glColor3ub(73,77,98);
    glBegin(GL_POLYGON);
        for(int i=0; i<360; i++)
        {   theta = i;
            glVertex2f(RENDERX-RAD +(RAD)*cos(theta),RENDERY+(RAD)*sin(theta));

        }

    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    //glVertex2f(RENDERX-RAD,RENDERY);
    glVertex2f(RENDERX-RAD,RENDERY+(RAD)/2);
    glVertex2f(RENDERX,RENDERY+RAD);
    glVertex2f(RENDERX-RAD*2,RENDERY+RAD);
    glVertex2f(RENDERX-RAD*2,RENDERY-RAD);
    glVertex2f(RENDERX-RAD,RENDERY-RAD/2);

    glEnd();
glColor3ub(56,0,3);
    glBegin(GL_POLYGON);
        for(int i=0; i<360; i++)
        {   theta = i;
            glVertex2f(RENDERX-RAD*3+30 +(RAD)*cos(theta),RENDERY-30+(RAD)*sin(theta));

        }
    glEnd();
    glRectf(RENDERX+RAD*1.5+30,RENDERY-RAD-30,RENDERX+RAD*2.5+30, RENDERY+RAD-30);

    glRectf(RENDERX-RAD*3+30, RENDERY+RAD*1.5-30,RENDERX+RAD*3+30,RENDERY+RAD*2.5-30);
    glColor3f(0,0,0);
    glRectf(RENDERX-RAD*4+30,RENDERY-RAD-30,RENDERX-RAD*3+30,RENDERY+RAD-30);



     glColor3ub(122,4,4);
    glBegin(GL_POLYGON);
        for(int i=0; i<360; i++)
        {   theta = i;
            glVertex2f(RENDERX-RAD*3 +(RAD)*cos(theta),RENDERY+(RAD)*sin(theta));

        }
    glEnd();
    glRectf(RENDERX+RAD*1.5,RENDERY-RAD,RENDERX+RAD*2.5, RENDERY+RAD);

    glRectf(RENDERX-RAD*3, RENDERY+RAD*1.5,RENDERX+RAD*3,RENDERY+RAD*2.5);
    glColor3f(0,0,0);
    glRectf(RENDERX-RAD*4,RENDERY-RAD,RENDERX-RAD*3,RENDERY+RAD);

    glColor3f(0,0,0);
    glRectf(RENDERX-960,RENDERY-15,RENDERX+960,RENDERY+15);


    //LINES
    glColor3ub(177,139,216);
    glRectf(RENDERX-960,RENDERY-130,RENDERX+820,RENDERY-110);
    glRectf(RENDERX-680,RENDERY-130,RENDERX-660,RENDERY+540);
    glRectf(RENDERX+680,RENDERY-640,RENDERX+660,RENDERY-110);
    glRectf(RENDERX-680,RENDERY-250,RENDERX+660,RENDERY-110);
    glColor3ub(69,69,69);
    glRectf(RENDERX-660,RENDERY-230,RENDERX+660,RENDERY-130);

    glColor3ub(255,255,255);
    snprintf(buffer,100,"BINARY SEARCH TREE");
    renderBitmap(RENDERX-RAD*2,RENDERY+RAD*1.8,GLUT_BITMAP_HELVETICA_18,buffer);


    snprintf(buffer,100,"SUBMITTED TO: ER. DIPENDRA RAUNIYAR");
        //glRectf(RENDERX-660,RENDERY-230,RENDERX+660,RENDERY-130);

    glColor3ub(153,217,234);
    renderBitmap(RENDERX-400,RENDERY-200,GLUT_BITMAP_HELVETICA_18,buffer);
    snprintf(buffer,100,"COMPUTER GRAPHICS");
    //RENDERX-960,RENDERY-130,RENDERX+800,RENDERY-110);
    renderBitmap(RENDERX+400,RENDERY-100,GLUT_BITMAP_HELVETICA_18,buffer);
    snprintf(buffer,100,"SUBMITTED BY:");
    renderBitmap(RENDERX-600,RENDERY-300,GLUT_BITMAP_HELVETICA_12,buffer);
    snprintf(buffer,100,"THA075BCT011");
    renderBitmap(RENDERX-500,RENDERY-350,GLUT_BITMAP_HELVETICA_12,buffer);
    snprintf(buffer,100,"THA075BCT030");
    renderBitmap(RENDERX-500,RENDERY-400,GLUT_BITMAP_HELVETICA_12,buffer);
    snprintf(buffer,100,"THA075BCT041");
    renderBitmap(RENDERX-500,RENDERY-450,GLUT_BITMAP_HELVETICA_12,buffer);
    snprintf(buffer,100,"THA075BCT048");
    renderBitmap(RENDERX-500,RENDERY-500,GLUT_BITMAP_HELVETICA_12,buffer);

    snprintf(buffer,100,"ASHMA RAI");
    renderBitmap(RENDERX-300,RENDERY-350,GLUT_BITMAP_HELVETICA_12,buffer);
    snprintf(buffer,100,"NIRUTA SHRESTHA");
    renderBitmap(RENDERX-300,RENDERY-400,GLUT_BITMAP_HELVETICA_12,buffer);
    snprintf(buffer,100,"SHIKSHYA SHIWAKOTI");
    renderBitmap(RENDERX-300,RENDERY-450,GLUT_BITMAP_HELVETICA_12,buffer);
    snprintf(buffer,100,"SWOSTIKA BASUKALA");
    renderBitmap(RENDERX-300,RENDERY-500,GLUT_BITMAP_HELVETICA_12,buffer);


     glColor3ub(183,4,4);
    snprintf(buffer,100,"PRESS ENTER TO CONTINUE");
    renderBitmap(RENDERX+100,RENDERY-600,GLUT_BITMAP_HELVETICA_18,buffer);

}


#endif // COVER_H_INCLUDED
