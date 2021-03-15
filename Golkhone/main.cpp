#include <iostream>
#include <QApplication>
#include "profile.h"
#include "laboratory.h"
#include "shop.h"

using namespace std;


long int money = 100000000;

Person *personPtr = nullptr;
Store *storePtr = nullptr;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    personPtr = new Person;
    storePtr = new Store;

    Profile w;
    w.show();

    return a.exec();
}
