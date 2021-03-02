/*
 *  Additionsprogramm.h
 *  Additionsprogramm
 *
 *  Created by Markus Eberherr on 30.10.17.
 *  Copyright 2017 Privatanwender. All rights reserved.
 *
 */
#ifndef ADDITIONSPROGRAMM_H
#define ADDITIONSPROGRAMM_H

#include <QWidget>
#include <QMainWindow>
#include "ui_Additionsprogramm.h"

QT_BEGIN_NAMESPACE
namespace Ui {
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
	{
		Q_OBJECT
		
	public:
        explicit MainWindow(QWidget *parent = 0);
        ~MainWindow();
		
		private slots:
		void additlion();
		
	private:
        //Ui_MainWindow ui;
         //Ui::Ui_MainWindow ui;
        Ui::MainWindow* ui;
	};
#endif // ADDITIONSPROGRAMM_H
