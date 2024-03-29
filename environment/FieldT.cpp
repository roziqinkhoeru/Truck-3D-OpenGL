//ini coding buat lingkungan medan Truk

#include <GL/glut.h>
const float xmin = -80, xmax = 50;
const float ymin = -50, ymax = 50;
const float zmin = -50, zmax = 50;	
const float ydec = -0.25;

void Grid(){
	//aspal
	glBegin(GL_POLYGON);
		glColor3f(0.2,0.2,0.2);
		glVertex3f(xmin, ydec , 20);
		glVertex3f(xmax, ydec , 20);
		glVertex3f(xmax, ydec , -20);
		glVertex3f(xmin, ydec , -20);
	glEnd();
	
	//garis tengah aspal
	//kiri
	glBegin(GL_POLYGON);
		glColor3f(1,1,1);
		glVertex3f(xmin, ydec+0.01 , 0.1);
		glVertex3f(xmax, ydec+0.01 , 0.1);
		glVertex3f(xmax, ydec+0.01 , 0.6);
		glVertex3f(xmin, ydec+0.01 , 0.6);
	glEnd();
	//kanan	
	glBegin(GL_POLYGON);
		glColor3f(1,1,1);
		glVertex3f(xmin, ydec+0.01 , -0.1);
		glVertex3f(xmax, ydec+0.01 , -0.1);
		glVertex3f(xmax, ydec+0.01 , -0.6);
		glVertex3f(xmin, ydec+0.01 , -0.6);
	glEnd();
	
	//garis tepi jalan
	//kiri
	glBegin(GL_POLYGON);
		glColor3f(1,1,1);
		glVertex3f(xmin, ydec+0.01 , 15);
		glVertex3f(xmax, ydec+0.01 , 15);
		glVertex3f(xmax, ydec+0.01 , 16);
		glVertex3f(xmin, ydec+0.01 , 16);
	glEnd();
	//kanan
		glBegin(GL_POLYGON);
		glColor3f(1,1,1);
		glVertex3f(xmin, ydec+0.01 , -15);
		glVertex3f(xmax, ydec+0.01 , -15);
		glVertex3f(xmax, ydec+0.01 , -16);
		glVertex3f(xmin, ydec+0.01 , -16);
	glEnd();

//	langit	
//belakang
	glBegin(GL_POLYGON);
		glColor3ub(25, 189, 255);
		glVertex3f(xmin, ydec , zmax);
		glVertex3f(xmax, ydec , zmax);
		glVertex3f(xmax, ymax , zmax);
		glVertex3f(xmin, ymax , zmax);
	glEnd();
//	kanan
	glBegin(GL_POLYGON);
		glColor3ub(25, 189, 255);
		glVertex3f(xmax, ydec , zmax);
		glVertex3f(xmax, ydec , zmin);
		glVertex3f(xmax, ymax , zmin);
		glVertex3f(xmax, ymax , zmax);
	glEnd();	
//	kiri
	glBegin(GL_POLYGON);
		glColor3ub(25, 189, 255);
		glVertex3f(xmin, ydec , zmax);
		glVertex3f(xmin, ydec , zmin);
		glVertex3f(xmin, ymax , zmin);
		glVertex3f(xmin, ymax , zmax);
	glEnd();
//	depan
	glBegin(GL_POLYGON);
		glColor3ub(25, 189, 255);
		glVertex3f(xmin, ydec , zmin);
		glVertex3f(xmax, ydec , zmin);
		glVertex3f(xmax, ymax , zmin);
		glVertex3f(xmin, ymax , zmin);
	glEnd();
}
