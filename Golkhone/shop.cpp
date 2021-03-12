#include "shop.h"
#include "profile.h"
#include "laboratory.h"
#include <QInputDialog>
#include <QMessageBox>
#include "orchis.h"
#include "lilium.h"
#include "magnolia.h"

//QString str = QString::fromUtf8(content.c_str());
extern long int money;
extern Profile *profilePtr;
extern Laboratory *laboratoryPtr;
extern Person *personPtr;
extern Store *storePtr;

class Profile;

Shop::Shop(QWidget *parent) : QWidget(parent)
{
    setBackground();

    WindowButtons();

    connect(profile, &QPushButton::clicked, this, &Shop::OnProfile);
    connect(laboratory, &QPushButton::clicked, this, &Shop::OnLaboratory);

    setInventory();

    setListBtn();


    connect(tulipBtn, &QPushButton::clicked, this, &Shop::OnTulipBtn);

    connect(dahliaBtn, &QPushButton::clicked, this, &Shop::OnDahliaBtn);

    connect(magnoliaBtn, &QPushButton::clicked, this, &Shop::OnMagnoliaBtn);

    connect(liliumBtn, &QPushButton::clicked, this, &Shop::OnLiliumBtn);

    connect(orchidBtn, &QPushButton::clicked, this, &Shop::OnOrchidBtn);

    connect(amarylilisBtn, &QPushButton::clicked, this, &Shop::OnAmarylilisBtn);

    connect(hyacinthBtn, &QPushButton::clicked, this, &Shop::OnHyacinthBtn);

    connect(tuberoseBtn, &QPushButton::clicked, this, &Shop::OnTuberoseBtn);

    connect(ordinaryOnionBtn, &QPushButton::clicked, this, &Shop::OnOrdinaryOnionBtn);

    connect(ornamentalOnionBtn, &QPushButton::clicked, this, &Shop::OnOrnamentalOnionBtn);

    connect(rareOnionBtn, &QPushButton::clicked, this, &Shop::OnRareOnionBtn);

    connect(ordinaryOnionBtn1, &QPushButton::clicked, this, &Shop::OnOrdinaryOnionBtn1);

    connect(ornamentalOnionBtn1, &QPushButton::clicked, this, &Shop::OnOrnamentalOnionBtn1);

    connect(rareOnionBtn1, &QPushButton::clicked, this, &Shop::OnRareOnionBtn1);

    connect(soilBtn, &QPushButton::clicked, this, &Shop::OnSoilBtn);

    connect(waterBtn, &QPushButton::clicked, this, &Shop::OnWaterBtn);

    connect(sprayingMaterialBtn, &QPushButton::clicked, this, &Shop::OnSprayingMaterialBtn);
}

void Shop::OnTuberoseBtn()
{
    int num = QInputDialog::getInt(this, "فروش" ,"تعداد فروش را وارد کنید", QLineEdit::Normal);

    if (num > 0)
    {
        unsigned int count = static_cast<unsigned int>(num);
        if (Tuberose::get_tuberose_count() >= count)
        {
            personPtr->sel_Tuberose(count);
        }
        else
        {
            QMessageBox messageBox;
            messageBox.critical(0, "Error", "گل مریم به تعداد خواسته شده وجود ندارد!");
            messageBox.setFixedSize(500,200);
        }
    }

    else if (num < 0)
    {
        QMessageBox messageBox;
        messageBox.critical(0, "Error", "تعداد فروش باید بزرگ تر از صفر باشد!");
        messageBox.setFixedSize(500,200);
    }
}

void Shop::OnHyacinthBtn()
{
    int num = QInputDialog::getInt(this, "فروش" ,"تعداد فروش را وارد کنید", QLineEdit::Normal);

    if (num > 0)
    {
        unsigned int count = static_cast<unsigned int>(num);
        if (Hyacinth::get_hyacinth_count() >= count)
        {
            personPtr->sel_Hyacinth(count);
        }
        else
        {
            QMessageBox messageBox;
            messageBox.critical(0, "Error", "گل سنبل به تعداد خواسته شده وجود ندارد!");
            messageBox.setFixedSize(500,200);
        }
    }

    else if (num < 0)
    {
        QMessageBox messageBox;
        messageBox.critical(0, "Error", "تعداد فروش باید بزرگ تر از صفر باشد!");
        messageBox.setFixedSize(500,200);
    }
}

void Shop::OnAmarylilisBtn()
{
    int num = QInputDialog::getInt(this, "فروش" ,"تعداد فروش را وارد کنید", QLineEdit::Normal);

    if (num > 0)
    {
        unsigned int count = static_cast<unsigned int>(num);
        if (Amaryllis::get_Amaryllis_count() >= count)
        {
            personPtr->sel_Amaryllis(count);
        }
        else
        {
            QMessageBox messageBox;
            messageBox.critical(0, "Error", "گل نرگس به تعداد خواسته شده وجود ندارد!");
            messageBox.setFixedSize(500,200);
        }
    }

    else if (num < 0)
    {
        QMessageBox messageBox;
        messageBox.critical(0, "Error", "تعداد فروش باید بزرگ تر از صفر باشد!");
        messageBox.setFixedSize(500,200);
    }
}

void Shop::OnDahliaBtn()
{
    int num = QInputDialog::getInt(this, "فروش" ,"تعداد فروش را وارد کنید", QLineEdit::Normal);

    if (num > 0)
    {
        unsigned int count = static_cast<unsigned int>(num);
        if (Dahlia::get_dahlia_count() >= count)
        {
            personPtr->sel_Dahlia(count);
        }
        else
        {
            QMessageBox messageBox;
            messageBox.critical(0,"Error","گل کوکب به تعداد خواسته شده وجود ندارد!");
            messageBox.setFixedSize(500,200);
        }
    }

    else if (num < 0)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","تعداد فروش باید بزرگ تر از صفر باشد!");
        messageBox.setFixedSize(500,200);
    }
}

void Shop::OnOrchidBtn()
{
    int num = QInputDialog::getInt(this, "فروش" ,"تعداد فروش را وارد کنید", QLineEdit::Normal);

    if (num > 0)
    {
        unsigned int count = static_cast<unsigned int>(num);
        if (Orchid::get_orchid_count() >= count)
        {
            personPtr->sel_Orchid(count);
        }
        else
        {
            QMessageBox messageBox;
            messageBox.critical(0,"Error","گل ارکیده به تعداد خواسته شده وجود ندارد!");
            messageBox.setFixedSize(500,200);
        }
    }

    else if (num < 0)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","تعداد فروش باید بزرگ تر از صفر باشد!");
        messageBox.setFixedSize(500,200);
    }
}

void Shop::OnLiliumBtn()
{
    int num = QInputDialog::getInt(this, "فروش" ,"تعداد فروش را وارد کنید", QLineEdit::Normal);

    if (num > 0)
    {
        unsigned int count = static_cast<unsigned int>(num);
        if (Lilium::get_lilium_count() >= count)
        {
            personPtr->sel_Lilium(count);
        }
        else
        {
            QMessageBox messageBox;
            messageBox.critical(0,"Error","گل لیلیوم به تعداد خواسته شده وجود ندارد!");
            messageBox.setFixedSize(500,200);
        }
    }

    else if (num < 0)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","تعداد فروش باید بزرگ تر از صفر باشد!");
        messageBox.setFixedSize(500,200);
    }
}

void Shop::OnMagnoliaBtn()
{
    int num = QInputDialog::getInt(this, "فروش" ,"تعداد فروش را وارد کنید", QLineEdit::Normal);

    if (num > 0)
    {
        unsigned int count = static_cast<unsigned int>(num);
        if (Magnolia::get_magnolia_count() >= count)
        {
            personPtr->sel_Magnolia(count);
        }
        else
        {
            QMessageBox messageBox;
            messageBox.critical(0,"Error","گل مگنولیا به تعداد خواسته شده وجود ندارد!");
            messageBox.setFixedSize(500,200);
        }
    }

    else if (num < 0)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","تعداد فروش باید بزرگ تر از صفر باشد!");
        messageBox.setFixedSize(500,200);
    }
}

void Shop::OnTulipBtn()
{
    int num = QInputDialog::getInt(this, "فروش" ,"تعداد فروش را وارد کنید", QLineEdit::Normal);

    if (num > 0)
    {
        unsigned int count = static_cast<unsigned int>(num);
        if (Tulip::get_tulip_count() >= count)
        {
            personPtr->sel_Tulip(count);
        }
        else
        {
            QMessageBox messageBox;
            messageBox.critical(0,"Error","گل لاله به تعداد خواسته شده وجود ندارد!");
            messageBox.setFixedSize(500,200);
        }
    }

    else if (num < 0)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","تعداد فروش باید بزرگ تر از صفر باشد!");
        messageBox.setFixedSize(500,200);
    }
}

void Shop::OnSprayingMaterialBtn()
{
    int num = QInputDialog::getInt(this, "خرید" ,"تعداد خرید را وارد کنید", QLineEdit::Normal);

    if (num > 0)
    {
        unsigned int count = static_cast<unsigned int>(num);
        if (storePtr->get_SprayingMaterial_count() >= count)
        {
            for (size_t i = 0; i < count; i++)
            {
                personPtr->add_SprayingMaterial(storePtr->get_SprayingMaterial());
            }
        }
        else
        {
            QMessageBox messageBox;
            messageBox.critical(0,"Error","ماده سمپاشی به تعداد خواسته شده وجود ندارد!");
            messageBox.setFixedSize(500,200);
        }
    }

    else if (num < 0)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","تعداد خرید باید بزرگ تر از صفر باشد!");
        messageBox.setFixedSize(500,200);
    }
}

void Shop::OnWaterBtn()
{
    int num = QInputDialog::getInt(this, "خرید" ,"تعداد خرید را وارد کنید", QLineEdit::Normal);

    if (num > 0)
    {
        unsigned int count = static_cast<unsigned int>(num);
        if (storePtr->get_Water_count() >= count)
        {
            for (size_t i = 0; i < count; i++)
            {
                personPtr->add_Water(storePtr->get_Water());
            }
        }
        else
        {
            QMessageBox messageBox;
            messageBox.critical(0,"Error","آب به تعداد خواسته شده وجود ندارد!");
            messageBox.setFixedSize(500,200);
        }
    }

    else if (num < 0)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","تعداد خرید باید بزرگ تر از صفر باشد!");
        messageBox.setFixedSize(500,200);
    }
}

void Shop::OnSoilBtn()
{
    int num = QInputDialog::getInt(this, "خرید" ,"تعداد خرید را وارد کنید", QLineEdit::Normal);

    if (num > 0)
    {
        unsigned int count = static_cast<unsigned int>(num);
        if (storePtr->get_Soil_count() >= count)
        {
            for (size_t i = 0; i < count; i++)
            {
                personPtr->add_Soil(storePtr->get_Soil());
            }
        }
        else
        {
            QMessageBox messageBox;
            messageBox.critical(0,"Error","خاک به تعداد خواسته شده وجود ندارد!");
            messageBox.setFixedSize(500,200);
        }
    }

    else if (num < 0)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","تعداد خرید باید بزرگ تر از صفر باشد!");
        messageBox.setFixedSize(500,200);
    }
}

void Shop::OnRareOnionBtn1()
{
    int num = QInputDialog::getInt(this, "خرید" ,"تعداد خرید را وارد کنید", QLineEdit::Normal);

    if (num > 0)
    {
        unsigned int count = static_cast<unsigned int>(num);
        if (storePtr->get_RareOnion_count() >= count)
        {
            for (size_t i = 0; i < count; i++)
            {
                personPtr->add_RareOnion(storePtr->get_RareOnion());
            }
        }
        else
        {
            QMessageBox messageBox;
            messageBox.critical(0,"Error","پیاز گل نادر به تعداد خواسته شده وجود ندارد!");
            messageBox.setFixedSize(500,200);
        }
    }

    else if (num < 0)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","تعداد خرید باید بزرگ تر از صفر باشد!");
        messageBox.setFixedSize(500,200);
    }
}

void Shop::OnOrnamentalOnionBtn1()
{
    int num = QInputDialog::getInt(this, "خرید" ,"تعداد خرید را وارد کنید", QLineEdit::Normal);

    if (num > 0)
    {
        unsigned int count = static_cast<unsigned int>(num);
        if (storePtr->get_OrnamentalOnion_count() >= count)
        {
            for (size_t i = 0; i < count; i++)
            {
                personPtr->add_OrnamentalOnion(storePtr->get_OrnamentalOnion());
            }
        }
        else
        {
            QMessageBox messageBox;
            messageBox.critical(0,"Error","پیاز گل زینتی به تعداد خواسته شده وجود ندارد!");
            messageBox.setFixedSize(500,200);
        }
    }

    else if (num < 0)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","تعداد خرید باید بزرگ تر از صفر باشد!");
        messageBox.setFixedSize(500,200);
    }
}

void Shop::OnOrdinaryOnionBtn1()
{
    int num = QInputDialog::getInt(this, "خرید" ,"تعداد خرید را وارد کنید", QLineEdit::Normal);

    if (num > 0)
    {
        unsigned int count = static_cast<unsigned int>(num);
        if (storePtr->get_OrdinaryUnion_count() >= count)
        {
            for (size_t i = 0; i < count; i++)
            {
                personPtr->add_OrdinaryUnion(storePtr->get_OrdinaryUnion());
            }
        }
        else
        {
            QMessageBox messageBox;
            messageBox.critical(0,"Error","پیاز گل عادی به تعداد خواسته شده وجود ندارد!");
            messageBox.setFixedSize(500,200);
        }
    }

    else if (num < 0)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","تعداد خرید باید بزرگ تر از صفر باشد!");
        messageBox.setFixedSize(500,200);
    }
}

void Shop::OnRareOnionBtn()
{
    int num = QInputDialog::getInt(this, "فروش" ,"تعداد فروش را وارد کنید", QLineEdit::Normal);

    if (num > 0)
    {
        unsigned int count = static_cast<unsigned int>(num);
        if (personPtr->get_RareOnion_count() >= count)
        {
            for (size_t i = 0; i < count; i++)
            {
                money += 5000;
                storePtr->add_RareOnion(personPtr->get_RareOnion());
            }
        }
        else //QString str = QString::fromUtf8(content.c_str());
        {
            QMessageBox messageBox;
            messageBox.critical(0,"Error","پیاز گل نادر به تعداد خواسته شده وجود ندارد!");
            messageBox.setFixedSize(500,200);
        }
    }

    else if (num < 0)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","تعداد فروش باید بزرگ تر از صفر باشد!");
        messageBox.setFixedSize(500,200);
    }
}

void Shop::OnOrnamentalOnionBtn()
{
    int num = QInputDialog::getInt(this, "فروش" ,"تعداد فروش را وارد کنید", QLineEdit::Normal);

    if (num > 0)
    {
        unsigned int count = static_cast<unsigned int>(num);
        if (personPtr->get_OrnamentalOnion_count() >= count)
        {
            for (size_t i = 0; i < count; i++)
            {
                money += 7500;
                storePtr->add_OrnamentalOnion(personPtr->get_OrnamentalOnion());
            }
        }
        else
        {
            QMessageBox messageBox;
            messageBox.critical(0,"Error","پیاز گل زینتی به تعداد خواسته شده وجود ندارد!");
            messageBox.setFixedSize(500,200);
        }
    }

    else if (num < 0)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","تعداد فروش باید بزرگ تر از صفر باشد!");
        messageBox.setFixedSize(500,200);
    }
}

void Shop::OnOrdinaryOnionBtn()
{
    int num = QInputDialog::getInt(this, "فروش" ,"تعداد فروش را وارد کنید", QLineEdit::Normal);

    if (num > 0)
    {
        unsigned int count = static_cast<unsigned int>(num);
        if (personPtr->get_OrdinaryUnion_count() >= count)
        {
            for (size_t i = 0; i < count; i++)
            {
                money += 500;
                storePtr->add_OrdinaryUnion(personPtr->get_OrdinaryUnion());
            }
        }
        else
        {
            QMessageBox messageBox;
            messageBox.critical(0,"Error","پیاز گل عادی به تعداد خواسته شده وجود ندارد!");
            messageBox.setFixedSize(500,200);
        }
    }

    else if (num < 0)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","تعداد فروش باید بزرگ تر از صفر باشد!");
        messageBox.setFixedSize(500,200);
    }
}

void Shop::setListBtn()
{
    tulipBtn = new QPushButton(this);
    QString s1 = QString("گل لاله                       %1").arg(Tulip::get_tulip_count());
    tulipBtn->setText(s1);
    tulipBtn->setStyleSheet("QPushButton{background:transparent;}");
    tulipBtn->setGeometry(220,209,215,55);

    magnoliaBtn = new QPushButton("", this);
    QString s2 = QString("گل مگنولیا                       %1").arg(Magnolia::get_magnolia_count());
    magnoliaBtn->setText(s2);
    magnoliaBtn->setStyleSheet("QPushButton{background:transparent;}");
    magnoliaBtn->setGeometry(455,209,215,55);

    rareOnionBtn1 = new QPushButton("", this);
    QString s3 = QString("پیاز گل نادر                       %1").arg(storePtr->get_RareOnion_count());
    rareOnionBtn1->setText(s3);
    rareOnionBtn1->setStyleSheet("QPushButton{background:transparent;}");
    rareOnionBtn1->setGeometry(729,209,215,55);

    ordinaryOnionBtn1 = new QPushButton("", this);
    QString s4 = QString("پیاز گل عادی                       %1").arg(storePtr->get_OrdinaryUnion_count());
    ordinaryOnionBtn1->setText(s4);
    ordinaryOnionBtn1->setStyleSheet("QPushButton{background:transparent;}");
    ordinaryOnionBtn1->setGeometry(973,209,215,55);

    tuberoseBtn = new QPushButton("", this);
    QString s5 = QString("گل مریم                       %1").arg(Tuberose::get_tuberose_count());
    tuberoseBtn->setText(s5);
    tuberoseBtn->setStyleSheet("QPushButton{background:transparent;}");
    tuberoseBtn->setGeometry(220,277,215,55);

    liliumBtn = new QPushButton("", this);
    QString s6 = QString("گل لیلیوم                       %1").arg(Lilium::get_lilium_count());
    liliumBtn->setText(s6);
    liliumBtn->setStyleSheet("QPushButton{background:transparent;}");
    liliumBtn->setGeometry(455,277,215,55);

    sprayingMaterialBtn = new QPushButton("", this);
    QString s7 = QString("ماده سمپاشی                       %1").arg(storePtr->get_SprayingMaterial_count());
    sprayingMaterialBtn->setText(s7);
    sprayingMaterialBtn->setStyleSheet("QPushButton{background:transparent;}");
    sprayingMaterialBtn->setGeometry(729,277,215,55);

    ornamentalOnionBtn1 = new QPushButton("", this);
    QString s8 = QString("پیاز گل زینتی                       %1").arg(storePtr->get_OrnamentalOnion_count());
    ornamentalOnionBtn1->setText(s8);
    ornamentalOnionBtn1->setStyleSheet("QPushButton{background:transparent;}");
    ornamentalOnionBtn1->setGeometry(973,277,215,55);

    hyacinthBtn = new QPushButton("", this);
    QString s9 = QString("گل سنبل                       %1").arg(Hyacinth::get_hyacinth_count());
    hyacinthBtn->setText(s9);
    hyacinthBtn->setStyleSheet("QPushButton{background:transparent;}");
    hyacinthBtn->setGeometry(220,345,215,55);

    orchidBtn = new QPushButton("", this);
    QString s10 = QString("گل ارکیده                       %1").arg(Orchid::get_orchid_count());
    orchidBtn->setText(s10);
    orchidBtn->setStyleSheet("QPushButton{background:transparent;}");
    orchidBtn->setGeometry(455,345,215,55);

    waterBtn = new QPushButton("", this);
    QString s11 = QString("آب                       %1").arg(storePtr->get_Water_count());
    waterBtn->setText(s11);
    waterBtn->setStyleSheet("QPushButton{background:transparent;}");
    waterBtn->setGeometry(729,344,215,55);

    soilBtn = new QPushButton("", this);
    QString s12 = QString("خاک                       %1").arg(storePtr->get_Soil_count());
    soilBtn->setText(s12);
    soilBtn->setStyleSheet("QPushButton{background:transparent;}");
    soilBtn->setGeometry(973,344,215,55);

    amarylilisBtn = new QPushButton("", this);
    QString s13 = QString("گل نرگس                       %1").arg(Amaryllis::get_Amaryllis_count());
    amarylilisBtn->setText(s13);
    amarylilisBtn->setStyleSheet("QPushButton{background:transparent;}");
    amarylilisBtn->setGeometry(220,411,215,55);

    dahliaBtn = new QPushButton("", this);
    QString s14 = QString("گل کوکب                       %1").arg(Dahlia::get_dahlia_count());
    dahliaBtn->setText(s14);
    dahliaBtn->setStyleSheet("QPushButton{background:transparent;}");
    dahliaBtn->setGeometry(456,411,215,55);

    ordinaryOnionBtn = new QPushButton("", this);
    QString s15 = QString("پیاز گل عادی                       %1").arg(personPtr->get_OrdinaryUnion_count());
    ordinaryOnionBtn->setText(s15);
    ordinaryOnionBtn->setStyleSheet("QPushButton{background:transparent;}");
    ordinaryOnionBtn->setGeometry(220,477,215,55);

    rareOnionBtn = new QPushButton("", this);
    QString s16 = QString("پیاز گل نادر                       %1").arg(personPtr->get_RareOnion_count());
    rareOnionBtn->setText(s16);
    rareOnionBtn->setStyleSheet("QPushButton{background:transparent;}");
    rareOnionBtn->setGeometry(456,477,215,55);

    ornamentalOnionBtn = new QPushButton("", this);
    QString s17 = QString("پیاز گل زینتی                       %1").arg(personPtr->get_OrnamentalOnion_count());
    ornamentalOnionBtn->setText(s17);
    ornamentalOnionBtn->setStyleSheet("QPushButton{background:transparent;}");
    ornamentalOnionBtn->setGeometry(220,541,215,55);

    magnoilaExtractBtn = new QPushButton("", this);
    QString s18 = QString("عصاره مگنولیا                       %1").arg(personPtr->get_MagnoliaExtract_count());
    magnoilaExtractBtn->setText(s18);
    magnoilaExtractBtn->setStyleSheet("QPushButton{background:transparent;}");
    magnoilaExtractBtn->setGeometry(456,541,215,55);

    liliumExtractBtn = new QPushButton("", this);
    QString s19 = QString("عصاره لیلیوم                       %1").arg(personPtr->get_LiliumExtract_count());
    liliumExtractBtn->setText(s19);
    liliumExtractBtn->setStyleSheet("QPushButton{background:transparent;}");
    liliumExtractBtn->setGeometry(220,604,215,55);

    orchidExtractBtn = new QPushButton("", this);
    QString s20 = QString("عصاره ارکیده                       %1").arg(personPtr->get_OrchidExtract_count());
    orchidExtractBtn->setText(s20);
    orchidExtractBtn->setStyleSheet("QPushButton{background:transparent;}");
    orchidExtractBtn->setGeometry(456,604,215,55);
}

void Shop::setInventory()
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

void Shop::OnProfile()
{
    hide();
    profilePtr->show();
}

void Shop::OnLaboratory()
{
    hide();
    laboratoryPtr->show();
}

void Shop::WindowButtons()
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
    QPixmap pixmap2("C:/Users/Abisys/Desktop/nnn/menu2.png");
    QIcon ButtonIcon2(pixmap2);
    shop->setIcon(ButtonIcon2);
    shop->setIconSize(pixmap2.rect().size());
    shop->setFixedSize(pixmap2.rect().size());

    laboratory = new QPushButton("", this);
    laboratory->setGeometry(795,0,150,73);
    QPixmap pixmap3("C:/Users/Abisys/Desktop/nnn/menu04.png");
    QIcon ButtonIcon3(pixmap3);
    laboratory->setIcon(ButtonIcon3);
    laboratory->setIconSize(pixmap3.rect().size());
    laboratory->setFixedSize(pixmap3.rect().size());

}

void Shop::setBackground()
{

    QPixmap bkgnd("C://Users//Abisys//Desktop//nnn//shopback1.png");
    QPalette palettee;
    palettee.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palettee);
    this->setFixedSize(bkgnd.rect().size());
    this->setWindowTitle("گلخونه");
}
