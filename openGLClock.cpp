/**
OpenGL clock
@jshiraef
*/

#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS

#include <cmath>

#include <gl/glut.h>
#include <gl/gl.h>
#include <math.h>
#include <time.h>
#include <sys/timeb.h>




const float clockR = 80.0f, clockVol = 100.0f;

const float angle1min = M_PI / 30.0f;

const float minStart = 0.9f, minEnd = 1.0f;

const float stepStart = 0.8f, stepEnd = 1.0f;

float hourAngle = 0, minuteAngle = 0, secondAngle = 0;



void newLine(float rStart, float rEnd, float angle)
{
	float c = cos(angle), s = sin(angle);
	glVertex2f(clockR*rStart*c, clockR*rStart*s);
	glVertex2f(clockR*rEnd*c, clockR*rEnd*s);
}



void drawScene(void)
{

	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.0f, 0.0f, 0.0f);
	glLineWidth(2.0f);
	glEnable(GL_LINE_SMOOTH);
	glEnable(GL_POINT_SMOOTH);
	glEnable(GL_POLYGON_SMOOTH);

	glBegin(GL_LINES);

	int i;

	for (i = 0; i<60; i++){
		if (i % 5){ // normal minute
			if (i % 5 == 1)
				glColor3f(1.0f, 1.0f, 1.0f);
			newLine(minStart, minEnd, i*angle1min);
		}
		else{
			glColor3f(1.0f, 0.0f, 0.0f);
			newLine(stepStart, stepEnd, i*angle1min);
		}
	}
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINES);
	newLine(0.0f, 0.5f, -hourAngle + M_PI / 2);
	newLine(0.0f, 0.8f, -minuteAngle + M_PI / 2);
	glEnd();

	glLineWidth(1.0f);
	glColor3f(0.0f, 0.0f, 1.0f);
	glBegin(GL_LINES);
	newLine(0.0f, 0.8f, -secondAngle + M_PI / 2);
	glEnd();

	glutSwapBuffers();
}

void SetupRC(void)
{
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}


void ChangeSize(GLsizei w, GLsizei h){
	GLfloat aspectRatio;

	// Prevent a divide by zero
	if (h == 0)
		h = 1;

	// Set Viewport to window dimensions
	glViewport(0, 0, w, h);

	// Reset coordinate system
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	// Establish clipping volume (left, right, bottom, top, near, far)
	aspectRatio = (GLfloat)w / (GLfloat)h;
	if (w <= h)
		glOrtho(-clockVol, clockVol, -clockVol / aspectRatio, clockVol / aspectRatio, 1.0, -1.0);
	else
		glOrtho(-clockVol * aspectRatio, clockVol * aspectRatio, -clockVol, clockVol, 1.0, -1.0);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}


void update(int value)
{
	struct timeb tb;
	time_t tim = time(0);
	struct tm* timeinfo;
	timeinfo = localtime(&tim);
	ftime(&tb);

	secondAngle = (float)(timeinfo->tm_sec + (float)tb.millitm / 1000.0f) / 30.0f * M_PI;
	minuteAngle = (float)(timeinfo->tm_min) / 30.0f * M_PI + secondAngle / 60.0f;
	hourAngle = (float)(timeinfo->tm_hour > 12 ? timeinfo->tm_hour - 12 : timeinfo->tm_hour) / 6.0f * M_PI +
		minuteAngle / 12.0f;

	glutPostRedisplay();
	glutTimerFunc(100, update, 0);
}


int main(int argc, char* argv[]){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutCreateWindow("openglClock");

	glutDisplayFunc(drawScene);
	glutReshapeFunc(ChangeSize);
	glutTimerFunc(33, update, 1);

	SetupRC();

	glutMainLoop();

	return 0;
}