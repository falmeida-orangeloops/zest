#include <QApplication>
#include <QDialog>
#include "headers/Zest.h"
#include "ui_Zest.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
    
	Zest *zest = new Zest;
    zest->show();
    
	return app.exec();
}
