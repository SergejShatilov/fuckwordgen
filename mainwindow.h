/*
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *  @file: mainwindow.h
 *
 *  @author: Shatilov Sergej
 *
 *  @date: 16.03.2018
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *p_parent = 0);
    virtual ~MainWindow();
};

#endif // MAINWINDOW_H
