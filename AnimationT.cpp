// ini untuk animasi bolak balik jalan Truk

#include <math.h>
#include <GL/glut.h>

#include "MasterT.cpp"

//ini menampilkan sekaligus animasi truk mainnya truklah
void AnimatorTruk(){
	glPushMatrix();
		PosisiAwalTruk();
		PenggerakBody();
		HeadTruck();
		Box1();
		Box2();
		Sambung();
		Accessoris();
		Roda();
	glPopMatrix();
}

void Tunnel1(){
	if(tunnel == 0){
		glTranslatef(-40,0,-5);
		glRotated(180,0,1,0);
		tunnel = 1;
	}
}

void Tunnel2(){
	if(tunnel == 1){
		glTranslatef(40,0,5);
		glRotated(-180,0,1,0);
		tunnel = 0;
	}
}
