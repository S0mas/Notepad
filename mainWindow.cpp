#include "mainWindow.h"
#include "ui_mainWindow.h"
#include "fileWindow.h"
using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   // connect()
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_FIle_triggered()
{
            fileWindow.setModal(true);
            fileWindow.exec();
}



void MainWindow::on_actionQuit_triggered()
{
    close();
}

void MainWindow::on_actionSave_triggered()
{

}

void MainWindow::on_actionSave_as_triggered()
{

}

void MainWindow::on_actionRedo_triggered()
{

}

void MainWindow::on_actionUndo_triggered()
{

}

void MainWindow::on_actionOpen_File_triggered()
{
    fstream file;
    file.open("Cep.txt", ios::in);
    if(file.good()==true) ui->actionSave->setText("OK");
    else ui->actionSave->setText("BAD");
}
