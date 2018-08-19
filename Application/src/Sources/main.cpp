#include "stdafx.h"
#include "Application.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Application::Get()->show();
	return a.exec();
}
