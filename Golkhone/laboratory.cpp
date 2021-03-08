#include "laboratory.h"
#include "profile.h"

extern Profile *ptr1;

class Profile;

Laboratory::Laboratory(QWidget *parent) : QWidget(parent)
{
    setBackground();

    WindowButtons();

    connect(profile, &QPushButton::clicked, this, &Laboratory::OnProfile);

    QPushButton *btn = new QPushButton("", this);
    btn->setGeometry(877,560,300,73);
    btn->setAutoFillBackground(true);
    QPalette palette = btn->palette();
    palette.setColor(QPalette::Window, QColor(Qt::black));
    btn->setPalette(palette);
    btn->setStyleSheet("background-color: rgb(170, 170, 127);");
    btn->setStyleSheet("background-color: #3cbaa2; solid black;");

    QPushButton *btn1 = new QPushButton("", this);
    btn1->setGeometry(552,560,300,73);
    btn1->setAutoFillBackground(true);
    QPalette palette1 = btn1->palette();
    palette1.setColor(QPalette::Window, QColor(Qt::black));
    btn1->setPalette(palette1);
    btn1->setStyleSheet("background-color: rgb(170, 170, 127);");
    btn1->setStyleSheet("background-color: #3cbaa2; solid black;");

    QPushButton *btn2 = new QPushButton("", this);
    btn2->setGeometry(227,560,300,73);
    btn2->setAutoFillBackground(true);
    QPalette palette2 = btn2->palette();
    palette2.setColor(QPalette::Window, QColor(Qt::black));
    btn2->setPalette(palette2);
    btn2->setStyleSheet("background-color: rgb(170, 170, 127);");
    btn2->setStyleSheet("background-color: #3cbaa2; solid black;");


}

void Laboratory::OnProfile()
{
    hide();
    ptr1->show();
    //Profile *w = new Profile;
    //w->show();
}

//void createExtractButtons();

void Laboratory::WindowButtons()
{
    profile = new QPushButton("prof", this);
    profile->setGeometry(1245,0,150,73);
    //profile->setStyleSheet("QPushButton{background:transparent;}");

    greenHouse = new QPushButton("gr", this);
    greenHouse->setGeometry(1095,0,150,73);

    store = new QPushButton("st", this);
    store->setGeometry(945,0,150,73);

    laboratory = new QPushButton("lab", this);
    laboratory->setGeometry(795,0,150,73);

}

void Laboratory::setBackground()
{

    QPixmap bkgnd("C://Users//Abisys//Desktop//nnn//labback1.png");
    QPalette palettee;
    palettee.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palettee);
    this->setFixedSize(bkgnd.rect().size());
    this->setWindowTitle("گلخونه");
}
