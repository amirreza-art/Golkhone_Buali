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
Person *personPtr = nullptr;
Store *storePtr = nullptr;

int main(int argc, char *argv[])
{
    //
    personPtr = new Person;
    storePtr = new Store;
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
