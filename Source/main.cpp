#include <iostream>
#include "../Include/main_window.h"

using namespace std;

int main( int argc, char** argv )
{
	QApplication app(argc, argv);
	QCoreApplication::setApplicationName("Server");

	MainWindow* mainWindow = new MainWindow();
	mainWindow->show();

	return app.exec();
}