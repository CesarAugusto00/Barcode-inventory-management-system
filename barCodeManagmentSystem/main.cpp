#include "mainwindow.h"

#include <QApplication>
#include <iostream>

#include <vector>
#include <string>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

