#ifndef SANDBOX_MY_GL_WINDOW_H
#define SANDBOX_MY_GL_WINDOW_H
#include <QtOpenGL\QGLWidget>
#include <Qt\qtimer.h>
class MyGLWindow : public QGLWidget
{
	Q_OBJECT
	GLuint vertexBufferID;
	QTimer myTimer;
protected:
	void initializeGL();
	void paintGL();
private slots:
	void myUpdate();

};

#endif