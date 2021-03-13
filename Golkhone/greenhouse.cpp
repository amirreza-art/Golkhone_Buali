#include "greenhouse.h"
#include "laboratory.h"
#include "profile.h"
#include "shop.h"

extern Profile *profilePtr;
extern Shop *shopPtr;
extern Laboratory *laboratoryPtr;
extern Person *personPtr;
extern Store *storePtr;

GreenHouse::GreenHouse(QWidget *parent) : QWidget(parent)
{
    setBackground();

    WindowButtons();
    connect(profile, &QPushButton::clicked, this, &GreenHouse::OnProfile);
    connect(shop, &QPushButton::clicked, this, &GreenHouse::OnShop);
    connect(laboratory, &QPushButton::clicked, this, &GreenHouse::OnLaboratory);

    setInventory();

    setLockPic();

    //setEmptyPic();

}

void GreenHouse::setDahliaPic()
{
    dahlia1 = new QLabel(this);
    QPixmap pic("C:/Users/Abisys/Desktop/nnn/pic.png");
    dahlia1->setPixmap(pic);
    dahlia1->setFixedSize(pic.rect().size());
    dahlia1->setGeometry(1020,120,150,150);
    dahlia1->setVisible(false);

    dahlia2 = new QLabel(this);
    dahlia2->setPixmap(pic);
    dahlia2->setFixedSize(pic.rect().size());
    dahlia2->setGeometry(760,120,150,150);
    dahlia2->setVisible(false);

    dahlia3 = new QLabel(this);
    dahlia3->setPixmap(pic);
    dahlia3->setFixedSize(pic.rect().size());
    dahlia3->setGeometry(500,120,150,150);
    dahlia3->setVisible(false);

    dahlia4 = new QLabel(this);
    dahlia4->setPixmap(pic);
    dahlia4->setFixedSize(pic.rect().size());
    dahlia4->setGeometry(250,120,150,150);
    dahlia4->setVisible(false);

    dahlia5 = new QLabel(this);
    dahlia5->setPixmap(pic);
    dahlia5->setFixedSize(pic.rect().size());
    dahlia5->setGeometry(1020,410,150,150);
    dahlia5->setVisible(false);


    dahlia6 = new QLabel(this);
    dahlia6->setPixmap(pic);
    dahlia6->setFixedSize(pic.rect().size());
    dahlia6->setGeometry(760,410,150,150);
    dahlia6->setVisible(false);

    dahlia7 = new QLabel(this);
    dahlia7->setPixmap(pic);
    dahlia7->setFixedSize(pic.rect().size());
    dahlia7->setGeometry(500,410,150,150);
    dahlia7->setVisible(false);

    dahlia8 = new QLabel(this);
    dahlia8->setPixmap(pic);
    dahlia8->setFixedSize(pic.rect().size());
    dahlia8->setGeometry(250,410,150,150);
    dahlia8->setVisible(false);
}

void GreenHouse::setTulipPic()
{
    tulip1 = new QLabel(this);
    QPixmap pic("C:/Users/Abisys/Desktop/nnn/pic.png");
    tulip1->setPixmap(pic);
    tulip1->setFixedSize(pic.rect().size());
    tulip1->setGeometry(1020,120,150,150);
    tulip1->setVisible(false);

    tulip2 = new QLabel(this);
    tulip2->setPixmap(pic);
    tulip2->setFixedSize(pic.rect().size());
    tulip2->setGeometry(760,120,150,150);
    tulip2->setVisible(false);

    tulip3 = new QLabel(this);
    tulip3->setPixmap(pic);
    tulip3->setFixedSize(pic.rect().size());
    tulip3->setGeometry(500,120,150,150);
    tulip3->setVisible(false);

    tulip4 = new QLabel(this);
    tulip4->setPixmap(pic);
    tulip4->setFixedSize(pic.rect().size());
    tulip4->setGeometry(250,120,150,150);
    tulip4->setVisible(false);

    tulip5 = new QLabel(this);
    tulip5->setPixmap(pic);
    tulip5->setFixedSize(pic.rect().size());
    tulip5->setGeometry(1020,410,150,150);
    tulip5->setVisible(false);


    tulip6 = new QLabel(this);
    tulip6->setPixmap(pic);
    tulip6->setFixedSize(pic.rect().size());
    tulip6->setGeometry(760,410,150,150);
    tulip6->setVisible(false);

    tulip7 = new QLabel(this);
    tulip7->setPixmap(pic);
    tulip7->setFixedSize(pic.rect().size());
    tulip7->setGeometry(500,410,150,150);
    tulip7->setVisible(false);

    tulip8 = new QLabel(this);
    tulip8->setPixmap(pic);
    tulip8->setFixedSize(pic.rect().size());
    tulip8->setGeometry(250,410,150,150);
    tulip8->setVisible(false);
}

void GreenHouse::setTuberosePic()
{
    tuberose1 = new QLabel(this);
    QPixmap pic("C:/Users/Abisys/Desktop/nnn/pic.png");
    tuberose1->setPixmap(pic);
    tuberose1->setFixedSize(pic.rect().size());
    tuberose1->setGeometry(1020,120,150,150);
    tuberose1->setVisible(false);

    tuberose2 = new QLabel(this);
    tuberose2->setPixmap(pic);
    tuberose2->setFixedSize(pic.rect().size());
    tuberose2->setGeometry(760,120,150,150);
    tuberose2->setVisible(false);

    tuberose3 = new QLabel(this);
    tuberose3->setPixmap(pic);
    tuberose3->setFixedSize(pic.rect().size());
    tuberose3->setGeometry(500,120,150,150);
    tuberose3->setVisible(false);

    tuberose4 = new QLabel(this);
    tuberose4->setPixmap(pic);
    tuberose4->setFixedSize(pic.rect().size());
    tuberose4->setGeometry(250,120,150,150);
    tuberose4->setVisible(false);

    tuberose5 = new QLabel(this);
    tuberose5->setPixmap(pic);
    tuberose5->setFixedSize(pic.rect().size());
    tuberose5->setGeometry(1020,410,150,150);
    tuberose5->setVisible(false);


    tuberose6 = new QLabel(this);
    tuberose6->setPixmap(pic);
    tuberose6->setFixedSize(pic.rect().size());
    tuberose6->setGeometry(760,410,150,150);
    tuberose6->setVisible(false);

    tuberose7 = new QLabel(this);
    tuberose7->setPixmap(pic);
    tuberose7->setFixedSize(pic.rect().size());
    tuberose7->setGeometry(500,410,150,150);
    tuberose7->setVisible(false);

    tuberose8 = new QLabel(this);
    tuberose8->setPixmap(pic);
    tuberose8->setFixedSize(pic.rect().size());
    tuberose8->setGeometry(250,410,150,150);
    tuberose8->setVisible(false);
}

void GreenHouse::setAmaryllisPic()
{
    amaryllis1 = new QLabel(this);
    QPixmap pic("C:/Users/Abisys/Desktop/nnn/pic.png");
    amaryllis1->setPixmap(pic);
    amaryllis1->setFixedSize(pic.rect().size());
    amaryllis1->setGeometry(1020,120,150,150);
    amaryllis1->setVisible(false);

    amaryllis2 = new QLabel(this);
    amaryllis2->setPixmap(pic);
    amaryllis2->setFixedSize(pic.rect().size());
    amaryllis2->setGeometry(760,120,150,150);
    amaryllis2->setVisible(false);

    amaryllis3 = new QLabel(this);
    amaryllis3->setPixmap(pic);
    amaryllis3->setFixedSize(pic.rect().size());
    amaryllis3->setGeometry(500,120,150,150);
    amaryllis3->setVisible(false);

    amaryllis4 = new QLabel(this);
    amaryllis4->setPixmap(pic);
    amaryllis4->setFixedSize(pic.rect().size());
    amaryllis4->setGeometry(250,120,150,150);
    amaryllis4->setVisible(false);

    amaryllis5 = new QLabel(this);
    amaryllis5->setPixmap(pic);
    amaryllis5->setFixedSize(pic.rect().size());
    amaryllis5->setGeometry(1020,410,150,150);
    amaryllis5->setVisible(false);


    amaryllis6 = new QLabel(this);
    amaryllis6->setPixmap(pic);
    amaryllis6->setFixedSize(pic.rect().size());
    amaryllis6->setGeometry(760,410,150,150);
    amaryllis6->setVisible(false);

    amaryllis7 = new QLabel(this);
    amaryllis7->setPixmap(pic);
    amaryllis7->setFixedSize(pic.rect().size());
    amaryllis7->setGeometry(500,410,150,150);
    amaryllis7->setVisible(false);

    amaryllis8 = new QLabel(this);
    amaryllis8->setPixmap(pic);
    amaryllis8->setFixedSize(pic.rect().size());
    amaryllis8->setGeometry(250,410,150,150);
    amaryllis8->setVisible(false);
}

void GreenHouse::setHyacinthPic()
{
    hyacinth1 = new QLabel(this);
    QPixmap pic("C:/Users/Abisys/Desktop/nnn/pic.png");
    hyacinth1->setPixmap(pic);
    hyacinth1->setFixedSize(pic.rect().size());
    hyacinth1->setGeometry(1020,120,150,150);
    hyacinth1->setVisible(false);

    hyacinth2 = new QLabel(this);
    hyacinth2->setPixmap(pic);
    hyacinth2->setFixedSize(pic.rect().size());
    hyacinth2->setGeometry(760,120,150,150);
    hyacinth2->setVisible(false);

    hyacinth3 = new QLabel(this);
    hyacinth3->setPixmap(pic);
    hyacinth3->setFixedSize(pic.rect().size());
    hyacinth3->setGeometry(500,120,150,150);
    hyacinth3->setVisible(false);

    hyacinth4 = new QLabel(this);
    hyacinth4->setPixmap(pic);
    hyacinth4->setFixedSize(pic.rect().size());
    hyacinth4->setGeometry(250,120,150,150);
    hyacinth4->setVisible(false);

    hyacinth5 = new QLabel(this);
    hyacinth5->setPixmap(pic);
    hyacinth5->setFixedSize(pic.rect().size());
    hyacinth5->setGeometry(1020,410,150,150);
    hyacinth5->setVisible(false);


    hyacinth6 = new QLabel(this);
    hyacinth6->setPixmap(pic);
    hyacinth6->setFixedSize(pic.rect().size());
    hyacinth6->setGeometry(760,410,150,150);
    hyacinth6->setVisible(false);

    hyacinth7 = new QLabel(this);
    hyacinth7->setPixmap(pic);
    hyacinth7->setFixedSize(pic.rect().size());
    hyacinth7->setGeometry(500,410,150,150);
    hyacinth7->setVisible(false);

    hyacinth8 = new QLabel(this);
    hyacinth8->setPixmap(pic);
    hyacinth8->setFixedSize(pic.rect().size());
    hyacinth8->setGeometry(250,410,150,150);
    hyacinth8->setVisible(false);empty1 = new QLabel(this);
}

void GreenHouse::setMagnoliaPic()
{
    magnolia1 = new QLabel(this);
    QPixmap pic("C:/Users/Abisys/Desktop/nnn/pic.png");
    magnolia1->setPixmap(pic);
    magnolia1->setFixedSize(pic.rect().size());
    magnolia1->setGeometry(1020,120,150,150);
    magnolia1->setVisible(false);

    magnolia2 = new QLabel(this);
    magnolia2->setPixmap(pic);
    magnolia2->setFixedSize(pic.rect().size());
    magnolia2->setGeometry(760,120,150,150);
    magnolia2->setVisible(false);

    magnolia3 = new QLabel(this);
    magnolia3->setPixmap(pic);
    magnolia3->setFixedSize(pic.rect().size());
    magnolia3->setGeometry(500,120,150,150);
    magnolia3->setVisible(false);

    magnolia4 = new QLabel(this);
    magnolia4->setPixmap(pic);
    magnolia4->setFixedSize(pic.rect().size());
    magnolia4->setGeometry(250,120,150,150);
    magnolia4->setVisible(false);

    magnolia5 = new QLabel(this);
    magnolia5->setPixmap(pic);
    magnolia5->setFixedSize(pic.rect().size());
    magnolia5->setGeometry(1020,410,150,150);
    magnolia5->setVisible(false);


    magnolia6 = new QLabel(this);
    magnolia6->setPixmap(pic);
    magnolia6->setFixedSize(pic.rect().size());
    magnolia6->setGeometry(760,410,150,150);
    magnolia6->setVisible(false);

    magnolia7 = new QLabel(this);
    magnolia7->setPixmap(pic);
    magnolia7->setFixedSize(pic.rect().size());
    magnolia7->setGeometry(500,410,150,150);
    magnolia7->setVisible(false);

    magnolia8 = new QLabel(this);
    magnolia8->setPixmap(pic);
    magnolia8->setFixedSize(pic.rect().size());
    magnolia8->setGeometry(250,410,150,150);
    magnolia8->setVisible(false);
}

void GreenHouse::seLiliumPic()
{
    lilium1 = new QLabel(this);
    QPixmap pic("C:/Users/Abisys/Desktop/nnn/pic.png");
    lilium1->setPixmap(pic);
    lilium1->setFixedSize(pic.rect().size());
    lilium1->setGeometry(1020,120,150,150);
    lilium1->setVisible(false);

    lilium2 = new QLabel(this);
    lilium2->setPixmap(pic);
    lilium2->setFixedSize(pic.rect().size());
    lilium2->setGeometry(760,120,150,150);
    lilium2->setVisible(false);

    lilium3 = new QLabel(this);
    lilium3->setPixmap(pic);
    lilium3->setFixedSize(pic.rect().size());
    lilium3->setGeometry(500,120,150,150);
    lilium3->setVisible(false);

    lilium4 = new QLabel(this);
    lilium4->setPixmap(pic);
    lilium4->setFixedSize(pic.rect().size());
    lilium4->setGeometry(250,120,150,150);
    lilium4->setVisible(false);

    lilium5 = new QLabel(this);
    lilium5->setPixmap(pic);
    lilium5->setFixedSize(pic.rect().size());
    lilium5->setGeometry(1020,410,150,150);
    lilium5->setVisible(false);


    lilium6 = new QLabel(this);
    lilium6->setPixmap(pic);
    lilium6->setFixedSize(pic.rect().size());
    lilium6->setGeometry(760,410,150,150);
    lilium6->setVisible(false);

    lilium7 = new QLabel(this);
    lilium7->setPixmap(pic);
    lilium7->setFixedSize(pic.rect().size());
    lilium7->setGeometry(500,410,150,150);
    lilium7->setVisible(false);

    lilium8 = new QLabel(this);
    lilium8->setPixmap(pic);
    lilium8->setFixedSize(pic.rect().size());
    lilium8->setGeometry(250,410,150,150);
    lilium8->setVisible(false);
}

void GreenHouse::setOrchidPic()
{
    orchid1 = new QLabel(this);
    QPixmap pic("C:/Users/Abisys/Desktop/nnn/pic.png");
    orchid1->setPixmap(pic);
    orchid1->setFixedSize(pic.rect().size());
    orchid1->setGeometry(1020,120,150,150);
    orchid1->setVisible(false);

    orchid2 = new QLabel(this);
    orchid2->setPixmap(pic);
    orchid2->setFixedSize(pic.rect().size());
    orchid2->setGeometry(760,120,150,150);
    orchid2->setVisible(false);

    orchid3 = new QLabel(this);
    orchid3->setPixmap(pic);
    orchid3->setFixedSize(pic.rect().size());
    orchid3->setGeometry(500,120,150,150);
    orchid3->setVisible(false);

    orchid4 = new QLabel(this);
    orchid4->setPixmap(pic);
    orchid4->setFixedSize(pic.rect().size());
    orchid4->setGeometry(250,120,150,150);
    orchid4->setVisible(false);

    orchid5 = new QLabel(this);
    orchid5->setPixmap(pic);
    orchid5->setFixedSize(pic.rect().size());
    orchid5->setGeometry(1020,410,150,150);
    orchid5->setVisible(false);


    orchid6 = new QLabel(this);
    orchid6->setPixmap(pic);
    orchid6->setFixedSize(pic.rect().size());
    orchid6->setGeometry(760,410,150,150);
    orchid6->setVisible(false);

    orchid7 = new QLabel(this);
    orchid7->setPixmap(pic);
    orchid7->setFixedSize(pic.rect().size());
    orchid7->setGeometry(500,410,150,150);
    orchid7->setVisible(false);

    orchid8 = new QLabel(this);
    orchid8->setPixmap(pic);
    orchid8->setFixedSize(pic.rect().size());
    orchid8->setGeometry(250,410,150,150);
    orchid8->setVisible(false);
}

void GreenHouse::setOrdinaryPic()
{
    ordinary1 = new QLabel(this);
    QPixmap pic("C:/Users/Abisys/Desktop/nnn/pic.png");
    ordinary1->setPixmap(pic);
    ordinary1->setFixedSize(pic.rect().size());
    ordinary1->setGeometry(1020,120,150,150);
    ordinary1->setVisible(false);

    ordinary2 = new QLabel(this);
    ordinary2->setPixmap(pic);
    ordinary2->setFixedSize(pic.rect().size());
    ordinary2->setGeometry(760,120,150,150);
    ordinary2->setVisible(false);

    ordinary3 = new QLabel(this);
    ordinary3->setPixmap(pic);
    ordinary3->setFixedSize(pic.rect().size());
    ordinary3->setGeometry(500,120,150,150);
    ordinary3->setVisible(false);

    ordinary4 = new QLabel(this);
    ordinary4->setPixmap(pic);
    ordinary4->setFixedSize(pic.rect().size());
    ordinary4->setGeometry(250,120,150,150);
    ordinary4->setVisible(false);

    ordinary5 = new QLabel(this);
    ordinary5->setPixmap(pic);
    ordinary5->setFixedSize(pic.rect().size());
    ordinary5->setGeometry(1020,410,150,150);
    ordinary5->setVisible(false);


    ordinary6 = new QLabel(this);
    ordinary6->setPixmap(pic);
    ordinary6->setFixedSize(pic.rect().size());
    ordinary6->setGeometry(760,410,150,150);
    ordinary6->setVisible(false);

    ordinary7 = new QLabel(this);
    ordinary7->setPixmap(pic);
    ordinary7->setFixedSize(pic.rect().size());
    ordinary7->setGeometry(500,410,150,150);
    ordinary7->setVisible(false);

    ordinary8 = new QLabel(this);
    ordinary8->setPixmap(pic);
    ordinary8->setFixedSize(pic.rect().size());
    ordinary8->setGeometry(250,410,150,150);
    ordinary8->setVisible(false);
}

void GreenHouse::setOrdinaryBudPic()
{
    ordinaryBud1 = new QLabel(this);
    QPixmap pic("C:/Users/Abisys/Desktop/nnn/pic.png");
    ordinaryBud1->setPixmap(pic);
    ordinaryBud1->setFixedSize(pic.rect().size());
    ordinaryBud1->setGeometry(1020,120,150,150);
    ordinaryBud1->setVisible(false);

    ordinaryBud2 = new QLabel(this);
    ordinaryBud2->setPixmap(pic);
    ordinaryBud2->setFixedSize(pic.rect().size());
    ordinaryBud2->setGeometry(760,120,150,150);
    ordinaryBud2->setVisible(false);

    ordinaryBud3 = new QLabel(this);
    ordinaryBud3->setPixmap(pic);
    ordinaryBud3->setFixedSize(pic.rect().size());
    ordinaryBud3->setGeometry(500,120,150,150);
    ordinaryBud3->setVisible(false);

    ordinaryBud4 = new QLabel(this);
    ordinaryBud4->setPixmap(pic);
    ordinaryBud4->setFixedSize(pic.rect().size());
    ordinaryBud4->setGeometry(250,120,150,150);
    ordinaryBud4->setVisible(false);

    ordinaryBud5 = new QLabel(this);
    ordinaryBud5->setPixmap(pic);
    ordinaryBud5->setFixedSize(pic.rect().size());
    ordinaryBud5->setGeometry(1020,410,150,150);
    ordinaryBud5->setVisible(false);


    ordinaryBud6 = new QLabel(this);
    ordinaryBud6->setPixmap(pic);
    ordinaryBud6->setFixedSize(pic.rect().size());
    ordinaryBud6->setGeometry(760,410,150,150);
    ordinaryBud6->setVisible(false);

    ordinaryBud7 = new QLabel(this);
    ordinaryBud7->setPixmap(pic);
    ordinaryBud7->setFixedSize(pic.rect().size());
    ordinaryBud7->setGeometry(500,410,150,150);
    ordinaryBud7->setVisible(false);

    ordinaryBud8 = new QLabel(this);
    ordinaryBud8->setPixmap(pic);
    ordinaryBud8->setFixedSize(pic.rect().size());
    ordinaryBud8->setGeometry(250,410,150,150);
    ordinaryBud8->setVisible(false);
}

void GreenHouse::setOrnamentalPic()
{
    ornamental1 = new QLabel(this);
    QPixmap pic("C:/Users/Abisys/Desktop/nnn/pic.png");
    ornamental1->setPixmap(pic);
    ornamental1->setFixedSize(pic.rect().size());
    ornamental1->setGeometry(1020,120,150,150);
    ornamental1->setVisible(false);

    ornamental2 = new QLabel(this);
    ornamental2->setPixmap(pic);
    ornamental2->setFixedSize(pic.rect().size());
    ornamental2->setGeometry(760,120,150,150);
    ornamental2->setVisible(false);

    ornamental3 = new QLabel(this);
    ornamental3->setPixmap(pic);
    ornamental3->setFixedSize(pic.rect().size());
    ornamental3->setGeometry(500,120,150,150);
    ornamental3->setVisible(false);

    ornamental4 = new QLabel(this);
    ornamental4->setPixmap(pic);
    ornamental4->setFixedSize(pic.rect().size());
    ornamental4->setGeometry(250,120,150,150);
    ornamental4->setVisible(false);

    ornamental5 = new QLabel(this);
    ornamental5->setPixmap(pic);
    ornamental5->setFixedSize(pic.rect().size());
    ornamental5->setGeometry(1020,410,150,150);
    ornamental5->setVisible(false);


    ornamental6 = new QLabel(this);
    ornamental6->setPixmap(pic);
    ornamental6->setFixedSize(pic.rect().size());
    ornamental6->setGeometry(760,410,150,150);
    ornamental6->setVisible(false);

    ornamental7 = new QLabel(this);
    ornamental7->setPixmap(pic);
    ornamental7->setFixedSize(pic.rect().size());
    ornamental7->setGeometry(500,410,150,150);
    ornamental7->setVisible(false);

    ornamental8 = new QLabel(this);
    ornamental8->setPixmap(pic);
    ornamental8->setFixedSize(pic.rect().size());
    ornamental8->setGeometry(250,410,150,150);
    ornamental8->setVisible(false);
}

void GreenHouse::setOrnamentalBudPic()
{
    ornamentalBud1 = new QLabel(this);
    QPixmap pic("C:/Users/Abisys/Desktop/nnn/pic.png");
    ornamentalBud1->setPixmap(pic);
    ornamentalBud1->setFixedSize(pic.rect().size());
    ornamentalBud1->setGeometry(1020,120,150,150);
    ornamentalBud1->setVisible(false);

    ornamentalBud2 = new QLabel(this);
    ornamentalBud2->setPixmap(pic);
    ornamentalBud2->setFixedSize(pic.rect().size());
    ornamentalBud2->setGeometry(760,120,150,150);
    ornamentalBud2->setVisible(false);

    ornamentalBud3 = new QLabel(this);
    ornamentalBud3->setPixmap(pic);
    ornamentalBud3->setFixedSize(pic.rect().size());
    ornamentalBud3->setGeometry(500,120,150,150);
    ornamentalBud3->setVisible(false);

    ornamentalBud4 = new QLabel(this);
    ornamentalBud4->setPixmap(pic);
    ornamentalBud4->setFixedSize(pic.rect().size());
    ornamentalBud4->setGeometry(250,120,150,150);
    ornamentalBud4->setVisible(false);

    ornamentalBud5 = new QLabel(this);
    ornamentalBud5->setPixmap(pic);
    ornamentalBud5->setFixedSize(pic.rect().size());
    ornamentalBud5->setGeometry(1020,410,150,150);
    ornamentalBud5->setVisible(false);


    ornamentalBud6 = new QLabel(this);
    ornamentalBud6->setPixmap(pic);
    ornamentalBud6->setFixedSize(pic.rect().size());
    ornamentalBud6->setGeometry(760,410,150,150);
    ornamentalBud6->setVisible(false);

    ornamentalBud7 = new QLabel(this);
    ornamentalBud7->setPixmap(pic);
    ornamentalBud7->setFixedSize(pic.rect().size());
    ornamentalBud7->setGeometry(500,410,150,150);
    ornamentalBud7->setVisible(false);

    ornamentalBud8 = new QLabel(this);
    ornamentalBud8->setPixmap(pic);
    ornamentalBud8->setFixedSize(pic.rect().size());
    ornamentalBud8->setGeometry(250,410,150,150);
    ornamentalBud8->setVisible(false);
}

void GreenHouse::setOrnamentalFlowerBudPic()
{
    ornamentalFlowerBud1 = new QLabel(this);
    QPixmap pic("C:/Users/Abisys/Desktop/nnn/ma.png");
    ornamentalFlowerBud1->setPixmap(pic);
    ornamentalFlowerBud1->setFixedSize(pic.rect().size());
    ornamentalFlowerBud1->setGeometry(1020,120,150,150);
    ornamentalFlowerBud1->setVisible(false);

    ornamentalFlowerBud2 = new QLabel(this);
    ornamentalFlowerBud2->setPixmap(pic);
    ornamentalFlowerBud2->setFixedSize(pic.rect().size());
    ornamentalFlowerBud2->setGeometry(760,120,150,150);
    ornamentalFlowerBud2->setVisible(false);

    ornamentalFlowerBud3 = new QLabel(this);
    ornamentalFlowerBud3->setPixmap(pic);
    ornamentalFlowerBud3->setFixedSize(pic.rect().size());
    ornamentalFlowerBud3->setGeometry(500,120,150,150);
    ornamentalFlowerBud3->setVisible(false);

    ornamentalFlowerBud4 = new QLabel(this);
    ornamentalFlowerBud4->setPixmap(pic);
    ornamentalFlowerBud4->setFixedSize(pic.rect().size());
    ornamentalFlowerBud4->setGeometry(250,120,150,150);
    ornamentalFlowerBud4->setVisible(false);

    ornamentalFlowerBud5 = new QLabel(this);
    ornamentalFlowerBud5->setPixmap(pic);
    ornamentalFlowerBud5->setFixedSize(pic.rect().size());
    ornamentalFlowerBud5->setGeometry(1020,410,150,150);
    ornamentalFlowerBud5->setVisible(false);


    ornamentalFlowerBud6 = new QLabel(this);
    ornamentalFlowerBud6->setPixmap(pic);
    ornamentalFlowerBud6->setFixedSize(pic.rect().size());
    ornamentalFlowerBud6->setGeometry(760,410,150,150);
    ornamentalFlowerBud6->setVisible(false);

    ornamentalFlowerBud7 = new QLabel(this);
    ornamentalFlowerBud7->setPixmap(pic);
    ornamentalFlowerBud7->setFixedSize(pic.rect().size());
    ornamentalFlowerBud7->setGeometry(500,410,150,150);
    ornamentalFlowerBud7->setVisible(false);

    ornamentalFlowerBud8 = new QLabel(this);
    ornamentalFlowerBud8->setPixmap(pic);
    ornamentalFlowerBud8->setFixedSize(pic.rect().size());
    ornamentalFlowerBud8->setGeometry(250,410,150,150);
    ornamentalFlowerBud8->setVisible(false);
}

void GreenHouse::setRarePic()
{
    rare1 = new QLabel(this);
    QPixmap pic("C:/Users/Abisys/Desktop/nnn/mar.png");
    rare1->setPixmap(pic);
    rare1->setFixedSize(pic.rect().size());
    rare1->setGeometry(1020,120,150,150);
    rare1->setVisible(false);

    rare2 = new QLabel(this);
    rare2->setPixmap(pic);
    rare2->setFixedSize(pic.rect().size());
    rare2->setGeometry(760,120,150,150);
    rare2->setVisible(false);

    rare3 = new QLabel(this);
    rare3->setPixmap(pic);
    rare3->setFixedSize(pic.rect().size());
    rare3->setGeometry(500,120,150,150);
    rare3->setVisible(false);

    rare4 = new QLabel(this);
    rare4->setPixmap(pic);
    rare4->setFixedSize(pic.rect().size());
    rare4->setGeometry(250,120,150,150);
    rare4->setVisible(false);

    rare5 = new QLabel(this);
    rare5->setPixmap(pic);
    rare5->setFixedSize(pic.rect().size());
    rare5->setGeometry(1020,410,150,150);
    rare5->setVisible(false);


    rare6 = new QLabel(this);
    rare6->setPixmap(pic);
    rare6->setFixedSize(pic.rect().size());
    rare6->setGeometry(760,410,150,150);
    rare6->setVisible(false);

    rare7 = new QLabel(this);
    rare7->setPixmap(pic);
    rare7->setFixedSize(pic.rect().size());
    rare7->setGeometry(500,410,150,150);
    rare7->setVisible(false);

    rare8 = new QLabel(this);
    rare8->setPixmap(pic);
    rare8->setFixedSize(pic.rect().size());
    rare8->setGeometry(250,410,150,150);
    rare8->setVisible(false);
}

void GreenHouse::setRareBudPic()
{
    rareBud1 = new QLabel(this);
    QPixmap pic("C:/Users/Abisys/Desktop/nnn/mar.png");
    rareBud1->setPixmap(pic);
    rareBud1->setFixedSize(pic.rect().size());
    rareBud1->setGeometry(1020,120,150,150);
    rareBud1->setVisible(false);

    rareBud2 = new QLabel(this);
    rareBud2->setPixmap(pic);
    rareBud2->setFixedSize(pic.rect().size());
    rareBud2->setGeometry(760,120,150,150);
    rareBud2->setVisible(false);

    rareBud3 = new QLabel(this);
    rareBud3->setPixmap(pic);
    rareBud3->setFixedSize(pic.rect().size());
    rareBud3->setGeometry(500,120,150,150);
    rareBud3->setVisible(false);

    rareBud4 = new QLabel(this);
    rareBud4->setPixmap(pic);
    rareBud4->setFixedSize(pic.rect().size());
    rareBud4->setGeometry(250,120,150,150);
    rareBud4->setVisible(false);

    rareBud5 = new QLabel(this);
    rareBud5->setPixmap(pic);
    rareBud5->setFixedSize(pic.rect().size());
    rareBud5->setGeometry(1020,410,150,150);
    rareBud5->setVisible(false);


    rareBud6 = new QLabel(this);
    rareBud6->setPixmap(pic);
    rareBud6->setFixedSize(pic.rect().size());
    rareBud6->setGeometry(760,410,150,150);
    rareBud6->setVisible(false);

    rareBud7 = new QLabel(this);
    rareBud7->setPixmap(pic);
    rareBud7->setFixedSize(pic.rect().size());
    rareBud7->setGeometry(500,410,150,150);
    rareBud7->setVisible(false);

    rareBud8 = new QLabel(this);
    rareBud8->setPixmap(pic);
    rareBud8->setFixedSize(pic.rect().size());
    rareBud8->setGeometry(250,410,150,150);
    rareBud8->setVisible(false);
}

void GreenHouse::setEmptyPic()
{

    empty1 = new QLabel(this);
    QPixmap pic("C:/Users/Abisys/Desktop/nnn/pic.png");
    empty1->setPixmap(pic);
    empty1->setFixedSize(pic.rect().size());
    empty1->setGeometry(1020,120,150,150);
    empty1->setVisible(false);

    empty2 = new QLabel(this);
    empty2->setPixmap(pic);
    empty2->setFixedSize(pic.rect().size());
    empty2->setGeometry(760,120,150,150);
    empty2->setVisible(false);

    empty3 = new QLabel(this);
    empty3->setPixmap(pic);
    empty3->setFixedSize(pic.rect().size());
    empty3->setGeometry(500,120,150,150);
    empty3->setVisible(false);

    empty4 = new QLabel(this);
    empty4->setPixmap(pic);
    empty4->setFixedSize(pic.rect().size());
    empty4->setGeometry(250,120,150,150);
    empty4->setVisible(false);

    empty5 = new QLabel(this);
    empty5->setPixmap(pic);
    empty5->setFixedSize(pic.rect().size());
    empty5->setGeometry(1020,410,150,150);
    empty5->setVisible(false);


    empty6 = new QLabel(this);
    empty6->setPixmap(pic);
    empty6->setFixedSize(pic.rect().size());
    empty6->setGeometry(760,410,150,150);
    empty6->setVisible(false);

    empty7 = new QLabel(this);
    empty7->setPixmap(pic);
    empty7->setFixedSize(pic.rect().size());
    empty7->setGeometry(500,410,150,150);
    empty7->setVisible(false);

    empty8 = new QLabel(this);
    empty8->setPixmap(pic);
    empty8->setFixedSize(pic.rect().size());
    empty8->setGeometry(250,410,150,150);
    empty8->setVisible(false);
}

void GreenHouse::setLockPic()
{
    lock1 = new QLabel(this);
    QPixmap pic("C:/Users/Abisys/Desktop/nnn/khali.png");
    lock1->setPixmap(pic);
    lock1->setFixedSize(pic.rect().size());
    lock1->setGeometry(1020,120,150,150);

    lock2 = new QLabel(this);
    lock2->setPixmap(pic);
    lock2->setFixedSize(pic.rect().size());
    lock2->setGeometry(760,120,150,150);

    lock3 = new QLabel(this);
    lock3->setPixmap(pic);
    lock3->setFixedSize(pic.rect().size());
    lock3->setGeometry(500,120,150,150);

    lock4 = new QLabel(this);
    lock4->setPixmap(pic);
    lock4->setFixedSize(pic.rect().size());
    lock4->setGeometry(250,120,150,150);

    lock5 = new QLabel(this);
    lock5->setPixmap(pic);
    lock5->setFixedSize(pic.rect().size());
    lock5->setGeometry(1020,410,150,150);


    lock6 = new QLabel(this);
    lock6->setPixmap(pic);
    lock6->setFixedSize(pic.rect().size());
    lock6->setGeometry(760,410,150,150);

    lock7 = new QLabel(this);
    lock7->setPixmap(pic);
    lock7->setFixedSize(pic.rect().size());
    lock7->setGeometry(500,410,150,150);

    lock8 = new QLabel(this);
    lock8->setPixmap(pic);
    lock8->setFixedSize(pic.rect().size());
    lock8->setGeometry(250,410,150,150);
}

void GreenHouse::setInventory()
{
    waterLabel = new QLabel("ذخیره آب: ", this);
    waterLabel->setGeometry(1000,645,60,150);
    waterLabelIN = new QLabel(this);
    waterLabelIN->setText(QString::number(personPtr->get_Water_count()));
    waterLabelIN->setGeometry(975,645,60,150);

    soilLabel = new QLabel("ذخیره خاک:", this);
    soilLabel->setGeometry(800,645,70,150);
    soilLabelIN = new QLabel(this);
    soilLabelIN->setText(QString::number(personPtr->get_Soil_count()));
    soilLabelIN->setGeometry(775,645,60,150);

    sprayingMaterialLabel = new QLabel("ماده سمپاشی:", this);
    sprayingMaterialLabel->setGeometry(530,645,90,150);
    sprayingMaterialLabelIN = new QLabel(this);
    sprayingMaterialLabelIN->setText(QString::number(personPtr->get_SprayingMaterial_count()));
    sprayingMaterialLabelIN->setGeometry(505,645,60,150);

    extractsLabel = new QLabel("عصاره ها:", this);
    extractsLabel->setGeometry(300,645,70,150);
    extractsLabelIN = new QLabel(this);
    unsigned int sum = personPtr->get_LiliumExtract_count()
                     + personPtr->get_MagnoliaExtract_count()
                     + personPtr->get_OrchidExtract_count();
    extractsLabelIN->setText(QString::number(sum));
    extractsLabelIN->setGeometry(280,645,60,150);
}

void GreenHouse::OnProfile()
{
    hide();
    profilePtr->show();
}

void GreenHouse::OnShop()
{
    hide();
    shopPtr->show();
}

void GreenHouse::OnLaboratory()
{
    hide();
    laboratoryPtr->show();
}

void GreenHouse::WindowButtons()
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

void GreenHouse::setBackground()
{

    QPixmap bkgnd("C://Users//Abisys//Desktop//nnn//ghback.png");
    QPalette palettee;
    palettee.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palettee);
    this->setFixedSize(bkgnd.rect().size());
    this->setWindowTitle("گلخونه");
}
