#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonAdd_clicked()
{

    secDialog = new SecDialog(this);
    secDialog->show();
}


void MainWindow::on_pushButton_clicked()
{
    //Here goes the remove button
    thirdDialog = new ThirdDialog(this);
    thirdDialog->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    //this one shows the inventory
    fourthDialog = new FourthDialog(this);
    fourthDialog->show();
}

