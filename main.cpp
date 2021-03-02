/*
 *  main.cpp
 *  Additionsprogramm
 *
 *  Created by Markus Eberherr on 30.10.17.
 *  Copyright 2017 Privatanwender. All rights reserved.
 *
 */

#include "Additionsprogramm.h"
#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow frmAdditionsprogramm;
	frmAdditionsprogramm.show();
	
    return app.exec();
}
