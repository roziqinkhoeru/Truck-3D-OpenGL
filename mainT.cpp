//Name : main.cpp
//author :	Agani Satria (24060119130134)
//			Daffa Faadihilah Irza P (24060119140139)
//			Ega Harizky Duansef (24060119120040)
//			Khoeru Roziqin (24060119120031)
//Date : 2021/06/02


//library
#include <math.h>
#include <GL/glut.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "FieldT.cpp"
#include "ParckingT.cpp"
#include "AnimationT.cpp"

float angle=0.0, deltaAngle = 0.0, ratio;
float x=0.0f,y=1.75f,z=15.0f; // posisi awal kamera
float lx=0.0f,ly=0.0f,lz=-1.0f;
int deltaMove = 0,h,w;
int deltaFly = 0;
int bitmapHeight=12;
float tX = 0, tY = 0, tZ = 0;
float rotX = 0, rotY = 0, rotZ = 0;

void Reshape(int w1, int h1) {
// Fungsi reshape
	if(h1 == 0) h1 = 1;
	w = w1;
	h = h1;
	ratio = 1.0f * w / h;
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glViewport(0, 0, w, h);
	gluPerspective(45,ratio,0.1,1000);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(
		x, y, z,
		x + lx,y + ly,z + lz,
		0.0f,1.0f,0.0f);
}
void orientMe(float ang) {
// Fungsi ini untuk memutar arah kamera (tengok kiri/kanan)
	lx = sin(ang);
	lz = -cos(ang);
	glLoadIdentity();
	gluLookAt(x, y, z,
	x + lx,y + ly,z + lz,
	0.0f,1.0f,0.0f);
}
void moveMeFlat(int i) {
// Fungsi ini untuk maju mundur kamera
	x = x + i*(lx)*0.01;
	z = z + i*(lz)*0.01;
	glLoadIdentity();
	gluLookAt(x, y, z,
	x + lx,y + ly,z + lz,
	0.0f,1.0f,0.0f);
}
void flyMe(int f) {
// Fungsi ini untuk terbang ke atas bawah kamera
	y = y + f*0.01;
	glLoadIdentity();
	gluLookAt(x, y, z,
	x + lx,y + ly,z + lz,
	0.0f,1.0f,0.0f);
}

static void key(unsigned char key, int x, int y){
 	float frac = 0.3;
 	float rotFrac = 0.2;
 
	switch (key){
  		case 'w':
    		tX -= frac;
   			break;
  		case 's':   
   			tX += frac;
			break;
		case 'a':
			tZ += 0.1;
			break;
		case 'd':
			tZ -= 0.1;
			break;
		case 'q':
   			tX -= frac;
   			tZ += frac;
   			break;
		case 'z':
   			tX += frac;
   			tZ += frac;
   			break;
   		case 'e':
   			tX -= frac;
   			tZ -= frac;
   			break;
   		case 'c':
   			tX += frac;
   			tZ -= frac;
   			break;
		case 'p':
			exit(0);
			break;
	}
}

void tombol(){
	glTranslatef(tX, tY, tZ);
	glRotatef(rotX, 1, 0, 0);
	glRotatef(rotY, 0, 1, 0);
	glRotatef(rotX, 0, 0, 1);
}

void display() {
// Kalau move dan angle tidak nol, gerakkan kamera...
	if (deltaMove)
		moveMeFlat(deltaMove);
	if(deltaFly)
		flyMe(deltaFly);
	if (deltaAngle) {
		angle += deltaAngle;
		orientMe(angle);
	}
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	glPushMatrix();
		tombol();
		AnimatorTruk();
	glPopMatrix();
	TrukParkir();
	Grid();
	glutSwapBuffers();
	glFlush();
}
void pressKey(int key, int x, int y) {
// Fungsi ini akan dijalankan saat tombol keyboard ditekan dan belum dilepas
// Selama tombol ditekan, variabel angle dan move diubah => kamera bergerak
	switch (key) {
		case GLUT_KEY_LEFT : 
			deltaAngle = -0.005f;
		break;
		case GLUT_KEY_RIGHT : 
			deltaAngle = 0.005f;
		break;
		case GLUT_KEY_UP : 
			deltaMove = 5;
		break;
		case GLUT_KEY_DOWN : 
			deltaMove = -5;
		break;
		case GLUT_KEY_PAGE_UP :
			deltaFly = 1;
		break;
		case GLUT_KEY_PAGE_DOWN :
			deltaFly = -1;
		break;
	}
}

void releaseKey(int key, int x, int y) {
// Fungsi ini akan dijalankan saat tekanan tombol keyboard dilepas
// Saat tombol dilepas, variabel angle dan move diset nol => kamera berhenti
	switch (key) {
		case GLUT_KEY_LEFT :
			if (deltaAngle < 0.0f)
				deltaAngle = 0.0f;
			break;
		case GLUT_KEY_RIGHT : 
			if (deltaAngle > 0.0f)
				deltaAngle = 0.0f;
			break;
		case GLUT_KEY_UP : 
			if (deltaMove > 0)
				deltaMove = 0;
			break;
		case GLUT_KEY_DOWN : 
			if (deltaMove < 0)
				deltaMove = 0;
			break;
		case GLUT_KEY_PAGE_UP :
			if(deltaFly > 0)
			   deltaFly = 0;
			break;
		case GLUT_KEY_PAGE_DOWN :
			if(deltaFly < 0)
			   deltaFly = 0;
			break;
	}
}
// Variable untuk pencahayaan
const GLfloat light_ambient[] = { 0.5f, 0.5f, 0.5f, 0.0f };
const GLfloat light_diffuse[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 0.0f, 20.0f, 10.0f, 1.0f };
const GLfloat mat_ambient[] = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[] = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };

void lighting() {
// Fungsi mengaktifkan pencahayaan
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LESS);
	glEnable(GL_LIGHT0);
	glEnable(GL_NORMALIZE);
	glEnable(GL_COLOR_MATERIAL);
	glEnable(GL_LIGHTING);
	glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
	glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
	glLightfv(GL_LIGHT0, GL_POSITION, light_position);
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
}

void init(void){
	glEnable (GL_DEPTH_TEST);
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
}

int main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(640,480);
	glutCreateWindow("3D Truk Gandeng Hebat");
	glutIgnoreKeyRepeat(1); // Mengabaikan key repeat (saat tombol keyboard dipencet terus)
	glutSpecialFunc(pressKey);
	glutSpecialUpFunc(releaseKey);
	glutKeyboardFunc(key);
	glutDisplayFunc(display);
	
	glutIdleFunc(display); // Fungsi display-nya dipanggil terus-menerus
	
	glutReshapeFunc(Reshape);
	lighting();
	init();
	glutMainLoop();
	return(0);
}

