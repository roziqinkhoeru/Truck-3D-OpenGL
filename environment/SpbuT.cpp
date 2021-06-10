//ini coding buat SPBU

#include <GL/glut.h>

void SPBU(){
	//Atap atas
	
	glBegin(GL_QUADS);
	glColor3f(1,1,1);
		glVertex3f(-33, 20 , -20);
		glVertex3f(33, 20 , -20);
		glVertex3f(33, 20 , -50);
		glVertex3f(-33, 20 , -50);
		
	glEnd();
	
	//atap bawah
	
	glBegin(GL_QUADS);
	glColor3f(1,1,1);
		glVertex3f(-30, 15 , -25);
		glVertex3f(30, 15 , -25);
		glVertex3f(30, 15 , -45);
		glVertex3f(-30, 15 , -45);
		
	glEnd();
	
	//atap kiri
	
	glBegin(GL_QUADS);
	glColor3f(1,0,0);
		glVertex3f(-30, 15 , -45);
		glVertex3f(-30, 15 , -25);	
		glVertex3f(-33, 20 , -20);
		glVertex3f(-33, 20, -50);
		
	glEnd();
	
	//atap kanan
	
	glBegin(GL_QUADS);
	glColor3f(1,0,0);
		glVertex3f(30, 15 , -45);
		glVertex3f(30, 15 , -25);
		glVertex3f(33, 20 , -20);
		glVertex3f(33, 20 , -50);
		
	glEnd();
	
	//atap depan
	
	glBegin(GL_QUADS);
	glColor3f(1,0,0);
		glVertex3f(-33, 20 , -20);
		glVertex3f(33, 20 , -20);
		glVertex3f(30, 15 , -25);
		glVertex3f(-30, 15 , -25);
		
	glEnd();
	
	//atap belakang
	
	glBegin(GL_QUADS);
	glColor3f(1,0,0);
		glVertex3f(-33, 20 , -50);
		glVertex3f(33, 20 , -50);
		glVertex3f(30, 15 , -45);
		glVertex3f(-30, 15 , -45);
		
		
	glEnd();
	
	//alas
	glBegin(GL_QUADS);
	glColor3f(0.5,0.5,0.5);
		glVertex3f(-33, 0.01 , -20);
		glVertex3f(33, 0.01 , -20);
		glVertex3f(33, 0.01 , -50);
		glVertex3f(-33, 0.01 , -50);
		
	glEnd();
	
	//Pilar 1
	GLUquadricObj *quadratic;
	quadratic = gluNewQuadric();
	
	glPushMatrix();
		glRotated(90, 1, 0, 0);
		glColor3f(0, 0, 0 );
		glTranslatef(0, -30.0, -20);
		gluCylinder(quadratic, 0.5f, 0.5f, 20.0f, 18, 2);
	glPopMatrix();

	//Pilar 2
	
	glPushMatrix();
		glRotated(90, 1, 0, 0);
		glColor3f(0, 0, 0 );
		glTranslatef(0, -40.0, -20);
		gluCylinder(quadratic, 0.5f, 0.5f, 20.0f, 18, 2);
	glPopMatrix();
	
	//Alat Pom 1
		//tutup atas
			//atep bawah atap
			glPushMatrix();
			glBegin(GL_QUADS);
				glColor3f(0.94, 0, 0);
				glVertex3f(-7, 9.02 , -29);
				glVertex3f(-7, 9.02 , -31);	
				glVertex3f(7, 9.02 , -31);
				glVertex3f(7, 9.02, -29);
				
				glEnd();
				glPopMatrix();
				//atep bawah belakang
				glPushMatrix();
				glBegin(GL_QUADS);
					glColor3f(0.7, 0.71, 0.75);
					glVertex3f(-7, 9.02 , -31);	
					glVertex3f(7, 9.02 , -31);
					glVertex3f(7, 7.02, -31);
					glVertex3f(-7, 7.02 , -31);
				glEnd();
				glPopMatrix();
				//atep bawah depan
				glPushMatrix();
				glBegin(GL_QUADS);
					glColor3f(0.7, 0.71, 0.75);
					glVertex3f(-7, 9.02 , -29);	
					glVertex3f(7, 9.02 , -29);
					glVertex3f(7, 7.02, -29);
					glVertex3f(-7, 7.02 , -29);
				glEnd();
				glPopMatrix();
				//atep bawah bawah
				glPushMatrix();
				glBegin(GL_QUADS);
					glColor3f(0.94, 0, 0);
					glVertex3f(-7, 7.02 , -29);
					glVertex3f(-7, 7.02 , -31);	
					glVertex3f(7, 7.02 , -31);
					glVertex3f(7, 7.02, -29);
					
				glEnd();
				glPopMatrix();
				//atep bawah kiri
				glPushMatrix();
				glBegin(GL_QUADS);
					glColor3f(0.94, 0, 0);
					glVertex3f(-7, 9.02 , -31);
					glVertex3f(-7, 9.02 , -29);	
					glVertex3f(-7, 7.02 , -29);
					glVertex3f(-7, 7.02, -31);
					
				glEnd();
				glPopMatrix();
				//atep bawah kanan
				glPushMatrix();
				glBegin(GL_QUADS);
					glColor3f(0.94, 0, 0);
					glVertex3f(7, 9.02 , -31);
					glVertex3f(7, 9.02 , -29);	
					glVertex3f(7, 7.02 , -29);
					glVertex3f(7, 7.02, -31);
					
				glEnd();
				glPopMatrix();
	
		//Tutup Kanan
			//kanan
			glPushMatrix();
			glBegin(GL_QUADS);
				glColor3f(0.94, 0, 0);
				glVertex3f(7, 7.02 , -31);	
				glVertex3f(7, 0.02 , -31);
				glVertex3f(7, 0.02, -29);
				glVertex3f(7, 7.02 , -29);
			glEnd();
			glPopMatrix();
			//kiri
			glPushMatrix();
			glBegin(GL_QUADS);
				glColor3f(0.7, 0.71, 0.75);
				glVertex3f(4, 7.02 , -31);	
				glVertex3f(4, 0.02 , -31);
				glVertex3f(4, 0.02, -29);
				glVertex3f(4, 7.02 , -29);
			glEnd();
			glPopMatrix();
			//depan
			glPushMatrix();
			glBegin(GL_QUADS);
				glColor3f(0.7, 0.71, 0.75);
				glVertex3f(7, 7.02 , -29);	
				glVertex3f(7, 0.02 , -29);
				glVertex3f(4, 0.02, -29);
				glVertex3f(4, 7.02 , -29);
			glEnd();
			glPopMatrix();
			//belakang
			glPushMatrix();
			glBegin(GL_QUADS);
				glColor3f(0.7, 0.71, 0.75);
				glVertex3f(7, 7.02 , -31);	
				glVertex3f(7, 0.02 , -31);
				glVertex3f(4, 0.02, -31);
				glVertex3f(4, 7.02 , -31);
			glEnd();
			glPopMatrix();
			//bawah
			glPushMatrix();
			glBegin(GL_QUADS);
				glColor3f(0.94, 0, 0);
				glVertex3f(4, 0.02 , -29);
				glVertex3f(4, 0.02 , -31);	
				glVertex3f(7, 0.02 , -31);
				glVertex3f(7, 0.02, -29);
					
			glEnd();
			glPopMatrix();
		//kotak di bawah atap
			//atas
				glPushMatrix();
				glBegin(GL_QUADS);
					glColor3f(0.94, 0, 0);
					glVertex3f(0, 6.52 , -29);
					glVertex3f(0, 6.52 , -31);	
					glVertex3f(4, 6.52 , -31);
					glVertex3f(4, 6.52, -29);
					
					glEnd();
					glPopMatrix();
			//belakang
				glPushMatrix();
				glBegin(GL_QUADS);
					glColor3f(0.7, 0.71, 0.75);
					glVertex3f(0, 6.52 , -31);	
					glVertex3f(4, 6.52 , -31);
					glVertex3f(4, 5.52, -31);
					glVertex3f(0, 5.52 , -31);
				glEnd();
				glPopMatrix();
			//depan
				glPushMatrix();
				glBegin(GL_QUADS);
					glColor3f(0.7, 0.71, 0.75);
					glVertex3f(0, 6.52 , -29);	
					glVertex3f(4, 6.52 , -29);
					glVertex3f(4, 5.52, -29);
					glVertex3f(0, 5.52 , -29);
				glEnd();
				glPopMatrix();
			//bawah
				glPushMatrix();
				glBegin(GL_QUADS);
					glColor3f(0.94, 0, 0);
					glVertex3f(0, 5.52 , -29);
					glVertex3f(0, 5.52 , -31);	
					glVertex3f(4, 5.52 , -31);
					glVertex3f(4, 5.52, -29);
						
				glEnd();
				glPopMatrix();
			//kiri
				glPushMatrix();
				glBegin(GL_QUADS);
					glColor3f(0.94, 0, 0);
					glVertex3f(0, 6.52 , -31);
					glVertex3f(0, 6.52 , -29);	
					glVertex3f(0, 5.52 , -29);
					glVertex3f(0, 5.52, -31);
						
				glEnd();
				glPopMatrix();
			//kanan
				glPushMatrix();
				glBegin(GL_QUADS);
					glColor3f(0.94, 0, 0);
					glVertex3f(4, 6.52 , -31);
					glVertex3f(4, 6.52 , -29);	
					glVertex3f(4, 5.52 , -29);
					glVertex3f(4, 5.52, -31);
						
				glEnd();
				glPopMatrix();
		
		//kotak ngisi bensin
			//kotak atas
				//atas
					glPushMatrix();
					glBegin(GL_QUADS);
						glColor3f(0.94, 0, 0);
						glVertex3f(-4, 5.02 , -29);
						glVertex3f(-4, 5.02 , -31);	
						glVertex3f(1, 5.02 , -31);
						glVertex3f(1, 5.02, -29);
						
						glEnd();
						glPopMatrix();
				//belakang
					glPushMatrix();
					glBegin(GL_QUADS);
						glColor3f(0.7, 0.71, 0.75);
						glVertex3f(-4, 5.02 , -31);	
						glVertex3f(1, 5.02 , -31);
						glVertex3f(1, 1.02, -31);
						glVertex3f(-4, 1.02 , -31);
					glEnd();
					glPopMatrix();
				//depan
					glPushMatrix();
					glBegin(GL_QUADS);
						glColor3f(0.7, 0.71, 0.75);
						glVertex3f(-4, 5.02 , -29);	
						glVertex3f(1, 5.02 , -29);
						glVertex3f(1, 1.02, -29);
						glVertex3f(-4, 1.02 , -29);
					glEnd();
					glPopMatrix();
				//bawah
					glPushMatrix();
					glBegin(GL_QUADS);
						glColor3f(0.94, 0, 0);
						glVertex3f(-4, 5.02 , -29);
						glVertex3f(-4, 5.02 , -31);	
						glVertex3f(1, 5.02 , -31);
						glVertex3f(1, 5.02, -29);
							
					glEnd();
					glPopMatrix();
				//kiri
					glPushMatrix();
					glBegin(GL_QUADS);
						glColor3f(0.94, 0, 0);
						glVertex3f(-4, 5.02 , -31);
						glVertex3f(-4, 5.02 , -29);	
						glVertex3f(-4, 1.02 , -29);
						glVertex3f(-4, 1.02, -31);
							
					glEnd();
					glPopMatrix();
				//kanan
					glPushMatrix();
					glBegin(GL_QUADS);
						glColor3f(0.94, 0, 0);
						glVertex3f(1, 5.02 , -31);
						glVertex3f(1, 5.02 , -29);	
						glVertex3f(1, 1.02 , -29);
						glVertex3f(1, 1.02, -31);
							
					glEnd();
					glPopMatrix();
			//kotak bawah
				//atas
					glPushMatrix();
					glBegin(GL_QUADS);
						glColor3f(0.6, 0.79, 0);
						glVertex3f(-4, 1.02 , -29);
						glVertex3f(-4, 1.02 , -31);	
						glVertex3f(1, 1.02 , -31);
						glVertex3f(1, 1.02, -29);
						
						glEnd();
						glPopMatrix();
				//belakang
					glPushMatrix();
					glBegin(GL_QUADS);
						glColor3f(0.6, 0.79, 0);
						glVertex3f(-4, 1.02 , -31);	
						glVertex3f(1, 1.02 , -31);
						glVertex3f(1, 0.02, -31);
						glVertex3f(-4, 0.02 , -31);
					glEnd();
					glPopMatrix();
				//depan
					glPushMatrix();
					glBegin(GL_QUADS);
						glColor3f(0.6, 0.79, 0);
						glVertex3f(-4, 1.02 , -29);	
						glVertex3f(1, 1.02 , -29);
						glVertex3f(1, 0.02, -29);
						glVertex3f(-4, 0.02 , -29);
					glEnd();
					glPopMatrix();
				//bawah
					glPushMatrix();
					glBegin(GL_QUADS);
						glColor3f(0.6, 0.79, 0);
						glVertex3f(-4, 1.02 , -29);
						glVertex3f(-4, 1.02 , -31);	
						glVertex3f(1, 1.02 , -31);
						glVertex3f(1, 1.02, -29);
							
					glEnd();
					glPopMatrix();
				//kiri
					glPushMatrix();
					glBegin(GL_QUADS);
						glColor3f(0.6, 0.79, 0);
						glVertex3f(-4, 1.02 , -31);
						glVertex3f(-4, 1.02 , -29);	
						glVertex3f(-4, 0.02 , -29);
						glVertex3f(-4, 0.02, -31);
							
					glEnd();
					glPopMatrix();
				//kanan
					glPushMatrix();
					glBegin(GL_QUADS);
						glColor3f(0.6, 0.79, 0);
						glVertex3f(1, 1.02 , -31);
						glVertex3f(1, 1.02 , -29);	
						glVertex3f(1, 0.02 , -29);
						glVertex3f(1, 0.02, -31);
							
					glEnd();
					glPopMatrix();
			
			//kotak naro pistol
				//kanan 1
				glPushMatrix();
					glBegin(GL_QUADS);
						glColor3f(0.1, 0.1, 0.1);
						glVertex3f(-1, 3.02 , -31.01);	
						glVertex3f(0, 3.02 , -31.01);
						glVertex3f(0, 2.02, -31.01);
						glVertex3f(-1, 2.02 , -31.01);
					glEnd();
					glPopMatrix();
				
				//kanan 2
				glPushMatrix();
					glBegin(GL_QUADS);
						glColor3f(0.1, 0.1, 0.1);
						glVertex3f(-3, 3.02 , -31.01);	
						glVertex3f(-2, 3.02 , -31.01);
						glVertex3f(-2, 2.02, -31.01);
						glVertex3f(-3, 2.02 , -31.01);
					glEnd();
					glPopMatrix();
				//kiri 1
				glPushMatrix();
					glBegin(GL_QUADS);
						glColor3f(0.1, 0.1, 0.1);
						glVertex3f(-1, 3.02 , -28.99);	
						glVertex3f(0, 3.02 , -28.99);
						glVertex3f(0, 2.02, -28.99);
						glVertex3f(-1, 2.02 , -28.99);
					glEnd();
					glPopMatrix();
				
				//kiri 2
				glPushMatrix();
					glBegin(GL_QUADS);
						glColor3f(0.1, 0.1, 0.1);
						glVertex3f(-3, 3.02 , -28.99);	
						glVertex3f(-2, 3.02 , -28.99);
						glVertex3f(-2, 2.02, -28.99);
						glVertex3f(-3, 2.02 , -28.99);
					glEnd();
					glPopMatrix();
		
		//Alat Pom 2
		//tutup atas
			//atep bawah atap
			glPushMatrix();
			glBegin(GL_QUADS);
				glColor3f(0.94, 0, 0);
				glVertex3f(-7, 9.02 , -39);
				glVertex3f(-7, 9.02 , -41);	
				glVertex3f(7, 9.02 , -41);
				glVertex3f(7, 9.02, -39);
				
				glEnd();
				glPopMatrix();
				//atep bawah belakang
				glPushMatrix();
				glBegin(GL_QUADS);
					glColor3f(0.7, 0.71, 0.75);
					glVertex3f(-7, 9.02 , -41);	
					glVertex3f(7, 9.02 , -41);
					glVertex3f(7, 7.02, -41);
					glVertex3f(-7, 7.02 , -41);
				glEnd();
				glPopMatrix();
				//atep bawah depan
				glPushMatrix();
				glBegin(GL_QUADS);
					glColor3f(0.7, 0.71, 0.75);
					glVertex3f(-7, 9.02 , -39);	
					glVertex3f(7, 9.02 , -39);
					glVertex3f(7, 7.02, -39);
					glVertex3f(-7, 7.02 , -39);
				glEnd();
				glPopMatrix();
				//atep bawah bawah
				glPushMatrix();
				glBegin(GL_QUADS);
					glColor3f(0.94, 0, 0);
					glVertex3f(-7, 7.02 , -39);
					glVertex3f(-7, 7.02 , -41);	
					glVertex3f(7, 7.02 , -41);
					glVertex3f(7, 7.02, -39);
					
				glEnd();
				glPopMatrix();
				//atep bawah kiri
				glPushMatrix();
				glBegin(GL_QUADS);
					glColor3f(0.94, 0, 0);
					glVertex3f(-7, 9.02 , -41);
					glVertex3f(-7, 9.02 , -39);	
					glVertex3f(-7, 7.02 , -39);
					glVertex3f(-7, 7.02, -41);
					
				glEnd();
				glPopMatrix();
				//atep bawah kanan
				glPushMatrix();
				glBegin(GL_QUADS);
					glColor3f(0.94, 0, 0);
					glVertex3f(7, 9.02 , -41);
					glVertex3f(7, 9.02 , -39);	
					glVertex3f(7, 7.02 , -39);
					glVertex3f(7, 7.02, -41);
					
				glEnd();
				glPopMatrix();
	
		//Tutup Kanan
			//kanan
			glPushMatrix();
			glBegin(GL_QUADS);
				glColor3f(0.94, 0, 0);
				glVertex3f(7, 7.02 , -41);	
				glVertex3f(7, 0.02 , -41);
				glVertex3f(7, 0.02, -39);
				glVertex3f(7, 7.02 , -39);
			glEnd();
			glPopMatrix();
			//kiri
			glPushMatrix();
			glBegin(GL_QUADS);
				glColor3f(0.7, 0.71, 0.75);
				glVertex3f(4, 7.02 , -41);	
				glVertex3f(4, 0.02 , -41);
				glVertex3f(4, 0.02, -39);
				glVertex3f(4, 7.02 , -39);
			glEnd();
			glPopMatrix();
			//depan
			glPushMatrix();
			glBegin(GL_QUADS);
				glColor3f(0.7, 0.71, 0.75);
				glVertex3f(7, 7.02 , -39);	
				glVertex3f(7, 0.02 , -39);
				glVertex3f(4, 0.02, -39);
				glVertex3f(4, 7.02 , -39);
			glEnd();
			glPopMatrix();
			//belakang
			glPushMatrix();
			glBegin(GL_QUADS);
				glColor3f(0.7, 0.71, 0.75);
				glVertex3f(7, 7.02 , -41);	
				glVertex3f(7, 0.02 , -41);
				glVertex3f(4, 0.02, -41);
				glVertex3f(4, 7.02 , -41);
			glEnd();
			glPopMatrix();
			//bawah
			glPushMatrix();
			glBegin(GL_QUADS);
				glColor3f(0.94, 0, 0);
				glVertex3f(4, 0.02 , -39);
				glVertex3f(4, 0.02 , -41);	
				glVertex3f(7, 0.02 , -41);
				glVertex3f(7, 0.02, -39);
					
			glEnd();
			glPopMatrix();
		//kotak di bawah atap
			//atas
				glPushMatrix();
				glBegin(GL_QUADS);
					glColor3f(0.94, 0, 0);
					glVertex3f(0, 6.52 , -39);
					glVertex3f(0, 6.52 , -41);	
					glVertex3f(4, 6.52 , -41);
					glVertex3f(4, 6.52, -39);
					
					glEnd();
					glPopMatrix();
			//belakang
				glPushMatrix();
				glBegin(GL_QUADS);
					glColor3f(0.7, 0.71, 0.75);
					glVertex3f(0, 6.52 , -41);	
					glVertex3f(4, 6.52 , -41);
					glVertex3f(4, 5.52, -41);
					glVertex3f(0, 5.52 , -41);
				glEnd();
				glPopMatrix();
			//depan
				glPushMatrix();
				glBegin(GL_QUADS);
					glColor3f(0.7, 0.71, 0.75);
					glVertex3f(0, 6.52 , -39);	
					glVertex3f(4, 6.52 , -39);
					glVertex3f(4, 5.52, -39);
					glVertex3f(0, 5.52 , -39);
				glEnd();
				glPopMatrix();
			//bawah
				glPushMatrix();
				glBegin(GL_QUADS);
					glColor3f(0.94, 0, 0);
					glVertex3f(0, 5.52 , -39);
					glVertex3f(0, 5.52 , -41);	
					glVertex3f(4, 5.52 , -41);
					glVertex3f(4, 5.52, -39);
						
				glEnd();
				glPopMatrix();
			//kiri
				glPushMatrix();
				glBegin(GL_QUADS);
					glColor3f(0.94, 0, 0);
					glVertex3f(0, 6.52 , -41);
					glVertex3f(0, 6.52 , -39);	
					glVertex3f(0, 5.52 , -39);
					glVertex3f(0, 5.52, -41);
						
				glEnd();
				glPopMatrix();
			//kanan
				glPushMatrix();
				glBegin(GL_QUADS);
					glColor3f(0.94, 0, 0);
					glVertex3f(4, 6.52 , -41);
					glVertex3f(4, 6.52 , -39);	
					glVertex3f(4, 5.52 , -39);
					glVertex3f(4, 5.52, -41);
						
				glEnd();
				glPopMatrix();
		
		//kotak ngisi bensin
			//kotak atas
				//atas
					glPushMatrix();
					glBegin(GL_QUADS);
						glColor3f(0.94, 0, 0);
						glVertex3f(-4, 5.02 , -39);
						glVertex3f(-4, 5.02 , -41);	
						glVertex3f(1, 5.02 , -41);
						glVertex3f(1, 5.02, -39);
						
						glEnd();
						glPopMatrix();
				//belakang
					glPushMatrix();
					glBegin(GL_QUADS);
						glColor3f(0.7, 0.71, 0.75);
						glVertex3f(-4, 5.02 , -41);	
						glVertex3f(1, 5.02 , -41);
						glVertex3f(1, 1.02, -41);
						glVertex3f(-4, 1.02 , -41);
					glEnd();
					glPopMatrix();
				//depan
					glPushMatrix();
					glBegin(GL_QUADS);
						glColor3f(0.7, 0.71, 0.75);
						glVertex3f(-4, 5.02 , -39);	
						glVertex3f(1, 5.02 , -39);
						glVertex3f(1, 1.02, -39);
						glVertex3f(-4, 1.02 , -39);
					glEnd();
					glPopMatrix();
				//bawah
					glPushMatrix();
					glBegin(GL_QUADS);
						glColor3f(0.94, 0, 0);
						glVertex3f(-4, 5.02 , -39);
						glVertex3f(-4, 5.02 , -41);	
						glVertex3f(1, 5.02 , -41);
						glVertex3f(1, 5.02, -39);
							
					glEnd();
					glPopMatrix();
				//kiri
					glPushMatrix();
					glBegin(GL_QUADS);
						glColor3f(0.94, 0, 0);
						glVertex3f(-4, 5.02 , -41);
						glVertex3f(-4, 5.02 , -39);	
						glVertex3f(-4, 1.02 , -39);
						glVertex3f(-4, 1.02, -41);
							
					glEnd();
					glPopMatrix();
				//kanan
					glPushMatrix();
					glBegin(GL_QUADS);
						glColor3f(0.94, 0, 0);
						glVertex3f(1, 5.02 , -41);
						glVertex3f(1, 5.02 , -39);	
						glVertex3f(1, 1.02 , -39);
						glVertex3f(1, 1.02, -41);
							
					glEnd();
					glPopMatrix();
			//kotak bawah
				//atas
					glPushMatrix();
					glBegin(GL_QUADS);
						glColor3f(0.6, 0.79, 0);
						glVertex3f(-4, 1.02 , -39);
						glVertex3f(-4, 1.02 , -41);	
						glVertex3f(1, 1.02 , -41);
						glVertex3f(1, 1.02, -39);
						
						glEnd();
						glPopMatrix();
				//belakang
					glPushMatrix();
					glBegin(GL_QUADS);
						glColor3f(0.6, 0.79, 0);
						glVertex3f(-4, 1.02 , -41);	
						glVertex3f(1, 1.02 , -41);
						glVertex3f(1, 0.02, -41);
						glVertex3f(-4, 0.02 , -41);
					glEnd();
					glPopMatrix();
				//depan
					glPushMatrix();
					glBegin(GL_QUADS);
						glColor3f(0.6, 0.79, 0);
						glVertex3f(-4, 1.02 , -39);	
						glVertex3f(1, 1.02 , -39);
						glVertex3f(1, 0.02, -39);
						glVertex3f(-4, 0.02 , -39);
					glEnd();
					glPopMatrix();
				//bawah
					glPushMatrix();
					glBegin(GL_QUADS);
						glColor3f(0.6, 0.79, 0);
						glVertex3f(-4, 1.02 , -39);
						glVertex3f(-4, 1.02 , -41);	
						glVertex3f(1, 1.02 , -41);
						glVertex3f(1, 1.02, -39);
							
					glEnd();
					glPopMatrix();
				//kiri
					glPushMatrix();
					glBegin(GL_QUADS);
						glColor3f(0.6, 0.79, 0);
						glVertex3f(-4, 1.02 , -41);
						glVertex3f(-4, 1.02 , -39);	
						glVertex3f(-4, 0.02 , -39);
						glVertex3f(-4, 0.02, -41);
							
					glEnd();
					glPopMatrix();
				//kanan
					glPushMatrix();
					glBegin(GL_QUADS);
						glColor3f(0.6, 0.79, 0);
						glVertex3f(1, 1.02 , -41);
						glVertex3f(1, 1.02 , -39);	
						glVertex3f(1, 0.02 , -39);
						glVertex3f(1, 0.02, -41);
							
					glEnd();
					glPopMatrix();
			
			//kotak naro pistol
				//kanan 1
				glPushMatrix();
					glBegin(GL_QUADS);
						glColor3f(0.1, 0.1, 0.1);
						glVertex3f(-1, 3.02 , -41.01);	
						glVertex3f(0, 3.02 , -41.01);
						glVertex3f(0, 2.02, -41.01);
						glVertex3f(-1, 2.02 , -41.01);
					glEnd();
					glPopMatrix();
				
				//kanan 2
				glPushMatrix();
					glBegin(GL_QUADS);
						glColor3f(0.1, 0.1, 0.1);
						glVertex3f(-3, 3.02 , -41.01);	
						glVertex3f(-2, 3.02 , -41.01);
						glVertex3f(-2, 2.02, -41.01);
						glVertex3f(-3, 2.02 , -41.01);
					glEnd();
					glPopMatrix();
				
				//kiri 1
				glPushMatrix();
					glBegin(GL_QUADS);
						glColor3f(0.1, 0.1, 0.1);
						glVertex3f(-1, 3.02 , -38.99);	
						glVertex3f(0, 3.02 , -38.99);
						glVertex3f(0, 2.02, -38.99);
						glVertex3f(-1, 2.02 , -38.99);
					glEnd();
					glPopMatrix();
				
				//kiri 2
				glPushMatrix();
					glBegin(GL_QUADS);
						glColor3f(0.1, 0.1, 0.1);
						glVertex3f(-3, 3.02 , -38.99);	
						glVertex3f(-2, 3.02 , -38.99);
						glVertex3f(-2, 2.02, -38.99);
						glVertex3f(-3, 2.02 , -38.99);
					glEnd();
					glPopMatrix();
					
		//Pagar
			//persegi atas horizontal
			glPushMatrix();
			glBegin(GL_QUADS);
				glColor3f(0.75,0.75,0.75);
				glVertex3f(-30, 2 , -20);
				glVertex3f(30, 2 , -20);
				glVertex3f(30, 2 , -22);
				glVertex3f(-30, 2 , -22);
					
				glEnd();
			glPopMatrix();
			
			//persegi bawah horizontal
			glPushMatrix();
			glBegin(GL_QUADS);
				glColor3f(0.75,0.75,0.75);
				glVertex3f(-30, 1 , -20);
				glVertex3f(30, 1 , -20);
				glVertex3f(30, 1 , -22);
				glVertex3f(-30, 1 , -22);
					
				glEnd();
			glPopMatrix();
			
			//persegi vertikal
			glPushMatrix();
			glBegin(GL_QUADS);
				glColor3f(0,0,0);
				glVertex3f(-30, 2 , -21);
				glVertex3f(30, 2 , -21);
				glVertex3f(30, 0.01 , -21);
				glVertex3f(-30, 0.01 , -21);
					
				glEnd();
			glPopMatrix();
	
	//jalur tambahan
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.5,0.5);
		glVertex3f(-33, 0.01 , -20);
		glVertex3f(-33, 0.01 , -50);
		glVertex3f(-50, 0.01, -20);
		
	glEnd();
	
	glBegin(GL_POLYGON);
	
	glColor3f(0.5,0.5,0.5);
		glVertex3f(33, 0.01 , -20);
		glVertex3f(33, 0.01 , -50);
		glVertex3f(50, 0.01, -20);
		
	glEnd();
	
}
