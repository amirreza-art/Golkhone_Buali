#include <iostream>
#include <QApplication>
#include "profile.h"
#include "laboratory.h"
#include <QDialog>
#include <QStackedWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>

using namespace std;


long int money = 100000;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Profile w;
    w.show();
    //Laboratory o;
    //o.show();
    //QStackedWidget p;
    //p.addWidget(&o);
    //p.currentWidget()->show();
    //p.show();
    return a.exec();
}

// 876 * 473
