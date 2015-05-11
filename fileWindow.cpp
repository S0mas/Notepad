#include "fileWindow.h"
#include "ui_fileWindow.h"
#include "mainWindow.h"

FileWindow::FileWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FileWindow)
{
    ui->setupUi(this);
}

FileWindow::~FileWindow()
{
    delete ui;
}
