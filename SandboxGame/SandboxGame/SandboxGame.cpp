#include <qt\qapplication.h>
#include <QtGui\qwidget.h>
#include "myGLWindow.h"

int main(int argc, char* argv[]) {
	QApplication application(argc, argv);
	MyGLWindow myGlWindow;
	myGlWindow.show();
	return application.exec();
}