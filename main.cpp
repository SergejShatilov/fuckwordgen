/*
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *  @file: main.cpp
 *
 *  @author: Shatilov Sergej
 *
 *  @date: 16.03.2018
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
*/

#include "mainwindow.h"
#include <QApplication>

int main(int m_argc, char *p_argv[])
{
    QApplication application(m_argc, p_argv);
    application.setApplicationName("Fucking Word Generator");
    application.setApplicationVersion("1.0.0");

    MainWindow mainwindow;
    mainwindow.show();

    return application.exec();
}
