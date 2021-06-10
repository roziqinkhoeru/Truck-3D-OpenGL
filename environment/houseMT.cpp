//#include <iostream>
//#include <stdlib.h>
//#ifdef __APPLE__
//#include <OpenGL/OpenGL.h>
//#include <GLUT/glut.h>
//#else
//#include <GL/glut.h>
//#endif
//#include "ImageLoader.h"
//#include "ImageLoader.cpp"
//
//float _angle = 0.0;
//GLuint _textureBrick, _textureDoor, _textureGrass, _textureRoof, _textureWindow, _textureSky;
//
//
//void houseMT(void) {
//
//    glEnable(GL_TEXTURE_2D);
//
//    // Sky
//    glPushMatrix();
//        glBindTexture(GL_TEXTURE_2D, _textureSky);
//        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
//        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//        glTranslatef(0,0,-10);
//        glBegin(GL_QUADS);
//            glTexCoord3f(0.0,1.0,0.1);  glVertex3f(-10,10,0);
//            glTexCoord3f(1.0,1.0,0.1);  glVertex3f(10,10,0);
//            glTexCoord3f(1.0,0.0,0.1);  glVertex3f(10,-10,0);
//            glTexCoord3f(0.0,0.0,0.1);  glVertex3f(-10,-10,0);
//        glEnd();
//    glPopMatrix();
//
//    // Grass
//    glPushMatrix();
//        glBindTexture(GL_TEXTURE_2D, _textureGrass);
//        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
//        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//        glTranslatef(0,0,-6);
//        glRotatef(_angle, 0.0, 1.0, 0.0);
//        glBegin(GL_QUADS);
//            glTexCoord3f(0.0,70.0,1);  glVertex3f(-50,-1.5,50);
//            glTexCoord3f(0.0,0.0,-1);  glVertex3f(-50,-1.5,-50);
//            glTexCoord3f(70.0,0.0,-1);  glVertex3f(50,-1.5,-50);
//            glTexCoord3f(70.0,70.0,1);  glVertex3f(50,-1.5,50);
//        glEnd();
//    glPopMatrix();
//
//     Front side
//    glPushMatrix();
//        glBindTexture(GL_TEXTURE_2D, _textureBrick);
//        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
//        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//        glTranslatef(0,0,-6);
//        glRotatef(_angle, 0.0, 1.0, 0.0);
//        glBegin(GL_QUADS);  // Wall
//            glTexCoord3f(0.0,2.0,0.1);  glVertex3f(-2,0,1);
//            glTexCoord3f(4.0,2.0,0.1);  glVertex3f(2,0,1);
//            glTexCoord3f(4.0,0.0,0.1);  glVertex3f(2,-1.5,1);
//            glTexCoord3f(0.0,0.0,0.1);  glVertex3f(-2,-1.5,1);
//        glEnd();
//
//        glBindTexture(GL_TEXTURE_2D, _textureRoof);
//        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
//        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//        glBegin(GL_QUADS);  // Roof
//            glTexCoord3f(0.0,2.0,0); glVertex3f(-2.2,0.5,0);
//            glTexCoord3f(4.0,2.0,0);glVertex3f(2.2,0.5,0);
//            glTexCoord3f(4.0,0.0,1.25); glVertex3f(2.2,-0.1,1.25);
//            glTexCoord3f(0.0,0.0,1.25); glVertex3f(-2.2,-0.1,1.25);
//        glEnd();
//
//        glBindTexture(GL_TEXTURE_2D, _textureDoor);
//        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
//        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//        glBegin(GL_QUADS);  // Door
//            glTexCoord3f(0.0,1.0,1.0001); glVertex3f(-0.3,-0.4,1.0001);
//            glTexCoord3f(1.0,1.0,1.0001); glVertex3f(0.3,-0.4,1.0001);
//            glTexCoord3f(1.0,0.0,1.0001); glVertex3f(0.3,-1.5,1.0001);
//            glTexCoord3f(0.0,0.0,1.0001); glVertex3f(-0.3,-1.5,1.0001);
//        glEnd();
//
//        glBindTexture(GL_TEXTURE_2D, _textureWindow);
//        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
//        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//        glBegin(GL_QUADS);  // Window Left
//            glTexCoord3f(0.0,1.0,1.0001); glVertex3f(-1.5,-0.3,1.0001);
//            glTexCoord3f(1.0,1.0,1.0001); glVertex3f(-0.75,-0.3,1.0001);
//            glTexCoord3f(1.0,0.0,1.0001); glVertex3f(-0.75,-0.8,1.0001);
//            glTexCoord3f(0.0,0.0,1.0001); glVertex3f(-1.5,-0.8,1.0001);
//        glEnd();
//
//        glBegin(GL_QUADS);  // Window Right
//            glTexCoord3f(0.0,1.0,1.0001); glVertex3f(1.5,-0.3,1.0001);
//            glTexCoord3f(1.0,1.0,1.0001); glVertex3f(0.75,-0.3,1.0001);
//            glTexCoord3f(1.0,0.0,1.0001); glVertex3f(0.75,-0.8,1.0001);
//            glTexCoord3f(0.0,0.0,1.0001); glVertex3f(1.5,-0.8,1.0001);
//        glEnd();
//    glPopMatrix();
//
//     Back side
//    glPushMatrix();
//        glEnable(GL_TEXTURE_2D);
//        glBindTexture(GL_TEXTURE_2D, _textureBrick);
//        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
//        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//        glTranslatef(0,0,-6);
//        glRotatef(_angle, 0.0, 1.0, 0.0);
//        glBegin(GL_QUADS);  // Wall
//            glTexCoord3f(0.0,2.0,-1);  glVertex3f(-2,0,-1);
//            glTexCoord3f(4.0,2.0,-1);  glVertex3f(2,0,-1);
//            glTexCoord3f(4.0,0.0,-1);  glVertex3f(2,-1.5,-1);
//            glTexCoord3f(0.0,0.0,-1);  glVertex3f(-2,-1.5,-1);
//        glEnd();
//
//        glBindTexture(GL_TEXTURE_2D, _textureRoof);
//        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
//        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//        glBegin(GL_QUADS);  // Roof
//            glTexCoord3f(0.0,2.0,0); glVertex3f(-2.2,0.5,0);
//            glTexCoord3f(4.0,2.0,0);glVertex3f(2.2,0.5,0);
//            glTexCoord3f(4.0,0.0,-1.25); glVertex3f(2.2,-0.1,-1.25);
//            glTexCoord3f(0.0,0.0,-1.25); glVertex3f(-2.2,-0.1,-1.25);
//        glEnd();
//
//        glBindTexture(GL_TEXTURE_2D, _textureWindow);
//        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
//        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//        glBegin(GL_QUADS);  // Window Left
//            glTexCoord3f(0.0,1.0,-1.0001); glVertex3f(-1.5,-0.3,-1.0001);
//            glTexCoord3f(1.0,1.0,-1.0001); glVertex3f(-0.75,-0.3,-1.0001);
//            glTexCoord3f(1.0,0.0,-1.0001); glVertex3f(-0.75,-0.8,-1.0001);
//            glTexCoord3f(0.0,0.0,-1.0001); glVertex3f(-1.5,-0.8,-1.0001);
//        glEnd();
//
//        glBegin(GL_QUADS);  // Window Right
//            glTexCoord3f(0.0,1.0,1.0001); glVertex3f(1.5,-0.3,-1.0001);
//            glTexCoord3f(1.0,1.0,1.0001); glVertex3f(0.75,-0.3,-1.0001);
//            glTexCoord3f(1.0,0.0,1.0001); glVertex3f(0.75,-0.8,-1.0001);
//            glTexCoord3f(0.0,0.0,1.0001); glVertex3f(1.5,-0.8,-1.0001);
//        glEnd();
//    glPopMatrix();
//
//     Right side
//    glPushMatrix();
//        glBindTexture(GL_TEXTURE_2D, _textureBrick);
//        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
//        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//        glTranslatef(0,0,-6);
//        glRotatef(_angle, 0.0, 1.0, 0.0);
//        glBegin(GL_QUADS);  // Wall
//            glTexCoord3f(0.0,2.0,1); glVertex3f(2,0,1);
//            glTexCoord3f(2.0,2.0,-1); glVertex3f(2,0,-1);
//            glTexCoord3f(2.0,0.0,-1); glVertex3f(2,-1.5,-1);
//            glTexCoord3f(0.0,0.0,1); glVertex3f(2,-1.5,1);
//        glEnd();
//
//        glBegin(GL_TRIANGLES);  // Wall Upper
//            glTexCoord3f(0.0,1.0,0); glVertex3f(2,0.5,0);
//            glTexCoord3f(1.0,0.0,1); glVertex3f(2,0,1);
//            glTexCoord3f(-1.0,0.0,-1); glVertex3f(2,0,-1);
//        glEnd();
//    glPopMatrix();
//
//     Left side
//    glPushMatrix();
//        glBindTexture(GL_TEXTURE_2D, _textureBrick);
//        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
//        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//        glTranslatef(0,0,-6);
//        glRotatef(_angle, 0.0, 1.0, 0.0);
//        glBegin(GL_QUADS);  // Wall
//            glTexCoord3f(0.0,2.0,1);    glVertex3f(-2,0,1);
//            glTexCoord3f(2.0,2.0,-1);    glVertex3f(-2,0,-1);
//            glTexCoord3f(2.0,0.0,-1);    glVertex3f(-2,-1.5,-1);
//            glTexCoord3f(0.0,0.0,1);    glVertex3f(-2,-1.5,1);
//        glEnd();
//
//        glBegin(GL_TRIANGLES);  // Wall Upper
//            glTexCoord3f(0.0,1.0,0);    glVertex3f(-2,0.5,0);
//            glTexCoord3f(1.0,0.0,1);    glVertex3f(-2,0,1);
//            glTexCoord3f(-1.0,0.0,-1);    glVertex3f(-2,0,-1);
//        glEnd();
//    glPopMatrix();
//}
//
//GLuint loadTexture(Image* image) {
//	GLuint textureId;
//	glGenTextures(1, &textureId);
//	glBindTexture(GL_TEXTURE_2D, textureId);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, image->width, image->height, 0, GL_RGB, GL_UNSIGNED_BYTE, image->pixels);
//	return textureId;
//}
//
//void Initialize() {
////	glClearColor(0.0, 0.0, 0.0, 1.0);
////	glMatrixMode(GL_PROJECTION);
////	glLoadIdentity();
////	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
//
//	Image* image = loadBMP("environment\\bricks.bmp");
//	_textureBrick = loadTexture(image);
//	image = loadBMP("environment\\door.bmp");
//	_textureDoor = loadTexture(image);
//	image = loadBMP("environment\\grass.bmp");
//	_textureGrass = loadTexture(image);
//	image = loadBMP("environment\\roof.bmp");
//	_textureRoof = loadTexture(image);
//	image = loadBMP("environment\\window.bmp");
//	_textureWindow = loadTexture(image);
//	image = loadBMP("environment\\sky.bmp");
//	_textureSky = loadTexture(image);
//	delete image;
//}
