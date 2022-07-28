/**************************
*	File Name:	Hot air balloon                                               *
*	                                                                          *
*   Description: Animated Hot air balloon                                     *
*													                          *
*																			  *
**************************/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<GL/glut.h>
#include<conio.h>
#include<string.h>

#define MAX 10
int k=0;
int h=0;
int ch=0;
int rFlag = 0;
float x_position = -1.0;
float x1_position = 1.0;
float y_position = -0.9;
float y1_position = 0.9;
int state = 1;//right side




//func to display text on screen char by char
void bitmap_output(int x, int y, char *string, void *font)
{
    int len, i;

    glRasterPos2f(x, y);
    len = (int) strlen(string);
    for (i = 0; i < len; i++)
    {
        glutBitmapCharacter(font, string[i]);
    }
}

void front()
{

    glBegin(GL_POLYGON);
    {
        glColor3f(0.4,0.2,0.3);
        glVertex2f(0,0);
        glColor3f(0.1,0.3,0.5);
        glVertex2f(0,900);
        glColor3f(0.4,0.0,0.0);
        glVertex2f(900,900);
        glColor3f(0.0,0.1,0.0);
        glVertex2f(900,0);
    }
    glEnd();

    glColor3f(0.0,0.0,1.0);
    bitmap_output(260, 565, "GRAPHICAL IMPLEMENTATION",GLUT_BITMAP_TIMES_ROMAN_24);
    bitmap_output(420, 530, "OF",GLUT_BITMAP_TIMES_ROMAN_24);
    bitmap_output(330, 495, "HOT AIR BALLOON",GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(1.0,0.0,0.0);
    bitmap_output(370, 420, "Submitted by",GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(1.9,1.2,1.6);
    bitmap_output(600, 380, "Siddharth Vaddem",GLUT_BITMAP_TIMES_ROMAN_24);
    bitmap_output(600, 350, "(1BY19CS150)",GLUT_BITMAP_TIMES_ROMAN_24);
    bitmap_output(100, 380, "Sohankumar T R",GLUT_BITMAP_TIMES_ROMAN_24);
    bitmap_output(100, 350, "(1BY19CS154)",GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(1.0,0.0,0.0);
    bitmap_output(350, 320, "Under the guidance of",GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(1.4,1.2,1.6);
    bitmap_output(650, 280, "Mr.Muneshwara M S",GLUT_BITMAP_TIMES_ROMAN_24);
    bitmap_output(650, 250, "Assistant Professor",GLUT_BITMAP_TIMES_ROMAN_24);
    bitmap_output(100, 280, "Mrs. Chetana C",GLUT_BITMAP_TIMES_ROMAN_24);
    bitmap_output(100, 250, "Assistant Professor",GLUT_BITMAP_TIMES_ROMAN_24);
    bitmap_output(375, 280, "Mr.Shankar R",GLUT_BITMAP_TIMES_ROMAN_24);
    bitmap_output(375, 250, "Assistant Professor",GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(1.0,1.4,1.0);
    bitmap_output(280, 160, "VI SEM CSE",GLUT_BITMAP_TIMES_ROMAN_24);
    bitmap_output(280, 130, "BMS INSTITUTE OF TECHNOLOGY",GLUT_BITMAP_TIMES_ROMAN_24);
    bitmap_output(280, 100, "YELHANKA. BANGLORE",GLUT_BITMAP_TIMES_ROMAN_24);

    glColor3f(1.0,0.0,0.0);
    glColor3f(0.0,1.0,0.0);
    bitmap_output(650, 75, "Press Enter to continue.......",GLUT_BITMAP_TIMES_ROMAN_24);

}

void next()
{
    glColor3f(0.0,0.0,0.0);
    bitmap_output(300, 400, "MENU",GLUT_BITMAP_TIMES_ROMAN_24);
    bitmap_output(300, 335, "1.Hot Air Balloon",GLUT_BITMAP_TIMES_ROMAN_24);
    bitmap_output(300, 295, "2.Help",GLUT_BITMAP_TIMES_ROMAN_24);
    bitmap_output(300, 255, "3.Exit",GLUT_BITMAP_TIMES_ROMAN_24);

}

void AnimateMenu(int option)
{
    if (option == 1)
        rFlag = 1;
    if (option == 2)
        rFlag = 2;
    if (option == 3)
        rFlag = 3;
    if (option == 4)
        rFlag = 4;
    if(option==5)
        exit(0);
}
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0,0.0,0.0);

    if (k==0)
        front();
    else if(h==0)
    {

        next();
    }
    else if(h==2)
    {
        bitmap_output(20, 100, "Press M for menu and Q for quit",GLUT_BITMAP_TIMES_ROMAN_24);
        bitmap_output(400, 400, "HELP",GLUT_BITMAP_TIMES_ROMAN_24);
        bitmap_output(20, 335, "The main objective of Hot Air Balloon Computer Graphics Mini Project is to illustrate",GLUT_BITMAP_TIMES_ROMAN_24);
        bitmap_output(20, 310, "the concepts and usage of pre-built functions in OpenGL. The development of this",GLUT_BITMAP_TIMES_ROMAN_24);
        bitmap_output(20, 285, "project provides a good insight into the concepts of Computer Graphics and Visualization.",GLUT_BITMAP_TIMES_ROMAN_24);
        bitmap_output(20, 260, "We will be using the OpenGL utility toolkit to implement the animation of the Hot Air",GLUT_BITMAP_TIMES_ROMAN_24);
        bitmap_output(20, 235, "Balloon, written in C++ language.",GLUT_BITMAP_TIMES_ROMAN_24);


    }
    else
    {
        glLoadIdentity();
        glBegin(GL_POLYGON);
        glColor3f(1, 0, 0);
        glVertex3f(x1_position - 0.22, y1_position + 0, 0.1);
        glVertex3f(x1_position - 0.21, y1_position + 0.1, 0.1);
        glVertex3f(x1_position - 0.19, y1_position + 0.13, 0.1);
        glColor3f(1, 0, 0);
        glVertex3f(x1_position - 0.09, y1_position + 0.17, 0.1);
        glVertex3f(x1_position + 0.09, y1_position + 0.17, 0.1);
        glColor3f(1, 0, 0);
        glVertex3f(x1_position + 0.19, y1_position + 0.13, 0.1);
        glVertex3f(x1_position + 0.21, y1_position + 0.1, 0.1);
        glVertex3f(x1_position + 0.22, y1_position + 0, 0.1);
        glColor3f(1, 0, 0);
        glVertex3f(x1_position + 0.05, y1_position + -0.4, 0.1);
        glVertex3f(x1_position + -0.05, y1_position + -0.4, 0.1);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.5f, 0.0f);
        glVertex3f(x1_position - 0.05, y1_position - 0.67, 0.1);
        glVertex3f(x1_position + 0.05, y1_position - 0.67, 0.1);
        glVertex3f(x1_position + 0.05, y1_position - 0.78, 0.1);
        glVertex3f(x1_position + 0.04, y1_position - 0.8, 0.1);
        glVertex3f(x1_position - 0.04, y1_position - 0.8, 0.1);
        glVertex3f(x1_position - 0.05, y1_position - 0.78, 0.1);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(0, 0, 0);
        glVertex3f(x1_position + 0.05, y1_position - 0.4, 0.1);
        glVertex3f(x1_position + 0.05, y1_position - 0.67, 0.1);
        glVertex3f(x1_position - 0.05, y1_position - 0.4, 0.1);
        glVertex3f(x1_position - 0.05, y1_position - 0.67, 0.1);
        glVertex3f(x1_position + 0.03, y1_position - 0.4, 0.1);
        glVertex3f(x1_position + 0.03, y1_position - 0.67, 0.1);
        glVertex3f(x1_position - 0.03, y1_position - 0.4, 0.1);
        glVertex3f(x1_position - 0.03, y1_position - 0.67, 0.1);
        glEnd();

        glBegin(GL_POLYGON);                        // Middle circle
        double radius = 0.025;
        double ori_x = x1_position;                         // the origin or center of circle
        double ori_y = y1_position - 0.55;
        double PI  = 3.1416;
        for (int i = 0; i <= 300; i++)
        {
            double angle = 2 * PI * i / 300;
            double x = cos(angle) * radius;
            double y = sin(angle) * radius;

            glVertex2d(ori_x + x, ori_y + y);
        }
        glEnd();
        glBegin(GL_LINES);
        glVertex2d(ori_x,ori_y- 0.02);
        glVertex2d(ori_x,ori_y- 0.130);
        glEnd();
        glBegin(GL_LINES);
        glVertex2d(ori_x,ori_y- 0.06);
        glVertex2d(ori_x + 0.03,ori_y- 0.05);
        glEnd();
        glBegin(GL_LINES);
        glVertex2d(ori_x,ori_y- 0.06);
        glVertex2d(ori_x - 0.03,ori_y- 0.05);
        glEnd();

    }
    glutSwapBuffers();

}

void keyboard (unsigned char key, int x, int y)
{
    if(key==13)
        k=1;
    if(key=='1')
        h=1;
    else if(key=='2')
        h=2;
    else if(key=='3')
        exit(0);
    if (h==1||h==2)
    {
        switch (key)
        {

        case 'q':
            exit(0);
            break;
        case 'm':
            h=0;
            break;
        }
    }
}



void init(void)
{
    glClearColor(0.19607,0.6,0.8,0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0,900.0,0.0,600.0);
}

void timer(int)
{
    glutPostRedisplay();
    glutTimerFunc(1000 / 60, timer, 0);

    //Blue color
    if (rFlag == 1)
    {
        switch (state)
        {
        case 1:
            if (x1_position > -0.9 || y1_position > -0.9)
            {
                x1_position -= 0.002;
                y1_position -= 0.002;
            }
            else
                state = 2;
            break;
        case 2:
            if (x1_position < 0.9 || y1_position < 0.2)
            {
                x1_position += 0.002;
                y1_position += 0.002;
            }
            else
                state = 1;
            break;
        }
    }
    if (rFlag == 2)
    {
        switch (state)
        {
        case 1:
            if (x1_position > -0.9)
            {
                x1_position -= 0.002;
            }
            else
                state = 2;
            break;
        case 2:
            if (x1_position < 1)
            {
                x1_position += 0.002;
            }
            else
                state = 1;
            break;
        }
    }
    if (rFlag == 3)
    {

        switch (state)
        {
        case 1:
            if (y1_position < 1.0)
            {
                y1_position += 0.002;
            }
            else
                state = 2;
            break;
        case 2:
            if (y1_position > -1.0)
            {
                y1_position -= 0.002;
            }
            else
                state = 1;
            break;
        }
    }

}



int main(int argc, char ** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowPosition(50,50);
    glutInitWindowSize(900,600);
    glutCreateWindow("Hot Air Balloon");
    init();

    glutDisplayFunc(display);
    glutIdleFunc (display);
    glutKeyboardFunc (keyboard);
    glutTimerFunc(0, timer, 0);
    glutCreateMenu(AnimateMenu);

    glutAddMenuEntry("MENU", 0);
    glutAddMenuEntry("Vertical & Horizontal Move", 1);
    glutAddMenuEntry("Horizontal Move", 2);
    glutAddMenuEntry("Vertical Move", 3);
    glutAddMenuEntry("Stop", 4);
    glutAddMenuEntry("Quit", 5);

    glutAttachMenu(GLUT_RIGHT_BUTTON);
    glutMainLoop();
}
