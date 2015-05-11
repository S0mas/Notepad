#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "fileWindow.h"
#include <iostream>
#include <string>
#include <fstream>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    FileWindow fileWindow;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionNew_FIle_triggered();


    void on_actionQuit_triggered();

    void on_actionSave_triggered();

    void on_actionSave_as_triggered();

    void on_actionRedo_triggered();

    void on_actionUndo_triggered();

    void on_actionOpen_File_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
