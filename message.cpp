//// message - assignment 1
//
//#ifdef __apple__
//#  include <gl/glew.h>
//#  include <gl/freeglut.h>
//#  include <opengl/glext.h>
//#else
//#  include <gl/glew.h>
//#  include <gl/freeglut.h>
//#  include <gl/glext.h>
//#pragma comment(lib, "glew32.lib") 
//#endif
//
//// drawing routine.
//void drawscene(void)
//{
//	glclear(gl_color_buffer_bit);
//
//	glcolor3f(0.0, 0.0, 0.0);
//
//	// draw a polygon with specified vertices.
//	glbegin(gl_polygon);
//	glvertex3f(10.0, 75.0, 0.0);
//	glvertex3f(15.0, 75.0, 0.0);
//	glvertex3f(15.0, 95.0, 0.0);
//	glvertex3f(10.0, 95.0, 0.0);
//	glend();
//
//	// t
//	glbegin(gl_polygon);
//	glvertex3f(25.0, 75.0, 0.0);
//	glvertex3f(30.0, 75.0, 0.0);
//	glvertex3f(30.0, 90.0, 0.0);
//	glvertex3f(25.0, 90.0, 0.0);
//	glend();
//
//	glbegin(gl_polygon);
//	glvertex3f(20.0, 90.0, 0.0);
//	glvertex3f(35.0, 90.0, 0.0);
//	glvertex3f(35.0, 95.0, 0.0);
//	glvertex3f(20.0, 95.0, 0.0);
//	glend();
//
//	// s
//	glbegin(gl_polygon);
//	glvertex3f(40.0, 90.0, 0.0);
//	glvertex3f(55.0, 90.0, 0.0);
//	glvertex3f(55.0, 95.0, 0.0);
//	glvertex3f(40.0, 95.0, 0.0);
//	glend();
//
//	glbegin(gl_polygon);
//	glvertex3f(50.0, 80.0, 0.0);
//	glvertex3f(55.0, 80.0, 0.0);
//	glvertex3f(45.0, 90.0, 0.0);
//	glvertex3f(40.0, 90.0, 0.0);
//	glend();
//
//	glbegin(gl_polygon);
//	glvertex3f(40.0, 75.0, 0.0);
//	glvertex3f(55.0, 75.0, 0.0);
//	glvertex3f(55.0, 80.0, 0.0);
//	glvertex3f(40.0, 80.0, 0.0);
//	glend();
//
//	// a
//	glbegin(gl_polygon);
//	glvertex3f(10.0, 45.0, 0.0);
//	glvertex3f(15.0, 45.0, 0.0);
//	glvertex3f(20.0, 65.0, 0.0);
//	glvertex3f(15.0, 65.0, 0.0);
//	glend();
//
//	glbegin(gl_polygon);
//	glvertex3f(20.0, 45.0, 0.0);
//	glvertex3f(25.0, 45.0, 0.0);
//	glvertex3f(20.0, 65.0, 0.0);
//	glvertex3f(15.0, 65.0, 0.0);
//	glend();
//
//	glbegin(gl_polygon);
//	glvertex3f(15.0, 49.0, 0.0);
//	glvertex3f(20.0, 49.0, 0.0);
//	glvertex3f(20.0, 52.0, 0.0);
//	glvertex3f(15.0, 52.0, 0.0);
//	glend();
//
//	// b
//	glbegin(gl_polygon);
//	glvertex3f(30.0, 45.0, 0.0);
//	glvertex3f(35.0, 45.0, 0.0);
//	glvertex3f(35.0, 65.0, 0.0);
//	glvertex3f(30.0, 65.0, 0.0);
//	glend();
//
//	glbegin(gl_polygon);
//	glvertex3f(30.0, 45.0, 0.0);
//	glvertex3f(42.0, 45.0, 0.0);
//	glvertex3f(42.0, 48.0, 0.0);
//	glvertex3f(30.0, 48.0, 0.0);
//	glend();
//
//	glbegin(gl_polygon);
//	glvertex3f(30.0, 53.0, 0.0);
//	glvertex3f(42.0, 53.0, 0.0);
//	glvertex3f(42.0, 58.0, 0.0);
//	glvertex3f(30.0, 58.0, 0.0);
//	glend();
//
//	glbegin(gl_polygon);
//	glvertex3f(30.0, 62.0, 0.0);
//	glvertex3f(42.0, 62.0, 0.0);
//	glvertex3f(42.0, 65.0, 0.0);
//	glvertex3f(30.0, 65.0, 0.0);
//	glend();
//
//	glbegin(gl_polygon);
//	glvertex3f(39.0, 45.0, 0.0);
//	glvertex3f(42.0, 45.0, 0.0);
//	glvertex3f(42.0, 65.0, 0.0);
//	glvertex3f(39.0, 65.0, 0.0);
//	glend();
//
//	// o
//	glbegin(gl_polygon);
//	glvertex3f(50.0, 45.0, 0.0);
//	glvertex3f(60.0, 45.0, 0.0);
//	glvertex3f(60.0, 48.0, 0.0);
//	glvertex3f(50.0, 48.0, 0.0);
//	glend();
//
//	glbegin(gl_polygon);
//	glvertex3f(57.0, 45.0, 0.0);
//	glvertex3f(60.0, 45.0, 0.0);
//	glvertex3f(60.0, 65.0, 0.0);
//	glvertex3f(57.0, 65.0, 0.0);
//	glend();
//
//	glbegin(gl_polygon);
//	glvertex3f(50.0, 62.0, 0.0);
//	glvertex3f(60.0, 62.0, 0.0);
//	glvertex3f(60.0, 65.0, 0.0);
//	glvertex3f(50.0, 65.0, 0.0);
//	glend();
//
//	glbegin(gl_polygon);
//	glvertex3f(50.0, 45.0, 0.0);
//	glvertex3f(53.0, 45.0, 0.0);
//	glvertex3f(53.0, 65.0, 0.0);
//	glvertex3f(50.0, 65.0, 0.0);
//	glend();
//
//	// u
//	glbegin(gl_polygon);
//	glvertex3f(65.0, 45.0, 0.0);
//	glvertex3f(75.0, 45.0, 0.0);
//	glvertex3f(75.0, 48.0, 0.0);
//	glvertex3f(65.0, 48.0, 0.0);
//	glend();
//
//	glbegin(gl_polygon);
//	glvertex3f(72.0, 45.0, 0.0);
//	glvertex3f(75.0, 45.0, 0.0);
//	glvertex3f(75.0, 65.0, 0.0);
//	glvertex3f(72.0, 65.0, 0.0);
//	glend();
//
//	glbegin(gl_polygon);
//	glvertex3f(65.0, 45.0, 0.0);
//	glvertex3f(68.0, 45.0, 0.0);
//	glvertex3f(68.0, 65.0, 0.0);
//	glvertex3f(65.0, 65.0, 0.0);
//	glend();
//
//	// t
//	glbegin(gl_polygon);
//	glvertex3f(85.0, 45.0, 0.0);
//	glvertex3f(90.0, 45.0, 0.0);
//	glvertex3f(90.0, 60.0, 0.0);
//	glvertex3f(85.0, 60.0, 0.0);
//	glend();
//
//	glbegin(gl_polygon);
//	glvertex3f(80.0, 60.0, 0.0);
//	glvertex3f(95.0, 60.0, 0.0);
//	glvertex3f(95.0, 65.0, 0.0);
//	glvertex3f(80.0, 65.0, 0.0);
//	glend();
//
//	glcolor3f(1.0, 0.0, 0.0);
//
//	// t
//	glbegin(gl_polygon);
//	glvertex3f(15.0, 15.0, 0.0);
//	glvertex3f(20.0, 15.0, 0.0);
//	glvertex3f(20.0, 35.0, 0.0);
//	glvertex3f(15.0, 35.0, 0.0);
//	glend();
//
//	glbegin(gl_polygon);
//	glvertex3f(10.0, 30.0, 0.0);
//	glvertex3f(25.0, 30.0, 0.0);
//	glvertex3f(25.0, 35.0, 0.0);
//	glvertex3f(10.0, 35.0, 0.0);
//	glend();
//
//	// i
//	glbegin(gl_polygon);
//	glvertex3f(30.0, 15.0, 0.0);
//	glvertex3f(35.0, 15.0, 0.0);
//	glvertex3f(35.0, 35.0, 0.0);
//	glvertex3f(30.0, 35.0, 0.0);
//	glend();
//
//	// m
//	glbegin(gl_polygon);
//	glvertex3f(40.0, 15.0, 0.0);
//	glvertex3f(45.0, 15.0, 0.0);
//	glvertex3f(50.0, 35.0, 0.0);
//	glvertex3f(45.0, 35.0, 0.0);
//	glend();
//
//	glbegin(gl_polygon);
//	glvertex3f(50.0, 15.0, 0.0);
//	glvertex3f(55.0, 15.0, 0.0);
//	glvertex3f(50.0, 35.0, 0.0);
//	glvertex3f(45.0, 35.0, 0.0);
//	glend();
//
//	glbegin(gl_polygon);
//	glvertex3f(50.0, 15.0, 0.0);
//	glvertex3f(55.0, 15.0, 0.0);
//	glvertex3f(60.0, 35.0, 0.0);
//	glvertex3f(55.0, 35.0, 0.0);
//	glend();
//
//	glbegin(gl_polygon);
//	glvertex3f(60.0, 15.0, 0.0);
//	glvertex3f(65.0, 15.0, 0.0);
//	glvertex3f(60.0, 35.0, 0.0);
//	glvertex3f(55.0, 35.0, 0.0);
//	glend();
//
//	// e
//	glbegin(gl_polygon);
//	glvertex3f(70.0, 15.0, 0.0);
//	glvertex3f(75.0, 15.0, 0.0);
//	glvertex3f(75.0, 35.0, 0.0);
//	glvertex3f(70.0, 35.0, 0.0);
//	glend();
//
//	glbegin(gl_polygon);
//	glvertex3f(70.0, 15.0, 0.0);
//	glvertex3f(82.0, 15.0, 0.0);
//	glvertex3f(82.0, 18.0, 0.0);
//	glvertex3f(70.0, 18.0, 0.0);
//	glend();
//
//	glbegin(gl_polygon);
//	glvertex3f(70.0, 23.0, 0.0);
//	glvertex3f(82.0, 23.0, 0.0);
//	glvertex3f(82.0, 28.0, 0.0);
//	glvertex3f(70.0, 28.0, 0.0);
//	glend();
//
//	glbegin(gl_polygon);
//	glvertex3f(70.0, 32.0, 0.0);
//	glvertex3f(82.0, 32.0, 0.0);
//	glvertex3f(82.0, 35.0, 0.0);
//	glvertex3f(70.0, 35.0, 0.0);
//	glend();
//
//	// !
//
//	glbegin(gl_polygon);
//	glvertex3f(90.0, 15.0, 0.0);
//	glvertex3f(95.0, 15.0, 0.0);
//	glvertex3f(95.0, 20.0, 0.0);
//	glvertex3f(90.0, 20.0, 0.0);
//	glend();
//
//	glbegin(gl_polygon);
//	glvertex3f(90.0, 23.0, 0.0);
//	glvertex3f(95.0, 23.0, 0.0);
//	glvertex3f(95.0, 35.0, 0.0);
//	glvertex3f(90.0, 35.0, 0.0);
//	glend();
//
//	glflush();
//}
//
//// initialization routine.
//void setup(void)
//{
//	glclearcolor(1.0, 1.0, 1.0, 0.0);
//}
//
//// opengl window reshape routine.
//void resize(int w, int h)
//{
//	glviewport(0, 0, w, h);
//	glmatrixmode(gl_projection);
//	glloadidentity();
//	glortho(0.0, 100.0, 0.0, 100.0, -1.0, 1.0);
//	glmatrixmode(gl_modelview);
//	glloadidentity();
//}
//
//// keyboard input processing routine.
//void keyinput(unsigned char key, int x, int y)
//{
//	switch (key)
//	{
//	case 27:
//		exit(0);
//		break;
//	default:
//		break;
//	}
//}
//
//// main routine.
//int main(int argc, char **argv)
//{
//	glutinit(&argc, argv);
//
//	glutinitcontextversion(4, 0);
//	glutinitcontextprofile(glut_compatibility_profile);
//
//	glutinitdisplaymode(glut_single | glut_rgba);
//	glutinitwindowsize(500, 500);
//	glutinitwindowposition(100, 100);
//	glutcreatewindow("message.cpp");
//	glutdisplayfunc(drawscene);
//	glutreshapefunc(resize);
//	glutkeyboardfunc(keyinput);
//
//	glewexperimental = gl_true;
//	glewinit();
//
//	setup();
//
//	glutmainloop();
//}