// ini untuk animasi bolak balik jalan Truk

#include <math.h>
#include <GL/glut.h>

#include "MasterT.cpp"

//ini menampilkan sekaligus animasi truk mainnya truklah
int tunnel = 1, score = 0, pass = 0;
double a = 0;

void drawStrokeChar(char c,float x,float y,float z)
{
	  glPushMatrix();
          glTranslatef(x, y+8,z);
          glScalef(0.02f,0.02f,z);
          glutStrokeCharacter(GLUT_STROKE_ROMAN , c);
	  glPopMatrix();
}

void PenggerakBody(int value) {
	a += 0.18;//kecepatan Truknya gess
	if(a > 190){// itu value diganti sesuai penambahan panjang jalan mis : xmin diperpanjang 30, jadi 160 + 30 . diAnimatorTruk dibawah value ikut diubah
		a -= 190;
		tunnel = -tunnel;
	}
	if(move == 0) a -= 0.18;
	glutPostRedisplay();
	glutTimerFunc(1, PenggerakBody, 0);
}

void SystemScore(int value){
	int i;
	
	if(pass == 0 && move == 1 && tunnel == -1 && a >= 74 && a <=75.16) {
		pass = 1;
		score += 1;
	}
	if(a > 80) pass = 0;
	glutPostRedisplay();
	glutTimerFunc(1, SystemScore, 0);
}

void gas(){
	move = 1;
}

void rem(){
	move = 0;
}

//ini menampilkan sekaligus animasi truk mainnya truklah
void AnimatorTruk(){
	glPushMatrix();
		PosisiAwalTruk();
		if(tunnel == -1) glTranslatef(-190,0,-10), glRotated(180,0,1,0);
		glTranslated(-a,0,0);
		HeadTruck();
		Box1();
		Box2();
		Sambung();
		Accessoris();
		Roda();
	glPopMatrix();
}
