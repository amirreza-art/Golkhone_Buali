#include "profile.h"
#include "laboratory.h"
#include "shop.h"
#include "greenhouse.h"
#include "magnolia.h"
#include "lilium.h"
#include "orchis.h"

Laboratory *laboratoryPtr = nullptr;
Profile *profilePtr = nullptr;
Shop *shopPtr = nullptr;
GreenHouse *greenHousePtr = nullptr;

extern Person *personPtr;
extern Store *storePtr;

Profile::Profile(QWidget *parent) : QWidget(parent)
{
    // creat windows and save address of them
    profilePtr = this;
    laboratoryPtr = new Laboratory();
    shopPtr = new Shop();
    greenHousePtr = new GreenHouse();

    // Backgrond for profile window
    setBackground();

    playList = new QMediaPlaylist();
    playList->addMedia(QUrl("qrc:/new/Chaartaar - Adineh.mp3"));
    playList->setPlaybackMode(QMediaPlaylist::Loop);

    music = new QMediaPlayer();
    music->setPlaylist(playList);

    // create sound button and connect signals to slots for them
    setSoundPics();
    connect(soundOff, &QPushButton::clicked, this, &Profile::OnSoundOff);
    connect(soundOn, &QPushButton::clicked, this, &Profile::OnSoundOn);

    //
    setLoadAndSavPic();

    // buttons for change window and connect singnals to slots for them
    WindowButtons();
    connect(laboratory, &QPushButton::clicked, this, &Profile::OnLaboratory);
    connect(shop, &QPushButton::clicked, this, &Profile::OnShop);
    connect(greenHouse, &QPushButton::clicked, this, &Profile::OnGreenHouse);

    setInventory();

    setLabels();
}

void Profile::setLabels()
{
        totalOrdinary = new QLabel("مجموع گل های عادی:",this);
        totalOrdinary->setGeometry(1030,302,150,50);

        totalOrdinary1 = new QLabel(this);
        unsigned int sum = Dahlia::get_dahlia_count() +
                           Tulip::get_tulip_count();
        totalOrdinary1->setText(QString::number(sum));
        totalOrdinary1->setGeometry(750,302,50,50);


        totalRare = new QLabel("مجموع گل های نادر:",this);
        totalRare->setGeometry(1030,375,150,50);

        totalRare1 = new QLabel(this);
        unsigned int sum1 = Amaryllis::get_Amaryllis_count() +
                            Tuberose::get_tuberose_count() +
                            Hyacinth::get_hyacinth_count();
        totalRare1->setText(QString::number(sum1));
        totalRare1->setGeometry(750,375,50,50);

        totalOrnamental = new QLabel("مجموع گل های زینتی:",this);
        totalOrnamental->setGeometry(1030,445,150,50);

        unsigned int sum3 = Magnolia::get_magnolia_count() +
                            Orchid::get_orchid_count() +
                            Lilium::get_lilium_count();
        totalOrnamental1 = new QLabel(this);
        totalOrnamental1->setText(QString::number(sum3));
        totalOrnamental1->setGeometry(750,445,50,50);

        totalCreated = new QLabel("مجموع گل های کاشته شده:",this);
        totalCreated->setGeometry(480,302,170,50);

        unsigned int sum4 =  Magnolia::get_magnolia_count() +
                             Orchid::get_orchid_count() +
                             Lilium::get_lilium_count() +
                             Amaryllis::get_Amaryllis_count() +
                             Tuberose::get_tuberose_count() +
                             Hyacinth::get_hyacinth_count() +
                             Dahlia::get_dahlia_count() +
                             Tulip::get_tulip_count();
        totalCreated1 = new QLabel(this);
        totalCreated1->setText(QString::number(sum4));
        totalCreated1->setGeometry(230,302,50,50);

        totalDeleted = new QLabel("مجموع گل های حذف شده:",this);
        totalDeleted->setGeometry(480,375,170,50);

        unsigned int sum5 = OrdinaryFlowers::get_ordinaryFlower_count() +
                            OrdinaryFlowerBuds::get_ordinaryFlowerBud_count() +
                            RareFlower::get_rareFlower_count() +
                            RareFlowerbuds::get_rareFlowerBud_count() +
                            OrnamentalFlower::get_ornamentalFlower_count() +
                            OrnamentalBud::get_ornamentalBud_count() +
                            OrnamentalFlowerBud::get_ornamentalFlowerBud_count();
        totalDeleted1 = new QLabel(this);
        totalDeleted1->setText(QString::number(sum5));
        totalDeleted1->setGeometry(230,375,50,50);

        totalExtract = new QLabel("مجموع عصاره ها:",this);
        totalExtract->setGeometry(500,445,150,50);

        totalExtract1 = new QLabel(this);
        unsigned int sum6 = personPtr->get_MagnoliaExtract_count() +
                            personPtr->get_LiliumExtract_count() +
                            personPtr->get_OrchidExtract_count();
        totalExtract1->setText(QString::number(sum6));
        totalExtract1->setGeometry(230,445,50,50);
}

void Profile::setInventory()
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

    saveLable = new QLabel("ذخیره بازی", this);
    saveLable->setGeometry(770, 550,100,100);

    loadLabel = new QLabel("بارگذاری بازی", this);
    loadLabel->setGeometry(340, 550,100,100);
}


void Profile::OnLaboratory()
{
    hide();
    laboratoryPtr->show();
}

void Profile::OnShop()
{
    hide();
    shopPtr->show();
}

void Profile::OnGreenHouse()
{
    hide();
    greenHousePtr->show();
}

void Profile::WindowButtons()
{
    profile = new QPushButton("", this);
    profile->setGeometry(1245,0,150,73);
    QPixmap pixmap(":/new/menu02.png");
    QIcon ButtonIcon(pixmap);
    profile->setIcon(ButtonIcon);
    profile->setIconSize(pixmap.rect().size());
    profile->setFixedSize(pixmap.rect().size());

    greenHouse = new QPushButton("", this);
    greenHouse->setGeometry(1095,0,150,73);
    QPixmap pixmap1(":/new/menu05.png");
    QIcon ButtonIcon1(pixmap1);
    greenHouse->setIcon(ButtonIcon1);
    greenHouse->setIconSize(pixmap1.rect().size());
    greenHouse->setFixedSize(pixmap1.rect().size());

    shop = new QPushButton("", this);
    shop->setGeometry(945,0,150,73);
    QPixmap pixmap2(":/new/menu03.png");
    QIcon ButtonIcon2(pixmap2);
    shop->setIcon(ButtonIcon2);
    shop->setIconSize(pixmap2.rect().size());
    shop->setFixedSize(pixmap2.rect().size());

    laboratory = new QPushButton("", this);
    laboratory->setGeometry(795,0,150,73);
    QPixmap pixmap3(":/new/menu04.png");
    QIcon ButtonIcon3(pixmap3);
    laboratory->setIcon(ButtonIcon3);
    laboratory->setIconSize(pixmap3.rect().size());
    laboratory->setFixedSize(pixmap3.rect().size());
}

void Profile::setLoadAndSavPic()
{
    save = new QPushButton(this);
    QPixmap pixmap2(":/new/strip3.png");
    QIcon ButtonIcon2(pixmap2);
    save->setIcon(ButtonIcon2);
    save->setStyleSheet("QPushButton{background:transparent;}");
    save->setIconSize(pixmap2.rect().size());
    save->setFixedSize(pixmap2.rect().size());
    save->setGeometry(650, 550,5,5);

    load = new QPushButton(this);
    load->setIcon(ButtonIcon2);
    load->setStyleSheet("QPushButton{background:transparent;}");
    load->setIconSize(pixmap2.rect().size());
    load->setFixedSize(pixmap2.rect().size());
    load->setGeometry(220, 550,5,5);
}

void Profile::setSoundPics()
{
    soundOff = new QPushButton("", this);
    soundOff->setGeometry(1083,540,50,50);
    soundOn = new QPushButton("", this);
    soundOn->setGeometry(1083,540,50,50);
    soundOn->setVisible(false);

    QPixmap pixmap(":/new/music0.png");
    QIcon ButtonIcon(pixmap);
    soundOff->setIcon(ButtonIcon);
    soundOff->setStyleSheet("QPushButton{background:transparent;}");
    soundOff->setIconSize(pixmap.rect().size());
    soundOff->setFixedSize(pixmap.rect().size());

    QPixmap pixmap1(":/new/music1.png");
    QIcon ButtonIcon1(pixmap1);
    soundOn->setIcon(ButtonIcon1);
    soundOn->setStyleSheet("QPushButton{background:transparent;}");
    soundOn->setIconSize(pixmap1.rect().size());
    soundOn->setFixedSize(pixmap1.rect().size());
}

void Profile::OnSoundOff()
{
    music->play();
    soundOff->setVisible(false);
    soundOn->setVisible(true);
}

void Profile::OnSoundOn()
{
    music->pause();
    soundOff->setVisible(true);
    soundOn->setVisible(false);
}

void Profile::setBackground()
{
    QPixmap bkgnd(":/new/profback.png");
    QPalette palettee;
    palettee.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palettee);
    this->setFixedSize(bkgnd.rect().size());
    this->setWindowTitle("گلخونه");
}
