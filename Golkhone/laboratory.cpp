#include "laboratory.h"
#include "profile.h"
#include "shop.h"

extern Profile *profilePtr;
extern Shop *shopPtr;
extern Person *personPtr;
extern Store *storePtr;

class Profile;

Laboratory::Laboratory(QWidget *parent) : QWidget(parent)
{
    setBackground();

    WindowButtons();

    connect(profile, &QPushButton::clicked, this, &Laboratory::OnProfile);
    connect(shop, &QPushButton::clicked, this, &Laboratory::OnShop);

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
    profilePtr->show();
}

void Laboratory::OnShop()
{
    hide();
    shopPtr->show();
}

//void createExtractButtons();

void Laboratory::WindowButtons()
{
    profile = new QPushButton("", this);
    profile->setGeometry(1245,0,150,73);
    QPixmap pixmap("C:/Users/Abisys/Desktop/nnn/menu14.png");
    QIcon ButtonIcon(pixmap);
    profile->setIcon(ButtonIcon);
    profile->setIconSize(pixmap.rect().size());
    profile->setFixedSize(pixmap.rect().size());

    greenHouse = new QPushButton("", this);
    greenHouse->setGeometry(1095,0,150,73);
    QPixmap pixmap1("C:/Users/Abisys/Desktop/nnn/menu05.png");
    QIcon ButtonIcon1(pixmap1);
    greenHouse->setIcon(ButtonIcon1);
    greenHouse->setIconSize(pixmap1.rect().size());
    greenHouse->setFixedSize(pixmap1.rect().size());

    shop = new QPushButton("", this);
    shop->setGeometry(945,0,150,73);
    QPixmap pixmap2("C:/Users/Abisys/Desktop/nnn/menu03.png");
    QIcon ButtonIcon2(pixmap2);
    shop->setIcon(ButtonIcon2);
    shop->setIconSize(pixmap2.rect().size());
    shop->setFixedSize(pixmap2.rect().size());

    laboratory = new QPushButton("", this);
    laboratory->setGeometry(795,0,150,73);
    QPixmap pixmap3("C:/Users/Abisys/Desktop/nnn/menu3.png");
    QIcon ButtonIcon3(pixmap3);
    laboratory->setIcon(ButtonIcon3);
    laboratory->setIconSize(pixmap3.rect().size());
    laboratory->setFixedSize(pixmap3.rect().size());

}

void Laboratory::setBackground()
{

    QPixmap bkgnd("C://Users//Abisys//Desktop//nnn//labback2.png");
    QPalette palettee;
    palettee.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palettee);
    this->setFixedSize(bkgnd.rect().size());
    this->setWindowTitle("گلخونه");
}
