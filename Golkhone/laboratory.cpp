#include "laboratory.h"
#include "profile.h"
#include "shop.h"
#include "greenhouse.h"
#include <QMessageBox>

extern Profile *profilePtr;
extern Shop *shopPtr;
extern GreenHouse *greenHousePtr;

extern Person *personPtr;
extern Store *storePtr;

class Profile;

Laboratory::Laboratory(QWidget *parent) : QWidget(parent)
{
    setBackground();

    WindowButtons();
    connect(profile, &QPushButton::clicked, this, &Laboratory::OnProfile);
    connect(shop, &QPushButton::clicked, this, &Laboratory::OnShop);
    connect(greenHouse, &QPushButton::clicked, this, &Laboratory::OnGreenHouse);

    createExtractButtons();
    connect(magnoilaExtractBtn, &QPushButton::clicked, this, &Laboratory::OnMagnoilaExtractBtn);
    connect(liliumExtractBtn, &QPushButton::clicked, this, &Laboratory::OnLiliumExtractBtn);
    connect(orchidExtractBtn, &QPushButton::clicked, this, &Laboratory::OnOrchidExtractBtn);

    setInventory();
    setLabels();
}

void Laboratory::setLabels()
{
    magnoliaExtracLabel = new QLabel("عصاره خاک مگنولیا", this);
    magnoliaExtracLabel->setGeometry(930, 160, 150, 50);

    waterLabel1 = new QLabel("آب", this);
    waterLabel1->setGeometry(875, 250, 150, 50);

    dahliaLabel = new QLabel("گل کوکب", this);
    dahliaLabel->setGeometry(890, 350, 150, 50);

    tulipLabel = new QLabel("گل لاله", this);
    tulipLabel->setGeometry(890, 450, 150, 50);

    liliumExtracLabel = new QLabel("عصاره خاک لیلیوم", this);
    liliumExtracLabel->setGeometry(600, 160, 150, 50);

    waterLabel2 = new QLabel("آب", this);
    waterLabel2->setGeometry(560, 250, 150, 50);

    amarylilisLabel = new QLabel("گل نرگس", this);
    amarylilisLabel->setGeometry(575, 350, 150, 50);

    tuberoseLabel = new QLabel("گل مریم", this);
    tuberoseLabel->setGeometry(575, 450, 150, 50);

    orchidExtractLabel = new QLabel("عصاره خاک ارکیده", this);
    orchidExtractLabel->setGeometry(270, 160, 150, 50);

    waterLabel3 = new QLabel("آب", this);
    waterLabel3->setGeometry(225, 250, 150, 50);

    hyacinthLabel = new QLabel("گل سنبل", this);
    hyacinthLabel->setGeometry(250, 350, 150, 50);

    moneyLabel = new QLabel("ت5000", this);
    moneyLabel->setGeometry(250, 450, 150, 50);
}

void Laboratory::setInventory()
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

void Laboratory::OnGreenHouse()
{
    hide();
    greenHousePtr->show();
}

void Laboratory::createExtractButtons()
{
    magnoilaExtractBtn = new QPushButton("تولید عصاره خاک مگنولیا", this);
    magnoilaExtractBtn->setGeometry(877,560,300,73);
    magnoilaExtractBtn->setAutoFillBackground(true);
    QPalette palette = magnoilaExtractBtn->palette();
    palette.setColor(QPalette::Window, QColor(Qt::black));
    magnoilaExtractBtn->setPalette(palette);
    magnoilaExtractBtn->setStyleSheet("background-color: rgb(170, 170, 127);");
    magnoilaExtractBtn->setStyleSheet("background-color: #3cbaa2; solid black;");

    liliumExtractBtn = new QPushButton("تولید عصاره خاک لیلیوم", this);
    liliumExtractBtn->setGeometry(552,560,300,73);
    liliumExtractBtn->setAutoFillBackground(true);
    QPalette palette1 = liliumExtractBtn->palette();
    palette1.setColor(QPalette::Window, QColor(Qt::black));
    liliumExtractBtn->setPalette(palette1);
    liliumExtractBtn->setStyleSheet("background-color: rgb(170, 170, 127);");
    liliumExtractBtn->setStyleSheet("background-color: #3cbaa2; solid black;");

    orchidExtractBtn = new QPushButton("تولید عصاره خاک ارکیده", this);
    orchidExtractBtn->setGeometry(227,560,300,73);
    orchidExtractBtn->setAutoFillBackground(true);
    QPalette palette2 = orchidExtractBtn->palette();
    palette2.setColor(QPalette::Window, QColor(Qt::black));
    orchidExtractBtn->setPalette(palette2);
    orchidExtractBtn->setStyleSheet("background-color: rgb(170, 170, 127);");
    orchidExtractBtn->setStyleSheet("background-color: #3cbaa2; solid black;");
}

void Laboratory::OnLiliumExtractBtn()
{
    try
    {
        Water *wptr = personPtr->get_Water();
        Amaryllis *aptr = personPtr->get_Amaryllis();
        Tuberose *tptr = personPtr->get_Tuberose();
        LiliumExtract *ptr = new LiliumExtract(tptr, aptr, wptr);
        personPtr->add_LiliumExtract(ptr);
    }
    catch (const std::runtime_error& e)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error",e.what());
        messageBox.setFixedSize(500,200);
    }
}

void Laboratory::OnMagnoilaExtractBtn()
{
    try
    {
        Water *wptr = personPtr->get_Water();
        Dahlia *dptr = personPtr->get_Dahlia();
        Tulip *tptr = personPtr->get_Tulip();
        MagnoliaExtract *ptr = new MagnoliaExtract(dptr, tptr, wptr);
        personPtr->add_MagnoliaExtract(ptr);
    }
    catch (const std::runtime_error& e)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error",e.what());
        messageBox.setFixedSize(500,200);
    }
}

void Laboratory::OnOrchidExtractBtn()
{
    try
    {
        Water *wptr = personPtr->get_Water();
        Hyacinth *hptr = personPtr->get_Hyacinth();
        OrchisExtract *ptr = new OrchisExtract(hptr, wptr);
        personPtr->add_OrchidExtract(ptr);
    }
    catch (const std::runtime_error& e)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error",e.what());
        messageBox.setFixedSize(500,200);
    }
}

void Laboratory::WindowButtons()
{
    profile = new QPushButton("", this);
    profile->setGeometry(1245,0,150,73);
    QPixmap pixmap(":/new/menu14.png");
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
    QPixmap pixmap3(":/new/menu3.png");
    QIcon ButtonIcon3(pixmap3);
    laboratory->setIcon(ButtonIcon3);
    laboratory->setIconSize(pixmap3.rect().size());
    laboratory->setFixedSize(pixmap3.rect().size());

}

void Laboratory::setBackground()
{

    QPixmap bkgnd(":/new/labback2.png");
    QPalette palettee;
    palettee.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palettee);
    this->setFixedSize(bkgnd.rect().size());
    this->setWindowTitle("گلخونه");
}
