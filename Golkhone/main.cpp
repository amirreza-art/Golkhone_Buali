#include <iostream>
#include <QApplication>
#include "profile.h"
#include "laboratory.h"
#include "shop.h"
#include <QDialog>
#include <QStackedWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>

using namespace std;


long int money = 100000;
/*
Laboratory *laboratoryPtr;
Shop *profilePtr;
Profile *shopPtr;*/

Person *personPtr = nullptr;
Store *storePtr = nullptr;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    personPtr = new Person;
    storePtr = new Store;
    /*
    Laboratory l;
    Shop s;*/

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
