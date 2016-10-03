#include <GL\glew.h>
#include "myGLWindow.h"
#include <cassert>
#include <math\Vector2D.h>
using Math::Vector2D;

static Vector2D verts[] =
{
	Vector2D(+0.0f, +0.1),
	Vector2D(-0.1f, -0.1f),
	Vector2D(+0.1f, -0.1f),
};

static const unsigned int NUM_VERTS = sizeof(verts) / sizeof(*verts);
void MyGLWindow::initializeGL()
{
	GLenum errorCode = glewInit();
	assert(errorCode == 0);


	glGenBuffers(1, &vertexBufferID);
	glBindBuffer(GL_ARRAY_BUFFER, vertexBufferID);

	

	glBufferData(GL_ARRAY_BUFFER, sizeof(verts), NULL, GL_DYNAMIC_DRAW);


	connect(&myTimer, SIGNAL(timeout()),
		this, SLOT(myUpdate()));
	myTimer.start(0);

}

void MyGLWindow::paintGL()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, 0);

	Vector2D shipPosition(0.5f, 0.5f);

	Vector2D translatedVerts[NUM_VERTS];

	for (unsigned int i = 0; i < NUM_VERTS; i++)
	{
		translatedVerts[i] = verts[i] + shipPosition;
	}
	glBufferSubData(GL_ARRAY_BUFFER, 0, sizeof(translatedVerts), translatedVerts);

	glDrawArrays(GL_TRIANGLES, 0, 3);
}
int debugCount = 0;
void MyGLWindow::myUpdate() {
	
}