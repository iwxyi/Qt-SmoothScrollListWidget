#include <QListWidgetItem>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    for (int i = 0; i < 200; i++)
    {
        new QListWidgetItem(QString::number(i), ui->listWidget);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

