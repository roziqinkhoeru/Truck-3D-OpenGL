//ini coding model Truk Parkir

#include <math.h>
#include <GL/glut.h>

//bisa search 'kepala','box1','box2','penyambung','roda','accessoris' panjang kaleeee codingnya 


void PosisiParkirMT(){
	int x = -20, y = 0, z = -16;//bisa diubah sesuai lokasi yang dipengenin
	
	glTranslatef(x,y,z);
	glRotated(-180,0,1,0);//value angle hadap belakang -180, depan 0
}

//warna Truk
void CatTrukParkirMT(){
	float R = 202, G = 162, B = 0;//ubah nilainya buat warnai
	
	glColor3ub(R,G,B);
}

void MiniTrukParkir(){
glPushMatrix();
PosisiParkirMT();//implementasi mengatur tempat parkirnya
//membuat bagian kepala truk
//kepala
//penggerak
	GLUquadricObj *quadratic;
	quadratic = gluNewQuadric();
//	depan
	//crown
	glPushMatrix();
	glTranslatef(-17,4.5,0);
	glTranslated(0,0,0);
	glRotated(-90, 0, 1, 0);
	glRotated(-36, 1, 0, 0);
	glBegin(GL_QUADS);
		CatTrukParkirMT();//warna
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(4.0f,0.0f,0.0f);
		glVertex3f(4.0f,0.85f,0.0f);
		glVertex3f(0.0f,0.85f,0.0f);
	glEnd();
	glPopMatrix();
	//atas
	glPushMatrix();
	glTranslated(0,0,0);
	glTranslatef(-17,4,0);
	glRotated(-90, 0, 1, 0);
	glBegin(GL_QUADS);
		glColor3ub(33, 33, 33);//abu
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(4.0f,0.0f,0.0f);
		glVertex3f(4.0f,0.5f,0.0f);
		glVertex3f(0.0f,0.5f,0.0f);
	glEnd();
	glPopMatrix();
	//tengah
	glPushMatrix();
	glTranslated(0,0,0);
	glTranslatef(-17,1.5,0);
	glRotated(-90, 0, 1, 0);
	glBegin(GL_QUADS);
		CatTrukParkirMT();//warna
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(4.0f,0.0f,0.0f);
		glVertex3f(4.0f,1.3f,0.0f);
		glVertex3f(0.0f,1.3f,0.0f);
	glEnd();
	glPopMatrix();
	//bawah
	glPushMatrix();
	glTranslated(0,0,0);
	glTranslatef(-17.1,0,-0.1);
	glRotated(-90, 0, 1, 0);
	glBegin(GL_QUADS);
		glColor3ub(33, 33, 33);//abu
		glVertex3f(0.0f,0.2f,0.0f);
		glVertex3f(4.2f,0.2f,0.0f);
		glVertex3f(4.2f,0.8f,0.0f);
		glVertex3f(0.0f,0.8f,0.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslated(0,0,0);
	glTranslatef(-17.1,0.8,-0.1);
	glRotated(-90, 0, 1, 0);
	glBegin(GL_QUADS);
		glColor3ub(211, 181, 32);//biru--
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(4.2f,0.0f,0.0f);
		glVertex3f(4.2f,0.4f,0.0f);
		glVertex3f(0.0f,0.4f,0.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslated(0,0,0);
	glTranslatef(-17.1,1.2,-0.1);
	glRotated(-90, 0, 1, 0);
	glBegin(GL_QUADS);
		glColor3ub(33, 33, 33);//abu
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(4.2f,0.0f,0.0f);
		glVertex3f(4.2f,0.3f,0.0f);
		glVertex3f(0.0f,0.3f,0.0f);
	glEnd();
	glPopMatrix();
	
		glPushMatrix();
	glTranslated(0,0,0);
		glTranslatef(-17.1,1.5,-0.1);
		glRotated(-90, 0, 1, 0);
		glRotated(-90, 1, 0, 0);
		glBegin(GL_QUADS);
			glColor3ub(33, 33, 33);//abu
			glVertex3f(0.0f,0.0f,0.0f);
			glVertex3f(4.2f,0.0f,0.0f);
			glVertex3f(4.2f,0.1f,0.0f);
			glVertex3f(0.0f,0.1f,0.0f);
		glEnd();
		glPopMatrix();
		
	//kaca
	glPushMatrix();
	glTranslated(0,0,0);
	glTranslatef(-17,2.8,0);
	glRotated(-90, 0, 1, 0);
	glBegin(GL_QUADS);
		glColor3ub(178, 178, 178);//abu--
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(4.0f,0.0f,0.0f);
		glVertex3f(4.0f,1.2f,0.0f);
		glVertex3f(0.0f,1.2f,0.0f);
	glEnd();
	glPopMatrix();
	
	//accs
	glPushMatrix();
	glTranslated(0,0,0);
	glTranslatef(-17.11,0,0);
	glRotated(-90, 0, 1, 0);
	glBegin(GL_QUADS);
		glColor3ub(89, 89, 89);//abu--
		glVertex3f(0.0f,2.8f,0.0f);
		glVertex3f(0.7f,2.5f,0.0f);
		glVertex3f(3.3f,2.5f,0.0f);
		glVertex3f(4.0f,2.8f,0.0f);
	glEnd();
	glBegin(GL_QUADS);
	glTranslated(0,0,0);
		glColor3ub(89, 89, 89);//abu--
		glVertex3f(0.7f,2.5f,0.0f);
		glVertex3f(1.0f,2.0f,0.0f);
		glVertex3f(3.0f,2.0f,0.0f);
		glVertex3f(3.3f,2.5f,0.0f);
	glEnd();
	glBegin(GL_QUADS);
	glTranslated(0,0,0);
		glColor3ub(89, 89, 89);//abu--
		glVertex3f(1.0f,0.5f,0.0f);
		glVertex3f(3.0f,0.5f,0.0f);
		glVertex3f(3.0f,2.0f,0.0f);
		glVertex3f(1.0f,2.0f,0.0f);
	glEnd();
	glPopMatrix();
		glPushMatrix();
	glTranslated(0,0,0);
		glTranslatef(-17.11,2.8,0);
		glRotated(-90, 0, 1, 0);
		glRotated(-90, 1, 0, 0);
			glBegin(GL_QUADS);
			glColor3ub(89, 89, 89);//abu--
			glVertex3f(0.0f,0.0f,0.0f);
			glVertex3f(4.0f,0.0f,0.0f);
			glVertex3f(4.0f,0.11f,0.0f);
			glVertex3f(0.0f,0.11f,0.0f);
		glEnd();
		glPopMatrix();
		
		glPushMatrix();
	glTranslated(0,0,0);
		glTranslatef(-17.11,0.5,3);
			glBegin(GL_QUADS);
			glColor3ub(89, 89, 89);//abu--
			glVertex3f(0.0f,0.0f,0.0f);
			glVertex3f(0.11f,0.0f,0.0f);
			glVertex3f(0.11f,1.5f,0.0f);
			glVertex3f(0.0f,1.5f,0.0f);
		glEnd();
		glPopMatrix();
		
		glPushMatrix();
	glTranslated(0,0,0);
		glRotated(180, 0, 1, 0);
		glTranslatef(17,0.5,-1);
			glBegin(GL_QUADS);
			glColor3ub(89, 89, 89);//abu--
			glVertex3f(0.0f,0.0f,0.0f);
			glVertex3f(0.11f,0.0f,0.0f);
			glVertex3f(0.11f,1.5f,0.0f);
			glVertex3f(0.0f,1.5f,0.0f);
		glEnd();
		glPopMatrix();
		
		glPushMatrix();
	glTranslated(0,0,0);
		glTranslatef(-17.11,2,3);
		glRotated(30, 1, 0, 0);
			glBegin(GL_QUADS);
			glColor3ub(89, 89, 89);//abu--
			glVertex3f(0.0f,0.0f,0.0f);
			glVertex3f(0.11f,0.0f,0.0f);
			glVertex3f(0.11f,0.6f,0.0f);
			glVertex3f(0.0f,0.6f,0.0f);
		glEnd();
		glPopMatrix();
		
		glPushMatrix();
	glTranslated(0,0,0);
		glRotated(180, 0, 1, 0);
		glTranslatef(17,2,-1);
		glRotated(30, 1, 0, 0);
			glBegin(GL_QUADS);
			glColor3ub(89, 89, 89);//abu--
			glVertex3f(0.0f,0.0f,0.0f);
			glVertex3f(0.11f,0.0f,0.0f);
			glVertex3f(0.11f,0.6f,0.0f);
			glVertex3f(0.0f,0.6f,0.0f);
		glEnd();
		glPopMatrix();
		
		glPushMatrix();
	glTranslated(0,0,0);
		glTranslatef(-17.11,2.5,3.3);
		glRotated(66.8, 1, 0, 0);
			glBegin(GL_QUADS);
			glColor3ub(89, 89, 89);//abu--
			glVertex3f(0.0f,0.0f,0.0f);
			glVertex3f(0.11f,0.0f,0.0f);
			glVertex3f(0.11f,0.756f,0.0f);
			glVertex3f(0.0f,0.756f,0.0f);
		glEnd();
		glPopMatrix();
		
		glPushMatrix();
	glTranslated(0,0,0);
		glRotated(180, 0, 1, 0);
		glTranslatef(17,2.5,-0.7);
		glRotated(66.8, 1, 0, 0);
			glBegin(GL_QUADS);
			glColor3ub(89, 89, 89);//abu--
			glVertex3f(0.0f,0.0f,0.0f);
			glVertex3f(0.11f,0.0f,0.0f);
			glVertex3f(0.11f,0.756f,0.0f);
			glVertex3f(0.0f,0.756f,0.0f);
		glEnd();
		glPopMatrix();
		
		glPushMatrix();
	glTranslated(0,0,0);
		glTranslatef(-17,0.5,1);
		glRotated(-90, 0, 1, 0);
		glRotated(90, 1, 0, 0);
			glBegin(GL_QUADS);
			glColor3ub(89, 89, 89);//abu--
			glVertex3f(0.0f,0.0f,0.0f);
			glVertex3f(0.2f,0.0f,0.0f);
			glVertex3f(0.2f,0.11f,0.0f);
			glVertex3f(0.0f,0.11f,0.0f);
		glEnd();
		glPopMatrix();
//	samping kanan
	//crown
	glPushMatrix();
	glTranslated(0,0,0);
	glRotated(180, 0, 1, 0);
	glTranslatef(14,4.5,0);
	glBegin(GL_QUADS);
		CatTrukParkirMT();//warna
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(3.0f,0.0f,0.0f);
		glVertex3f(2.5f,0.7f,0.0f);
		glVertex3f(0.0f,1.2f,0.0f);
	glEnd();
	glPopMatrix();
	//atas
	glPushMatrix();
	glTranslated(0,0,0);
	glRotated(180, 0, 1, 0);
	glTranslatef(14,4,0);
	glBegin(GL_QUADS);
		glColor3ub(33, 33, 33);//abu
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(3.0f,0.0f,0.0f);
		glVertex3f(3.0f,0.5f,0.0f);
		glVertex3f(0.0f,0.5f,0.0f);
	glEnd();
	glPopMatrix();
	//tengah1
	glPushMatrix();
	glTranslated(0,0,0);
	glRotated(180, 0, 1, 0);
	glTranslatef(14.5,1.5,0);
	glBegin(GL_QUADS);
		CatTrukParkirMT();//warna
		glVertex3f(0.0f,0.0f, 0.0f);
		glVertex3f(2.5f, 0.0f, 0.0f);
		glVertex3f(2.5f, 1.3f, 0.0f);
		glVertex3f(0.0f,1.7f, 0.0f);
	glEnd();
	glPopMatrix();
	//tengah2
	glPushMatrix();
	glTranslated(0,0,0);
	glRotated(180, 0, 1, 0);
	glTranslatef(14,1.5,0);
	glBegin(GL_QUADS);
		CatTrukParkirMT();//warna
		glVertex3f(0.0f, 0.0f, 0.0f);
		glVertex3f(0.5f, 0.0f, 0.0f);
		glVertex3f(0.5f, 2.5f, 0.0f);
		glVertex3f(0.0f, 2.5f, 0.0f);
	glEnd();
	glPopMatrix();
	//bawah
	glPushMatrix();
	glTranslated(0,0,0);
	glRotated(180, 0, 1, 0);
	glTranslatef(14,0,0.1);
	glBegin(GL_POLYGON);
		glColor3ub(33, 33, 33);//abu
		glVertex3f(0.0f, 0.2f, 0.0f);
		glVertex3f(3.1f, 0.2f, 0.0f);
		glVertex3f(3.1f, 1.5f, 0.0f);
		glVertex3f(2.1f, 1.5f, 0.0f);
		glVertex3f(1.8f, 1.8f, 0.0f);
		glVertex3f(0.0f, 1.8f, 0.0f);
	glEnd();
	glPopMatrix();
		glPushMatrix();
	glTranslated(0,0,0);
		glTranslatef(-14,0,0);
		glRotated(90, 0, 1, 0);
		glBegin(GL_QUADS);
			glColor3ub(33, 33, 33);//abu
			glVertex3f(0.0f,0.2f,0.0f);
			glVertex3f(0.1f,0.2f,0.0f);
			glVertex3f(0.1f,1.8f,0.0f);
			glVertex3f(0.0f,1.8f,0.0f);
		glEnd();
		glPopMatrix();
		
		glPushMatrix();
	glTranslated(0,0,0);
		glTranslatef(-15.8,1.8,0);
		glRotated(-90, 1, 0, 0);
		glBegin(GL_QUADS);
			glColor3ub(33, 33, 33);//abu
			glVertex3f(0.0f,0.0f,0.0f);
			glVertex3f(1.8f,0.0f,0.0f);
			glVertex3f(1.8f,0.1f,0.0f);
			glVertex3f(0.0f,0.1f,0.0f);
		glEnd();
		glPopMatrix();
		
		glPushMatrix();
	glTranslated(0,0,0);
		glTranslatef(-17,1.5,0);
		glRotated(-90, 1, 0, 0);
		glBegin(GL_QUADS);
			glColor3ub(33, 33, 33);//abu
			glVertex3f(0.0f,0.0f,0.0f);
			glVertex3f(0.9f,0.0f,0.0f);
			glVertex3f(0.9f,0.1f,0.0f);
			glVertex3f(0.0f,0.1f,0.0f);
		glEnd();
		glPopMatrix();
		
		glPushMatrix();
	glTranslated(0,0,0);
		glTranslatef(-16.1,1.5,0);
		glRotated(45, 0, 0, 1);
		glRotated(-90, 1, 0, 0);		
		glBegin(GL_QUADS);
			glColor3ub(33, 33, 33);//abu
			glVertex3f(0.0f,0.0f,0.0f);
			glVertex3f(0.42f,0.0f,0.0f);
			glVertex3f(0.42f,0.1f,0.0f);
			glVertex3f(0.0f,0.1f,0.0f);
		glEnd();
		glPopMatrix();
	//kaca
	glPushMatrix();
	glTranslated(0,0,0);
	glRotated(180, 0, 1, 0);
	glTranslatef(14.5,2.8,0);		
	glBegin(GL_QUADS);
		glColor3ub(178, 178, 178);//abu--
		glVertex3f(0.0f,0.4f,0.0f);
		glVertex3f(2.5f,0.0f,0.0f);
		glVertex3f(2.5f,1.2f,0.0f);
		glVertex3f(0.0f,1.2f,0.0f);
	glEnd();
	glPopMatrix();
	
//	samping kiri
	//crown
	glPushMatrix();
	glTranslated(0,0,0);
	glTranslatef(-17,4.5,4);
	glBegin(GL_QUADS);
		CatTrukParkirMT();//warna
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(3.0f,0.0f,0.0f);
		glVertex3f(3.0f,1.2f,0.0f);
		glVertex3f(0.5f,0.7f,0.0f);
	glEnd();
	glPopMatrix();
	//atas
	glPushMatrix();
	glTranslated(0,0,0);
	glTranslatef(-17,4,4);
	glBegin(GL_QUADS);
		glColor3ub(33, 33, 33);//abu
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(3.0f,0.0f,0.0f);
		glVertex3f(3.0f,0.5f,0.0f);
		glVertex3f(0.0f,0.5f,0.0f);
	glEnd();
	glPopMatrix();
	//tengah1
	glPushMatrix();
	glTranslated(0,0,0);
	glTranslatef(-17,1.5,4);
	glBegin(GL_POLYGON);
		CatTrukParkirMT();//warna
		glVertex3f(0.0f,0.0f, 0.0f);
		glVertex3f(2.5f, 0.0f, 0.0f);
		glVertex3f(2.5f, 1.7f, 0.0f);
		glVertex3f(0.0f,1.3f, 0.0f);
	glEnd();
	glPopMatrix();
	//tengah2
	glPushMatrix();
	glTranslated(0,0,0);
	glTranslatef(-14.5,1.5,4);
	glBegin(GL_POLYGON);
		CatTrukParkirMT();//warna
		glVertex3f(0.0f, 0.0f, 0.0f);
		glVertex3f(0.5f, 0.0f, 0.0f);
		glVertex3f(0.5f, 2.5f, 0.0f);
		glVertex3f(0.0f, 2.5f, 0.0f);
	glEnd();
	glPopMatrix();
	//bawah
	glPushMatrix();
	glTranslated(0,0,0);
	glTranslatef(-17.1,0,4.1);
	glBegin(GL_POLYGON);
		glColor3ub(33, 33, 33);//abu
		glVertex3f(0.0f, 0.2f, 0.0f);
		glVertex3f(3.1f, 0.2f, 0.0f);
		glVertex3f(3.1f, 1.8f, 0.0f);
		glVertex3f(1.3f, 1.8f, 0.0f);
		glVertex3f(1.0f, 1.5f, 0.0f);
		glVertex3f(0.0f, 1.5f, 0.0f);
	glEnd();
	glPopMatrix();
		glPushMatrix();
	glTranslated(0,0,0);
		glTranslatef(-14,0,4.1);
		glRotated(90, 0, 1, 0);
		glBegin(GL_QUADS);
			glColor3ub(33, 33, 33);//abu
			glVertex3f(0.0f,0.2f,0.0f);
			glVertex3f(0.1f,0.2f,0.0f);
			glVertex3f(0.1f,1.8f,0.0f);
			glVertex3f(0.0f,1.8f,0.0f);
		glEnd();
		glPopMatrix();
		
		glPushMatrix();
	glTranslated(0,0,0);
		glTranslatef(-15.8,1.8,4.1);
		glRotated(-90, 1, 0, 0);
		glBegin(GL_QUADS);
			glColor3ub(33, 33, 33);//abu
			glVertex3f(0.0f,0.0f,0.0f);
			glVertex3f(1.8f,0.0f,0.0f);
			glVertex3f(1.8f,0.1f,0.0f);
			glVertex3f(0.0f,0.1f,0.0f);
		glEnd();
		glPopMatrix();
		
		glPushMatrix();
	glTranslated(0,0,0);
		glTranslatef(-17,1.5,4.1);
		glRotated(-90, 1, 0, 0);
		glBegin(GL_QUADS);
			glColor3ub(33, 33, 33);//abu
			glVertex3f(0.0f,0.0f,0.0f);
			glVertex3f(0.9f,0.0f,0.0f);
			glVertex3f(0.9f,0.1f,0.0f);
			glVertex3f(0.0f,0.1f,0.0f);
		glEnd();
		glPopMatrix();
		
		glPushMatrix();
	glTranslated(0,0,0);
		glTranslatef(-16.1,1.5,4.1);
		glRotated(45, 0, 0, 1);
		glRotated(-90, 1, 0, 0);		
		glBegin(GL_QUADS);
			glColor3ub(33, 33, 33);//abu
			glVertex3f(0.0f,0.0f,0.0f);
			glVertex3f(0.42f,0.0f,0.0f);
			glVertex3f(0.42f,0.1f,0.0f);
			glVertex3f(0.0f,0.1f,0.0f);
		glEnd();
		glPopMatrix();
	//kaca
	glPushMatrix();
	glTranslated(0,0,0);
	glTranslatef(-17,2.8,4);		
	glBegin(GL_QUADS);
		glColor3ub(178, 178, 178);//abu--
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(2.5f,0.4f,0.0f);
		glVertex3f(2.5f,1.2f,0.0f);
		glVertex3f(0.0f,1.2f,0.0f);
	glEnd();
	glPopMatrix();

//	belakang
	glPushMatrix();
	glTranslated(0,0,0);
	glTranslatef(-14,0,4);
	glRotated(90, 0, 1, 0);
	glBegin(GL_QUADS);
		CatTrukParkirMT();//warna
		glVertex3f(0.0f,0.2f,0.0f);
		glVertex3f(4.0f,0.2f,0.0f);
		glVertex3f(4.0f,5.7f,0.0f);
		glVertex3f(0.0f,5.7f,0.0f);
	glEnd();
	glPopMatrix();
	
//	atas
	glPushMatrix();
	glTranslated(0,0,0);
	glTranslatef(-16.5,5.2,0);
	glRotated(-90, 0, 1, 0);
	glRotated(-78.7, 1, 0, 0);
	glBegin(GL_QUADS);
		CatTrukParkirMT();//warna
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(4.0f,0.0f,0.0f);
		glVertex3f(4.0f,2.55f,0.0f);
		glVertex3f(0.0f,2.55f,0.0f);
	glEnd();
	glPopMatrix();
	
//	bawah
	glPushMatrix();
	glTranslated(0,0,0);
	glTranslatef(-14,0.2,-0.1);
	glRotated(-90, 0, 1, 0);
	glRotated(90, 1, 0, 0);
	glBegin(GL_QUADS);
		CatTrukParkirMT();//warna
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(4.2f,0.0f,0.0f);
		glVertex3f(4.2f,3.1f,0.0f);
		glVertex3f(0.0f,3.1f,0.0f);
	glEnd();
	glPopMatrix();
	
//	sambungan
	//kiri
	glPushMatrix();
	glTranslated(0,0,0);
	glTranslatef(-14,0.2,4);
	glBegin(GL_QUADS);
		glColor3ub(33, 33, 33);//abu
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(5.0f,0.0f,0.0f);
		glVertex3f(5.0f,1.2f,0.0f);
		glVertex3f(0.0f,1.2f,0.0f);
	glEnd();
	glPopMatrix();
	//kanan
	glPushMatrix();
	glTranslated(0,0,0);
	glRotated(180, 0, 1, 0);
	glTranslatef(9,0.2,0);
	glBegin(GL_QUADS);
		glColor3ub(33, 33, 33);//abu
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(5.0f,0.0f,0.0f);
		glVertex3f(5.0f,1.2f,0.0f);
		glVertex3f(0.0f,1.2f,0.0f);
	glEnd();
	glPopMatrix();
	//belakang
	glPushMatrix();
	glTranslated(0,0,0);
	glTranslatef(-9,0.2,4);
	glRotated(90, 0, 1, 0);
	glBegin(GL_QUADS);
		glColor3ub(33, 33, 33);//abu
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(4.0f,0.0f,0.0f);
		glVertex3f(4.0f,1.2f,0.0f);
		glVertex3f(0.0f,1.2f,0.0f);
	glEnd();
	glPopMatrix();
	//atas
	glPushMatrix();
	glTranslated(0,0,0);
	glTranslatef(-14,1.4,0);
	glRotated(90, 1, 0, 0);
	glBegin(GL_QUADS);
		glColor3ub(33, 33, 33);//abu
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(5.0f,0.0f,0.0f);
		glVertex3f(5.0f,4.0f,0.0f);
		glVertex3f(0.0f,4.0f,0.0f);
	glEnd();
	glPopMatrix();
	//bawah
	glPushMatrix();
	glTranslated(0,0,0);
	glTranslatef(-14,0.2,0);
	glRotated(90, 1, 0, 0);
	glBegin(GL_QUADS);
		glColor3ub(33, 33, 33);//abu
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(5.0f,0.0f,0.0f);
		glVertex3f(5.0f,4.0f,0.0f);
		glVertex3f(0.0f,4.0f,0.0f);
	glEnd();
	glPopMatrix();

//membuat bagian box pertama
//Box1	
	//depan
	glPushMatrix();
	glTranslated(0,0,0);
	glTranslatef(-13.5,1.5,0);
	glRotated(-90, 0, 1, 0);
	glBegin(GL_QUADS);
		CatTrukParkirMT();//warna
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(4.0f,0.0f,0.0f);
		glVertex3f(4.0f,4.5f,0.0f);
		glVertex3f(0.0f,4.5f,0.0f);
	glEnd();
	glPopMatrix();
	
	//samping kanan
	glPushMatrix();
	glTranslated(0,0,0);
	glTranslatef(4.5,1.5,0);
	glRotated(180, 0, 1, 0);
	glBegin(GL_QUADS);
		CatTrukParkirMT();//warna
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(18.0f,0.0f,0.0f);
		glVertex3f(18.0f,4.5f,0.0f);
		glVertex3f(0.0f,4.5f,0.0f);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(0,0,0);
	glTranslatef(4.5,0.2,0);
	glRotated(180, 0, 1, 0);
	glBegin(GL_QUADS);
//		glColor3ub(255, 0, 0);//exred
		glColor3ub(33, 33, 33);//abu
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(12.5f,0.0f,0.0f);
		glVertex3f(13.0f,1.3f,0.0f);
		glVertex3f(0.0f,1.3f,0.0f);
	glEnd();
	glPopMatrix();
	
	//samping kiri
	glPushMatrix();
	glTranslated(0,0,0);
	glTranslatef(-13.5,1.5,4);
	glBegin(GL_QUADS);
		CatTrukParkirMT();//warna
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(18.0f,0.0f,0.0f);
		glVertex3f(18.0f,4.5f,0.0f);
		glVertex3f(0.0f,4.5f,0.0f);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(0,0,0);
	glTranslatef(-8.5,0.2,4);
	glBegin(GL_QUADS);
		glColor3ub(33, 33, 33);//abu
		glVertex3f(0.5f,0.0f,0.0f);
		glVertex3f(13.0f,0.0f,0.0f);
		glVertex3f(13.0f,1.3f,0.0f);
		glVertex3f(0.0f,1.3f,0.0f);
	glEnd();
	glPopMatrix();
	
	//belakang
	//up
	glPushMatrix();
	glTranslated(0,0,0);
	glTranslatef(4.5,1.5,4);
	glRotated(90, 0, 1, 0);
	glBegin(GL_QUADS);
		CatTrukParkirMT();//warna
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(1.8f,0.0f,0.0f);
		glVertex3f(1.8f,4.5f,0.0f);
		glVertex3f(0.0f,4.5f,0.0f);
	glEnd();
	glPopMatrix();
//	pintu garis
	glPushMatrix();
	glTranslated(0,0,0);
	glTranslatef(4.5,1.5,2.2);
	glRotated(90, 0, 1, 0);
	glBegin(GL_QUADS);
		glColor3ub(2, 7, 28);//biru--
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.4f,0.0f,0.0f);
		glVertex3f(0.4f,4.5f,0.0f);
		glVertex3f(0.0f,4.5f,0.0f);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(0,0,0);
	glTranslatef(4.5,1.5,1.8);
	glRotated(90, 0, 1, 0);
	glBegin(GL_QUADS);
		CatTrukParkirMT();//warna
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(1.8f,0.0f,0.0f);
		glVertex3f(1.8f,4.5f,0.0f);
		glVertex3f(0.0f,4.5f,0.0f);
	glEnd();
	glPopMatrix();
	//down
	glPushMatrix();
	glTranslated(0,0,0);
	glTranslatef(4.5,0.2,4);
	glRotated(90, 0, 1, 0);
	glBegin(GL_QUADS);
		glColor3ub(33, 33, 33);//abu
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(4.0f,0.0f,0.0f);
		glVertex3f(4.0f,1.3f,0.0f);
		glVertex3f(0.0f,1.3f,0.0f);
	glEnd();
	glPopMatrix();
	
	//atas
	glPushMatrix();
	glTranslated(0,0,0);
	glTranslatef(-13.5,6,4);
	glRotated(-90, 1, 0, 0);
	glBegin(GL_QUADS);
		CatTrukParkirMT();//warna
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(18.0f,0.0f,0.0f);
		glVertex3f(18.0f,4.0f,0.0f);
		glVertex3f(0.0f,4.0f,0.0f);
	glEnd();
	glPopMatrix();
	
	//bawah
	glPushMatrix();
	glTranslated(0,0,0);
	glTranslatef(-13.5,1.5,0);
	glRotated(90, 1, 0, 0);
	glBegin(GL_QUADS);
		CatTrukParkirMT();//warna, awal uk. 5x4
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(18.0f,0.0f,0.0f);
		glVertex3f(18.0f,4.0f,0.0f);
		glVertex3f(0.0f,4.0f,0.0f);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(0,0,0);
	glTranslatef(-8,0.2,0);
	glRotated(90, 1, 0, 0);
	glBegin(GL_QUADS);
		glColor3ub(33, 33, 33);//abu
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(12.5f,0.0f,0.0f);
		glVertex3f(12.5f,4.0f,0.0f);
		glVertex3f(0.0f,4.0f,0.0f);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(0,0,0);
	glTranslatef(-8,0.2,0);
	glRotated(-90, 0, 1, 0);
	glRotated(21, 1, 0, 0);
	glBegin(GL_QUADS);
		glColor3ub(33, 33, 33);//abu
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(4.0f,0.0f,0.0f);
		glVertex3f(4.0f,1.392f,0.0f);
		glVertex3f(0.0f,1.392f,0.0f);
	glEnd();
	glPopMatrix();

//membuat bagian semua roda
//Roda
//	Kanan
	//head
    glColor3ub(2, 7, 28);//biru--
	glPushMatrix();
		glTranslated(0,0,0);
		glTranslated(-15, 0.55, -0.1);
		glRotated(0,0,0,1);
		glutSolidTorus(0.4, 0.5, 16, 16);
	glPopMatrix();
	glPushMatrix();
		glTranslated(0,0,0);
		glTranslated(-12, 0.55, 0);
		glRotated(0,0,0,1);
		glutSolidTorus(0.4, 0.5, 16, 16);
	glPopMatrix();
	glPushMatrix();
		glTranslated(0,0,0);
		glTranslated(-10, 0.55, 0);
		glRotated(0,0,0,1);
		glutSolidTorus(0.4, 0.5, 16, 16);
	glPopMatrix();
	
	//box1
	glPushMatrix();
		glTranslated(0,0,0);
		glTranslated(-2, 0.55, 0);
		glRotated(0,0,0,1);
		glutSolidTorus(0.4, 0.5, 16, 16);
	glPopMatrix();
	glPushMatrix();
		glTranslated(0,0,0);
		glTranslated(0, 0.55, 0);
		glRotated(0,0,0,1);
		glutSolidTorus(0.4, 0.5, 16, 16);
	glPopMatrix();
	glPushMatrix();
		glTranslated(0,0,0);
		glTranslated(2, 0.55, 0);
		glRotated(0,0,0,1);
		glutSolidTorus(0.4, 0.5, 16, 16);
	glPopMatrix();
	
//	Kiri
	//head
    
	glPushMatrix();
		glTranslated(0,0,0);
		glTranslated(-15, 0.55, 4.1);
        glRotated(0,0,0,1);
		glutSolidTorus(0.4, 0.5, 16, 16);
	glPopMatrix();
	glPushMatrix();
		glTranslated(0,0,0);
		glTranslated(-12, 0.55, 4);
		glRotated(0,0,0,1);
		glutSolidTorus(0.4, 0.5, 16, 16);
	glPopMatrix();
	glPushMatrix();
		glTranslated(0,0,0);
		glTranslated(-10, 0.55, 4);
		glRotated(0,0,0,1);
		glutSolidTorus(0.4, 0.5, 16, 16);
	glPopMatrix();
	
	//box1
	glPushMatrix();
		glTranslated(0,0,0);
		glTranslated(-2, 0.55, 4);
		glRotated(0,0,0,1);
		glutSolidTorus(0.4, 0.5, 16, 16);
	glPopMatrix();
	glPushMatrix();
		glTranslated(0,0,0);
		glTranslated(0, 0.55, 4);
		glRotated(0,0,0,1);
		glutSolidTorus(0.4, 0.5, 16, 16);
	glPopMatrix();
	glPushMatrix();
		glTranslated(0,0,0);
		glTranslated(2, 0.55, 4);
		glRotated(0,0,0,1);
		glutSolidTorus(0.4, 0.5, 16, 16);
	glPopMatrix();
	
//Accessoris
	//lampu belakang kiri
	glPushMatrix();
    glTranslated(0,0,0);
	glTranslatef(4.6,0.4,3.7);
	glRotated(90, 0, 1, 0);
	glBegin(GL_QUADS);
		glColor3ub(255, 0, 0);//merah
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.8f,0.0f,0.0f);
		glVertex3f(0.8f,0.4f,0.0f);
		glVertex3f(0.0f,0.4f,0.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslated(0,0,0);
	glTranslatef(4.6,0.8,3.7);
	glRotated(90, 0, 1, 0);
	glRotated(-90, 1, 0, 0);
	glBegin(GL_QUADS);
		glColor3ub(255, 0, 0);//merah
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.8f,0.0f,0.0f);
		glVertex3f(0.8f,0.1f,0.0f);
		glVertex3f(0.0f,0.1f,0.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslated(0,0,0);
	glTranslatef(4.5,0.4,3.7);
	glRotated(90, 0, 1, 0);
	glRotated(90, 1, 0, 0);
	glBegin(GL_QUADS);
		glColor3ub(255, 0, 0);//merah
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.8f,0.0f,0.0f);
		glVertex3f(0.8f,0.1f,0.0f);
		glVertex3f(0.0f,0.1f,0.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslated(0,0,0);
	glTranslatef(4.5,0.4,3.7);
	glBegin(GL_QUADS);
		glColor3ub(255, 0, 0);//merah
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.1f,0.0f,0.0f);
		glVertex3f(0.1f,0.4f,0.0f);
		glVertex3f(0.0f,0.4f,0.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslated(0,0,0);
	glRotated(180, 0, 1, 0);
	glTranslatef(-4.6,0.4,-2.9);
	glBegin(GL_QUADS);
		glColor3ub(255, 0, 0);//merah
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.1f,0.0f,0.0f);
		glVertex3f(0.1f,0.4f,0.0f);
		glVertex3f(0.0f,0.4f,0.0f);
	glEnd();
	glPopMatrix();
	
	//lampu belakang kanan
	glPushMatrix();
    glTranslated(0,0,0);
	glTranslatef(4.6,0.4,1.1);
	glRotated(90, 0, 1, 0);
	glBegin(GL_QUADS);
		glColor3ub(255, 0, 0);//merah
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.8f,0.0f,0.0f);
		glVertex3f(0.8f,0.4f,0.0f);
		glVertex3f(0.0f,0.4f,0.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslated(0,0,0);
	glTranslatef(4.6,0.8,1.1);
	glRotated(90, 0, 1, 0);
	glRotated(-90, 1, 0, 0);
	glBegin(GL_QUADS);
		glColor3ub(255, 0, 0);//merah
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.8f,0.0f,0.0f);
		glVertex3f(0.8f,0.1f,0.0f);
		glVertex3f(0.0f,0.1f,0.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslated(0,0,0);
	glTranslatef(4.5,0.4,1.1);
	glRotated(90, 0, 1, 0);
	glRotated(90, 1, 0, 0);
	glBegin(GL_QUADS);
		glColor3ub(255, 0, 0);//merah
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.8f,0.0f,0.0f);
		glVertex3f(0.8f,0.1f,0.0f);
		glVertex3f(0.0f,0.1f,0.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslated(0,0,0);
	glTranslatef(4.5,0.4,1.1);
	glBegin(GL_QUADS);
		glColor3ub(255, 0, 0);//merah
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.1f,0.0f,0.0f);
		glVertex3f(0.1f,0.4f,0.0f);
		glVertex3f(0.0f,0.4f,0.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslated(0,0,0);
	glRotated(180, 0, 1, 0);
	glTranslatef(-4.6,0.4,-0.3);
	glBegin(GL_QUADS);
		glColor3ub(255, 0, 0);//merah
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.1f,0.0f,0.0f);
		glVertex3f(0.1f,0.4f,0.0f);
		glVertex3f(0.0f,0.4f,0.0f);
	glEnd();
	glPopMatrix();
	
	//plat belakang
	glPushMatrix();
    glTranslated(0,0,0);
	glTranslatef(4.6,1.0,2.5);
	glRotated(90, 0, 1, 0);
	glBegin(GL_QUADS);
		glColor3ub(10, 10, 10);//hitam++
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(1.0f,0.0f,0.0f);
		glVertex3f(1.0f,0.3f,0.0f);
		glVertex3f(0.0f,0.3f,0.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslated(0,0,0);
	glTranslatef(4.6,1.3,2.5);
	glRotated(90, 0, 1, 0);
	glRotated(-90, 1, 0, 0);
	glBegin(GL_QUADS);
		glColor3ub(10, 10, 10);//hitam++
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(1.0f,0.0f,0.0f);
		glVertex3f(1.0f,0.1f,0.0f);
		glVertex3f(0.0f,0.1f,0.0f);
	glEnd();
	glPopMatrix();
	
	//pintu kanan
	glPushMatrix();
    glTranslated(0,0,0);
	glRotated(180, 0, 1, 0);
	glTranslatef(14.8,2.5,0.1);
	glBegin(GL_QUADS);
		glColor3ub(10, 10, 10);//hitam++
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.5f,0.0f,0.0f);
		glVertex3f(0.5f,0.2f,0.0f);
		glVertex3f(0.0f,0.2f,0.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslated(0,0,0);
	glTranslatef(-15.3,2.7,0);
	glRotated(-90, 1, 0, 0);
	glBegin(GL_QUADS);
		glColor3ub(10, 10, 10);//hitam++
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.5f,0.0f,0.0f);
		glVertex3f(0.5f,0.1f,0.0f);
		glVertex3f(0.0f,0.1f,0.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslated(0,0,0);
	glTranslatef(-15.3,2.5,-0.1);
	glRotated(90, 1, 0, 0);
	glBegin(GL_QUADS);
		glColor3ub(10, 10, 10);//hitam++
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.5f,0.0f,0.0f);
		glVertex3f(0.5f,0.1f,0.0f);
		glVertex3f(0.0f,0.1f,0.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslated(0,0,0);
	glTranslatef(-15.3,2.5,-0.1);
	glRotated(-90, 0, 1, 0);
	glBegin(GL_QUADS);
		glColor3ub(10, 10, 10);//hitam++
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.1f,0.0f,0.0f);
		glVertex3f(0.1f,0.2f,0.0f);
		glVertex3f(0.0f,0.2f,0.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslated(0,0,0);
	glTranslatef(-14.8,2.5,0);
	glRotated(90, 0, 1, 0);
	glBegin(GL_QUADS);
		glColor3ub(10, 10, 10);//hitam++
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.1f,0.0f,0.0f);
		glVertex3f(0.1f,0.2f,0.0f);
		glVertex3f(0.0f,0.2f,0.0f);
	glEnd();
	glPopMatrix();
	
	//pintu kiri
	glPushMatrix();
    glTranslated(0,0,0);
	glTranslatef(-15.3,2.5,4.1);
	glBegin(GL_QUADS);
		glColor3ub(10, 10, 10);//hitam++
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.5f,0.0f,0.0f);
		glVertex3f(0.5f,0.2f,0.0f);
		glVertex3f(0.0f,0.2f,0.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslated(0,0,0);
	glTranslatef(-15.3,2.7,4.1);
	glRotated(-90, 1, 0, 0);
	glBegin(GL_QUADS);
		glColor3ub(10, 10, 10);//hitam++
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.5f,0.0f,0.0f);
		glVertex3f(0.5f,0.1f,0.0f);
		glVertex3f(0.0f,0.1f,0.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslated(0,0,0);
	glTranslatef(-15.3,2.5,4);
	glRotated(90, 1, 0, 0);
	glBegin(GL_QUADS);
		glColor3ub(10, 10, 10);//hitam++
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.5f,0.0f,0.0f);
		glVertex3f(0.5f,0.1f,0.0f);
		glVertex3f(0.0f,0.1f,0.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslated(0,0,0);
	glTranslatef(-15.3,2.5,4);
	glRotated(-90, 0, 1, 0);
	glBegin(GL_QUADS);
		glColor3ub(10, 10, 10);//hitam++
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.1f,0.0f,0.0f);
		glVertex3f(0.1f,0.2f,0.0f);
		glVertex3f(0.0f,0.2f,0.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslated(0,0,0);
	glTranslatef(-14.8,2.5,4.1);
	glRotated(90, 0, 1, 0);
	glBegin(GL_QUADS);
		glColor3ub(10, 10, 10);//hitam++
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.1f,0.0f,0.0f);
		glVertex3f(0.1f,0.2f,0.0f);
		glVertex3f(0.0f,0.2f,0.0f);
	glEnd();
	glPopMatrix();
	
	//plat depan
	glPushMatrix();
    glTranslated(0,0,0);
	glTranslatef(-17.2,0.2,1.5);
	glRotated(-90, 0, 1, 0);
	glBegin(GL_QUADS);
		glColor3ub(10, 10, 10);//hitam++
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(1.0f,0.0f,0.0f);
		glVertex3f(1.0f,0.3f,0.0f);
		glVertex3f(0.0f,0.3f,0.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslated(0,0,0);
	glTranslatef(-17.2,0.5,1.5);
	glRotated(-90, 0, 1, 0);
	glRotated(-90, 1, 0, 0);
	glBegin(GL_QUADS);
		glColor3ub(10, 10, 10);//hitam++
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(1.0f,0.0f,0.0f);
		glVertex3f(1.0f,0.1f,0.0f);
		glVertex3f(0.0f,0.1f,0.0f);
	glEnd();
	glPopMatrix();
	
	//spion kiri
	glPushMatrix();
    glTranslated(0,0,0);
	glTranslatef(-17,3,4.3);
	glRotated(-90, 0, 1, 0);
	glBegin(GL_QUADS);
		CatTrukParkirMT();//warna
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.3f,0.0f,0.0f);
		glVertex3f(0.3f,0.7f,0.0f);
		glVertex3f(0.0f,0.7f,0.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslated(0,0,0);
	glTranslatef(-17,3.7,4.3);
	glRotated(-90, 0, 1, 0);
	glRotated(-90, 1, 0, 0);
	glBegin(GL_QUADS);
		CatTrukParkirMT();//warna
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.3f,0.0f,0.0f);
		glVertex3f(0.3f,0.1f,0.0f);
		glVertex3f(0.0f,0.1f,0.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslated(0,0,0);
	glTranslatef(-16.9,3,4.3);
	glRotated(-90, 0, 1, 0);
	glRotated(90, 1, 0, 0);
	glBegin(GL_QUADS);
		CatTrukParkirMT();//warna
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.3f,0.0f,0.0f);
		glVertex3f(0.3f,0.1f,0.0f);
		glVertex3f(0.0f,0.1f,0.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslated(0,0,0);
	glTranslatef(-17,3,4.6);
	glBegin(GL_QUADS);
		CatTrukParkirMT();//warna
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.1f,0.0f,0.0f);
		glVertex3f(0.1f,0.7f,0.0f);
		glVertex3f(0.0f,0.7f,0.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslated(0,0,0);
	glRotated(180, 0, 1, 0);
	glTranslatef(16.9,3,-4.3);
	glBegin(GL_QUADS);
		CatTrukParkirMT();//warna
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.1f,0.0f,0.0f);
		glVertex3f(0.1f,0.7f,0.0f);
		glVertex3f(0.0f,0.7f,0.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslated(0,0,0);
	glTranslatef(-16.9,3,4.6);
	glRotated(90, 0, 1, 0);
	glBegin(GL_QUADS);
		glColor3ub(255, 255, 255);//putih kaca
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.3f,0.0f,0.0f);
		glVertex3f(0.3f,0.7f,0.0f);
		glVertex3f(0.0f,0.7f,0.0f);
	glEnd();
	glPopMatrix();
	//gagang
	glPushMatrix();
    glTranslated(0,0,0);
	glTranslatef(-17,3.9,3.9);
	glRotated(-90, 0, 1, 0);
	glRotated(-30, 0, 0, 1);
	glBegin(GL_QUADS);
		CatTrukParkirMT();//warna
		glVertex3f(0.0f,0.0f,-0.1f);
		glVertex3f(0.5f,0.0f,0.0f);
		glVertex3f(0.5f,0.05f,0.0f);
		glVertex3f(0.0f,0.05f,-0.1f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslated(0,0,0);
	glTranslatef(-16.95,2.9,4);
	glRotated(-90, 0, 1, 0);
	glRotated(20, 0, 0, 1);
	glBegin(GL_QUADS);
		CatTrukParkirMT();//warna
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.5f,0.0f,0.0f);
		glVertex3f(0.5f,0.05f,0.0f);
		glVertex3f(0.0f,0.05f,0.0f);
	glEnd();
	glPopMatrix();
	
	//spion kanan
	glPushMatrix();
    glTranslated(0,0,0);
	glTranslatef(-17,3,-0.6);
	glRotated(-90, 0, 1, 0);
	glBegin(GL_QUADS);
		CatTrukParkirMT();//warna
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.3f,0.0f,0.0f);
		glVertex3f(0.3f,0.7f,0.0f);
		glVertex3f(0.0f,0.7f,0.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslated(0,0,0);
	glTranslatef(-17,3.7,-0.6);
	glRotated(-90, 0, 1, 0);
	glRotated(-90, 1, 0, 0);
	glBegin(GL_QUADS);
		CatTrukParkirMT();//warna
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.3f,0.0f,0.0f);
		glVertex3f(0.3f,0.1f,0.0f);
		glVertex3f(0.0f,0.1f,0.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslated(0,0,0);
	glTranslatef(-16.9,3,-0.6);
	glRotated(-90, 0, 1, 0);
	glRotated(90, 1, 0, 0);
	glBegin(GL_QUADS);
		CatTrukParkirMT();//warna
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.3f,0.0f,0.0f);
		glVertex3f(0.3f,0.1f,0.0f);
		glVertex3f(0.0f,0.1f,0.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslated(0,0,0);
	glTranslatef(-17,3,-0.3);
	glBegin(GL_QUADS);
		CatTrukParkirMT();//warna
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.1f,0.0f,0.0f);
		glVertex3f(0.1f,0.7f,0.0f);
		glVertex3f(0.0f,0.7f,0.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslated(0,0,0);
	glRotated(180, 0, 1, 0);
	glTranslatef(16.9,3,0.6);
	glBegin(GL_QUADS);
		CatTrukParkirMT();//warna
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.1f,0.0f,0.0f);
		glVertex3f(0.1f,0.7f,0.0f);
		glVertex3f(0.0f,0.7f,0.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslated(0,0,0);
	glTranslatef(-16.9,3,-0.3);
	glRotated(90, 0, 1, 0);
	glBegin(GL_QUADS);
		glColor3ub(255, 255, 255);//putih kaca
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.3f,0.0f,0.0f);
		glVertex3f(0.3f,0.7f,0.0f);
		glVertex3f(0.0f,0.7f,0.0f);
	glEnd();
	glPopMatrix();
	//gagang
	glPushMatrix();
    glTranslated(0,0,0);
	glRotated(180, 0, 1, 0);
	glTranslatef(16.95,3.6,0.4);
	glRotated(90, 0, 1, 0);
	glRotated(30, 0, 0, 1);
	glBegin(GL_QUADS);
		CatTrukParkirMT();//warna
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.5f,0.0f,0.0f);
		glVertex3f(0.5f,0.05f,0.0f);
		glVertex3f(0.0f,0.05f,0.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslated(0,0,0);
	glRotated(180, 0, 1, 0);
	glTranslatef(16.95,3,0.4);
	glRotated(90, 0, 1, 0);
	glRotated(-20, 0, 0, 1);
	glBegin(GL_QUADS);
		CatTrukParkirMT();//warna
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(0.5f,0.0f,0.0f);
		glVertex3f(0.5f,0.05f,0.0f);
		glVertex3f(0.0f,0.05f,0.0f);
	glEnd();
	glPopMatrix();
glPopMatrix();
}
