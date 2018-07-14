#ifndef SERVER_MAIN_WINDOW_HEADER
#define SERVER_MAIN_WINDOW_HEADER

#include <iostream>
#include <QtCore>
#include <QtNetwork>
#include <QtWidgets>
#include <QtGui>

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow();
	~MainWindow();

private:
	QString m_test;
};

#endif //SERVER_MAIN_WINDOW_HEADER