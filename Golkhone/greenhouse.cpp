#include "greenhouse.h"
#include "laboratory.h"
#include "profile.h"
#include "shop.h"
#include "QMessageBox"
#include "QInputDialog"
#include <iostream>
#include <ornamentalflower.h>

extern Profile *profilePtr;
extern Shop *shopPtr;
extern Laboratory *laboratoryPtr;

extern long int money;
extern Person *personPtr;
extern Store *storePtr;

unsigned int totalDeletedFLower = 0;

GreenHouse::GreenHouse(QWidget *parent) : QWidget(parent)
{
    setBackground();

    WindowButtons();
    connect(profile, &QPushButton::clicked, this, &GreenHouse::OnProfile);
    connect(shop, &QPushButton::clicked, this, &GreenHouse::OnShop);
    connect(laboratory, &QPushButton::clicked, this, &GreenHouse::OnLaboratory);

    setInventory();

    setLockPic();
    setEmptyPic();
    setDahliaPic();
    setTulipPic();
    setTuberosePic();
    setAmaryllisPic();
    //setHyacinthPic();
    setMagnoliaPic();
    seLiliumPic();
    setOrchidPic();
    setOrdinaryPic();
    setOrdinaryBudPic();
    setOrnamentalPic();
    setOrnamentalBudPic();
    setOrnamentalFlowerBudPic();
    setRarePic();
    setRareBudPic();

    setEmptyBtn();
    setLockBtn();
    setOrBtn();
    setRareBtn();
    setOrnamBtn();
    setOrBudBtn();
    setRareBudBtn();
    setOrnamBudBtn();

    connect(lockBtn1, &QPushButton::clicked, this, &GreenHouse::OnLockBtn1);
    connect(lockBtn2, &QPushButton::clicked, this, &GreenHouse::OnLockBtn2);
    connect(lockBtn3, &QPushButton::clicked, this, &GreenHouse::OnLockBtn3);
    connect(lockBtn4, &QPushButton::clicked, this, &GreenHouse::OnLockBtn4);
    connect(lockBtn5, &QPushButton::clicked, this, &GreenHouse::OnLockBtn5);
    connect(lockBtn6, &QPushButton::clicked, this, &GreenHouse::OnLockBtn6);
    connect(lockBtn7, &QPushButton::clicked, this, &GreenHouse::OnLockBtn7);
    connect(lockBtn8, &QPushButton::clicked, this, &GreenHouse::OnLockBtn8);


    connect(emptyBtn1, &QPushButton::clicked, this, &GreenHouse::OnEmptyBtn1);
    connect(emptyBtn2, &QPushButton::clicked, this, &GreenHouse::OnEmptyBtn2);
    connect(emptyBtn3, &QPushButton::clicked, this, &GreenHouse::OnEmptyBtn3);
    connect(emptyBtn4, &QPushButton::clicked, this, &GreenHouse::OnEmptyBtn4);
    connect(emptyBtn5, &QPushButton::clicked, this, &GreenHouse::OnEmptyBtn5);
    connect(emptyBtn6, &QPushButton::clicked, this, &GreenHouse::OnEmptyBtn6);
    connect(emptyBtn7, &QPushButton::clicked, this, &GreenHouse::OnEmptyBtn7);
    connect(emptyBtn8, &QPushButton::clicked, this, &GreenHouse::OnEmptyBtn8);

    connect(orBtn1, &QPushButton::clicked, this, &GreenHouse::OnOrBtns);
    connect(orBtn2, &QPushButton::clicked, this, &GreenHouse::OnOrBtns);
    connect(orBtn3, &QPushButton::clicked, this, &GreenHouse::OnOrBtns);
    connect(orBtn4, &QPushButton::clicked, this, &GreenHouse::OnOrBtns);
    connect(orBtn5, &QPushButton::clicked, this, &GreenHouse::OnOrBtns);
    connect(orBtn6, &QPushButton::clicked, this, &GreenHouse::OnOrBtns);
    connect(orBtn7, &QPushButton::clicked, this, &GreenHouse::OnOrBtns);
    connect(orBtn8, &QPushButton::clicked, this, &GreenHouse::OnOrBtns);

    connect(rareBtn1, &QPushButton::clicked, this, &GreenHouse::OnRareBtns);
    connect(rareBtn2, &QPushButton::clicked, this, &GreenHouse::OnRareBtns);
    connect(rareBtn3, &QPushButton::clicked, this, &GreenHouse::OnRareBtns);
    connect(rareBtn4, &QPushButton::clicked, this, &GreenHouse::OnRareBtns);
    connect(rareBtn5, &QPushButton::clicked, this, &GreenHouse::OnRareBtns);
    connect(rareBtn6, &QPushButton::clicked, this, &GreenHouse::OnRareBtns);
    connect(rareBtn7, &QPushButton::clicked, this, &GreenHouse::OnRareBtns);
    connect(rareBtn8, &QPushButton::clicked, this, &GreenHouse::OnRareBtns);

    connect(ornamBtn1, &QPushButton::clicked, this, &GreenHouse::OnOrnamBtns);
    connect(ornamBtn2, &QPushButton::clicked, this, &GreenHouse::OnOrnamBtns);
    connect(ornamBtn3, &QPushButton::clicked, this, &GreenHouse::OnOrnamBtns);
    connect(ornamBtn4, &QPushButton::clicked, this, &GreenHouse::OnOrnamBtns);
    connect(ornamBtn5, &QPushButton::clicked, this, &GreenHouse::OnOrnamBtns);
    connect(ornamBtn6, &QPushButton::clicked, this, &GreenHouse::OnOrnamBtns);
    connect(ornamBtn7, &QPushButton::clicked, this, &GreenHouse::OnOrnamBtns);
    connect(ornamBtn8, &QPushButton::clicked, this, &GreenHouse::OnOrnamBtns);



}


void GreenHouse::setEmptyBtn()
{
    emptyBtn1 = new QPushButton("انتخاب پیاز گل", this);
    emptyBtn1->setGeometry(1000,340,160,25);
    emptyBtn1->setAutoFillBackground(true);
    QPalette palette = emptyBtn1->palette();
    palette.setColor(QPalette::Window, QColor(Qt::black));
    emptyBtn1->setPalette(palette);
    emptyBtn1->setStyleSheet("background-color: rgb(170, 170, 127);");
    emptyBtn1->setStyleSheet("background-color: #3cbaa2; solid black;");
    emptyBtn1->setVisible(false);

    emptyBtn2 = new QPushButton("انتخاب پیاز گل", this);
    emptyBtn2->setGeometry(740,340,160,25);
    emptyBtn2->setAutoFillBackground(true);
    emptyBtn2->setPalette(palette);
    emptyBtn2->setStyleSheet("background-color: rgb(170, 170, 127);");
    emptyBtn2->setStyleSheet("background-color: #3cbaa2; solid black;");
    emptyBtn2->setVisible(false);

    emptyBtn3 = new QPushButton("انتخاب پیاز گل", this);
    emptyBtn3->setGeometry(480,340,160,25);
    emptyBtn3->setAutoFillBackground(true);
    emptyBtn3->setPalette(palette);
    emptyBtn3->setStyleSheet("background-color: rgb(170, 170, 127);");
    emptyBtn3->setStyleSheet("background-color: #3cbaa2; solid black;");
    emptyBtn3->setVisible(false);

    emptyBtn4 = new QPushButton("انتخاب پیاز گل", this);
    emptyBtn4->setGeometry(230,340,160,25);
    emptyBtn4->setAutoFillBackground(true);
    emptyBtn4->setPalette(palette);
    emptyBtn4->setStyleSheet("background-color: rgb(170, 170, 127);");
    emptyBtn4->setStyleSheet("background-color: #3cbaa2; solid black;");
    emptyBtn4->setVisible(false);

    emptyBtn5 = new QPushButton("انتخاب پیاز گل", this);
    emptyBtn5->setGeometry(1000,630,160,25);
    emptyBtn5->setAutoFillBackground(true);
    emptyBtn5->setPalette(palette);
    emptyBtn5->setStyleSheet("background-color: rgb(170, 170, 127);");
    emptyBtn5->setStyleSheet("background-color: #3cbaa2; solid black;");
    emptyBtn5->setVisible(false);

    emptyBtn6 = new QPushButton("انتخاب پیاز گل", this);
    emptyBtn6->setGeometry(740,630,160,25);
    emptyBtn6->setAutoFillBackground(true);
    emptyBtn6->setPalette(palette);
    emptyBtn6->setStyleSheet("background-color: rgb(170, 170, 127);");
    emptyBtn6->setStyleSheet("background-color: #3cbaa2; solid black;");
    emptyBtn6->setVisible(false);

    emptyBtn7 = new QPushButton("انتخاب پیاز گل", this);
    emptyBtn7->setGeometry(480,630,160,25);
    emptyBtn7->setAutoFillBackground(true);
    emptyBtn7->setPalette(palette);
    emptyBtn7->setStyleSheet("background-color: rgb(170, 170, 127);");
    emptyBtn7->setStyleSheet("background-color: #3cbaa2; solid black;");
    emptyBtn7->setVisible(false);

    emptyBtn8 = new QPushButton("انتخاب پیاز گل", this);
    emptyBtn8->setGeometry(230,630,160,25);
    emptyBtn8->setAutoFillBackground(true);
    emptyBtn8->setPalette(palette);
    emptyBtn8->setStyleSheet("background-color: rgb(170, 170, 127);");
    emptyBtn8->setStyleSheet("background-color: #3cbaa2; solid black;");
    emptyBtn8->setVisible(false);
}

void GreenHouse::setRareBtn()
{
    rareBtn1 = new QPushButton("افزودن خاک", this);
    rareBtn1->setGeometry(1000,340,160,25);
    rareBtn1->setAutoFillBackground(true);
    QPalette palette = rareBtn1->palette();
    palette.setColor(QPalette::Window, QColor(Qt::black));
    rareBtn1->setPalette(palette);
    rareBtn1->setStyleSheet("background-color: rgb(170, 170, 127);");
    rareBtn1->setStyleSheet("background-color: #3cbaa2; solid black;");
    rareBtn1->setVisible(false);

    rareBtn2 = new QPushButton("افزودن خاک", this);
    rareBtn2->setGeometry(740,340,160,25);
    rareBtn2->setAutoFillBackground(true);
    rareBtn2->setPalette(palette);
    rareBtn2->setStyleSheet("background-color: rgb(170, 170, 127);");
    rareBtn2->setStyleSheet("background-color: #3cbaa2; solid black;");
    rareBtn2->setVisible(false);

    rareBtn3 = new QPushButton("", this);
    rareBtn3->setGeometry(480,340,160,25);
    rareBtn3->setAutoFillBackground(true);
    rareBtn3->setPalette(palette);
    rareBtn3->setStyleSheet("background-color: rgb(170, 170, 127);");
    rareBtn3->setStyleSheet("background-color: #3cbaa2; solid black;");
    rareBtn3->setVisible(false);

    rareBtn4 = new QPushButton("افزودن خاک", this);
    rareBtn4->setGeometry(230,340,160,25);
    rareBtn4->setAutoFillBackground(true);
    rareBtn4->setPalette(palette);
    rareBtn4->setStyleSheet("background-color: rgb(170, 170, 127);");
    rareBtn4->setStyleSheet("background-color: #3cbaa2; solid black;");
    rareBtn4->setVisible(false);

    rareBtn5 = new QPushButton("افزودن خاک", this);
    rareBtn5->setGeometry(1000,630,160,25);
    rareBtn5->setAutoFillBackground(true);
    rareBtn5->setPalette(palette);
    rareBtn5->setStyleSheet("background-color: rgb(170, 170, 127);");
    rareBtn5->setStyleSheet("background-color: #3cbaa2; solid black;");
    rareBtn5->setVisible(false);

    rareBtn6 = new QPushButton("افزودن خاک", this);
    rareBtn6->setGeometry(740,630,160,25);
    rareBtn6->setAutoFillBackground(true);
    rareBtn6->setPalette(palette);
    rareBtn6->setStyleSheet("background-color: rgb(170, 170, 127);");
    rareBtn6->setStyleSheet("background-color: #3cbaa2; solid black;");
    rareBtn6->setVisible(false);

    rareBtn7 = new QPushButton("افزودن خاک", this);
    rareBtn7->setGeometry(480,630,160,25);
    rareBtn7->setAutoFillBackground(true);
    rareBtn7->setPalette(palette);
    rareBtn7->setStyleSheet("background-color: rgb(170, 170, 127);");
    rareBtn7->setStyleSheet("background-color: #3cbaa2; solid black;");
    rareBtn7->setVisible(false);

    rareBtn8 = new QPushButton("افزودن خاک", this);
    rareBtn8->setGeometry(230,630,160,25);
    rareBtn8->setAutoFillBackground(true);
    rareBtn8->setPalette(palette);
    rareBtn8->setStyleSheet("background-color: rgb(170, 170, 127);");
    rareBtn8->setStyleSheet("background-color: #3cbaa2; solid black;");
    rareBtn8->setVisible(false);
}

void GreenHouse::setOrnamBtn()
{
    ornamBtn1 = new QPushButton("افزودن خاک", this);
    ornamBtn1->setGeometry(1000,340,160,25);
    ornamBtn1->setAutoFillBackground(true);
    QPalette palette = ornamBtn1->palette();
    palette.setColor(QPalette::Window, QColor(Qt::black));
    ornamBtn1->setPalette(palette);
    ornamBtn1->setStyleSheet("background-color: rgb(170, 170, 127);");
    ornamBtn1->setStyleSheet("background-color: #3cbaa2; solid black;");
    ornamBtn1->setVisible(false);

    ornamBtn2 = new QPushButton("افزودن خاک", this);
    ornamBtn2->setGeometry(740,340,160,25);
    ornamBtn2->setAutoFillBackground(true);
    ornamBtn2->setPalette(palette);
    ornamBtn2->setStyleSheet("background-color: rgb(170, 170, 127);");
    ornamBtn2->setStyleSheet("background-color: #3cbaa2; solid black;");
    ornamBtn2->setVisible(false);

    ornamBtn3 = new QPushButton("افزودن خاک", this);
    ornamBtn3->setGeometry(480,340,160,25);
    ornamBtn3->setAutoFillBackground(true);
    ornamBtn3->setPalette(palette);
    ornamBtn3->setStyleSheet("background-color: rgb(170, 170, 127);");
    ornamBtn3->setStyleSheet("background-color: #3cbaa2; solid black;");
    ornamBtn3->setVisible(false);

    ornamBtn4 = new QPushButton("افزودن خاک", this);
    ornamBtn4->setGeometry(230,340,160,25);
    ornamBtn4->setAutoFillBackground(true);
    ornamBtn4->setPalette(palette);
    ornamBtn4->setStyleSheet("background-color: rgb(170, 170, 127);");
    ornamBtn4->setStyleSheet("background-color: #3cbaa2; solid black;");
    ornamBtn4->setVisible(false);

    ornamBtn5 = new QPushButton("افزودن خاک", this);
    ornamBtn5->setGeometry(1000,630,160,25);
    ornamBtn5->setAutoFillBackground(true);
    ornamBtn5->setPalette(palette);
    ornamBtn5->setStyleSheet("background-color: rgb(170, 170, 127);");
    ornamBtn5->setStyleSheet("background-color: #3cbaa2; solid black;");
    ornamBtn5->setVisible(false);

    ornamBtn6 = new QPushButton("افزودن خاک", this);
    ornamBtn6->setGeometry(740,630,160,25);
    ornamBtn6->setAutoFillBackground(true);
    ornamBtn6->setPalette(palette);
    ornamBtn6->setStyleSheet("background-color: rgb(170, 170, 127);");
    ornamBtn6->setStyleSheet("background-color: #3cbaa2; solid black;");
    ornamBtn6->setVisible(false);

    ornamBtn7 = new QPushButton("افزودن خاک", this);
    ornamBtn7->setGeometry(480,630,160,25);
    ornamBtn7->setAutoFillBackground(true);
    ornamBtn7->setPalette(palette);
    ornamBtn7->setStyleSheet("background-color: rgb(170, 170, 127);");
    ornamBtn7->setStyleSheet("background-color: #3cbaa2; solid black;");
    ornamBtn7->setVisible(false);

    ornamBtn8 = new QPushButton("افزودن خاک", this);
    ornamBtn8->setGeometry(230,630,160,25);
    ornamBtn8->setAutoFillBackground(true);
    ornamBtn8->setPalette(palette);
    ornamBtn8->setStyleSheet("background-color: rgb(170, 170, 127);");
    ornamBtn8->setStyleSheet("background-color: #3cbaa2; solid black;");
    ornamBtn8->setVisible(false);
}

void GreenHouse::setOrBtn()
{
    orBtn1 = new QPushButton("افزودن خاک", this);
    orBtn1->setGeometry(1000,340,160,25);
    orBtn1->setAutoFillBackground(true);
    QPalette palette = orBtn1->palette();
    palette.setColor(QPalette::Window, QColor(Qt::black));
    orBtn1->setPalette(palette);
    orBtn1->setStyleSheet("background-color: rgb(170, 170, 127);");
    orBtn1->setStyleSheet("background-color: #3cbaa2; solid black;");
    orBtn1->setVisible(false);

    orBtn2 = new QPushButton("افزودن خاک", this);
    orBtn2->setGeometry(740,340,160,25);
    orBtn2->setAutoFillBackground(true);
    orBtn2->setPalette(palette);
    orBtn2->setStyleSheet("background-color: rgb(170, 170, 127);");
    orBtn2->setStyleSheet("background-color: #3cbaa2; solid black;");
    orBtn2->setVisible(false);

    orBtn3 = new QPushButton("افزودن خاک", this);
    orBtn3->setGeometry(480,340,160,25);
    orBtn3->setAutoFillBackground(true);
    orBtn3->setPalette(palette);
    orBtn3->setStyleSheet("background-color: rgb(170, 170, 127);");
    orBtn3->setStyleSheet("background-color: #3cbaa2; solid black;");
    orBtn3->setVisible(false);

    orBtn4 = new QPushButton("افزودن خاک", this);
    orBtn4->setGeometry(230,340,160,25);
    orBtn4->setAutoFillBackground(true);
    orBtn4->setPalette(palette);
    orBtn4->setStyleSheet("background-color: rgb(170, 170, 127);");
    orBtn4->setStyleSheet("background-color: #3cbaa2; solid black;");
    orBtn4->setVisible(false);

    orBtn5 = new QPushButton("افزودن خاک", this);
    orBtn5->setGeometry(1000,630,160,25);
    orBtn5->setAutoFillBackground(true);
    orBtn5->setPalette(palette);
    orBtn5->setStyleSheet("background-color: rgb(170, 170, 127);");
    orBtn5->setStyleSheet("background-color: #3cbaa2; solid black;");
    orBtn5->setVisible(false);

    orBtn6 = new QPushButton("افزودن خاک", this);
    orBtn6->setGeometry(740,630,160,25);
    orBtn6->setAutoFillBackground(true);
    orBtn6->setPalette(palette);
    orBtn6->setStyleSheet("background-color: rgb(170, 170, 127);");
    orBtn6->setStyleSheet("background-color: #3cbaa2; solid black;");
    orBtn6->setVisible(false);

    orBtn7 = new QPushButton("افزودن خاک", this);
    orBtn7->setGeometry(480,630,160,25);
    orBtn7->setAutoFillBackground(true);
    orBtn7->setPalette(palette);
    orBtn7->setStyleSheet("background-color: rgb(170, 170, 127);");
    orBtn7->setStyleSheet("background-color: #3cbaa2; solid black;");
    orBtn7->setVisible(false);

    orBtn8 = new QPushButton("افزودن خاک", this);
    orBtn8->setGeometry(230,630,160,25);
    orBtn8->setAutoFillBackground(true);
    orBtn8->setPalette(palette);
    orBtn8->setStyleSheet("background-color: rgb(170, 170, 127);");
    orBtn8->setStyleSheet("background-color: #3cbaa2; solid black;");
    orBtn8->setVisible(false);
}

void GreenHouse::setLockBtn()
{
    lockBtn1 = new QPushButton("بازگشایی", this);
    lockBtn1->setGeometry(1000,340,160,25);
    lockBtn1->setAutoFillBackground(true);
    QPalette palette = lockBtn1->palette();
    palette.setColor(QPalette::Window, QColor(Qt::black));
    lockBtn1->setPalette(palette);
    lockBtn1->setStyleSheet("background-color: rgb(170, 170, 127);");
    lockBtn1->setStyleSheet("background-color: #3cbaa2; solid black;");

    lockBtn2 = new QPushButton("بازگشایی", this);
    lockBtn2->setGeometry(740,340,160,25);
    lockBtn2->setAutoFillBackground(true);
    lockBtn2->setPalette(palette);
    lockBtn2->setStyleSheet("background-color: rgb(170, 170, 127);");
    lockBtn2->setStyleSheet("background-color: #3cbaa2; solid black;");

    lockBtn3 = new QPushButton("بازگشایی", this);
    lockBtn3->setGeometry(480,340,160,25);
    lockBtn3->setAutoFillBackground(true);
    lockBtn3->setPalette(palette);
    lockBtn3->setStyleSheet("background-color: rgb(170, 170, 127);");
    lockBtn3->setStyleSheet("background-color: #3cbaa2; solid black;");

    lockBtn4 = new QPushButton("بازگشایی", this);
    lockBtn4->setGeometry(230,340,160,25);
    lockBtn4->setAutoFillBackground(true);
    lockBtn4->setPalette(palette);
    lockBtn4->setStyleSheet("background-color: rgb(170, 170, 127);");
    lockBtn4->setStyleSheet("background-color: #3cbaa2; solid black;");

    lockBtn5 = new QPushButton("بازگشایی", this);
    lockBtn5->setGeometry(1000,630,160,25);
    lockBtn5->setAutoFillBackground(true);
    lockBtn5->setPalette(palette);
    lockBtn5->setStyleSheet("background-color: rgb(170, 170, 127);");
    lockBtn5->setStyleSheet("background-color: #3cbaa2; solid black;");

    lockBtn6 = new QPushButton("بازگشایی", this);
    lockBtn6->setGeometry(740,630,160,25);
    lockBtn6->setAutoFillBackground(true);
    lockBtn6->setPalette(palette);
    lockBtn6->setStyleSheet("background-color: rgb(170, 170, 127);");
    lockBtn6->setStyleSheet("background-color: #3cbaa2; solid black;");

    lockBtn7 = new QPushButton("بازگشایی", this);
    lockBtn7->setGeometry(480,630,160,25);
    lockBtn7->setAutoFillBackground(true);
    lockBtn7->setPalette(palette);
    lockBtn7->setStyleSheet("background-color: rgb(170, 170, 127);");
    lockBtn7->setStyleSheet("background-color: #3cbaa2; solid black;");

    lockBtn8 = new QPushButton("بازگشایی", this);
    lockBtn8->setGeometry(230,630,160,25);
    lockBtn8->setAutoFillBackground(true);
    lockBtn8->setPalette(palette);
    lockBtn8->setStyleSheet("background-color: rgb(170, 170, 127);");
    lockBtn8->setStyleSheet("background-color: #3cbaa2; solid black;");
}

void GreenHouse::setOrBudBtn()
{
    orBudBtn1 = new QPushButton("آب یا تخریب", this);
    orBudBtn1->setGeometry(1000,340,160,25);
    orBudBtn1->setAutoFillBackground(true);
    QPalette palette = orBudBtn1->palette();
    palette.setColor(QPalette::Window, QColor(Qt::black));
    orBudBtn1->setPalette(palette);
    orBudBtn1->setStyleSheet("background-color: rgb(170, 170, 127);");
    orBudBtn1->setStyleSheet("background-color: #3cbaa2; solid black;");
    orBudBtn1->setVisible(false);

    orBudBtn2 = new QPushButton("آب یا تخریب", this);
    orBudBtn2->setGeometry(740,340,160,25);
    orBudBtn2->setAutoFillBackground(true);
    orBudBtn2->setPalette(palette);
    orBudBtn2->setStyleSheet("background-color: rgb(170, 170, 127);");
    orBudBtn2->setStyleSheet("background-color: #3cbaa2; solid black;");
    orBudBtn2->setVisible(false);

    orBudBtn3 = new QPushButton("آب یا تخریب", this);
    orBudBtn3->setGeometry(480,340,160,25);
    orBudBtn3->setAutoFillBackground(true);
    orBudBtn3->setPalette(palette);
    orBudBtn3->setStyleSheet("background-color: rgb(170, 170, 127);");
    orBudBtn3->setStyleSheet("background-color: #3cbaa2; solid black;");
    orBudBtn3->setVisible(false);

    orBudBtn4 = new QPushButton("آب یا تخریب", this);
    orBudBtn4->setGeometry(230,340,160,25);
    orBudBtn4->setAutoFillBackground(true);
    orBudBtn4->setPalette(palette);
    orBudBtn4->setStyleSheet("background-color: rgb(170, 170, 127);");
    orBudBtn4->setStyleSheet("background-color: #3cbaa2; solid black;");
    orBudBtn4->setVisible(false);

    orBudBtn5 = new QPushButton("آب یا تخریب", this);
    orBudBtn5->setGeometry(1000,630,160,25);
    orBudBtn5->setAutoFillBackground(true);
    orBudBtn5->setPalette(palette);
    orBudBtn5->setStyleSheet("background-color: rgb(170, 170, 127);");
    orBudBtn5->setStyleSheet("background-color: #3cbaa2; solid black;");
    orBudBtn5->setVisible(false);

    orBudBtn6 = new QPushButton("آب یا تخریب", this);
    orBudBtn6->setGeometry(740,630,160,25);
    orBudBtn6->setAutoFillBackground(true);
    orBudBtn6->setPalette(palette);
    orBudBtn6->setStyleSheet("background-color: rgb(170, 170, 127);");
    orBudBtn6->setStyleSheet("background-color: #3cbaa2; solid black;");
    orBudBtn6->setVisible(false);

    orBudBtn7 = new QPushButton("آب یا تخریب", this);
    orBudBtn7->setGeometry(480,630,160,25);
    orBudBtn7->setAutoFillBackground(true);
    orBudBtn7->setPalette(palette);
    orBudBtn7->setStyleSheet("background-color: rgb(170, 170, 127);");
    orBudBtn7->setStyleSheet("background-color: #3cbaa2; solid black;");
    orBudBtn7->setVisible(false);

    orBudBtn8 = new QPushButton("آب یا تخریب", this);
    orBudBtn8->setGeometry(230,630,160,25);
    orBudBtn8->setAutoFillBackground(true);
    orBudBtn8->setPalette(palette);
    orBudBtn8->setStyleSheet("background-color: rgb(170, 170, 127);");
    orBudBtn8->setStyleSheet("background-color: #3cbaa2; solid black;");
    orBudBtn8->setVisible(false);
}

void GreenHouse::setRareBudBtn()
{
    rareBudBtn1 = new QPushButton("آب یا تخریب", this);
    rareBudBtn1->setGeometry(1000,340,160,25);
    rareBudBtn1->setAutoFillBackground(true);
    QPalette palette = rareBudBtn1->palette();
    palette.setColor(QPalette::Window, QColor(Qt::black));
    rareBudBtn1->setPalette(palette);
    rareBudBtn1->setStyleSheet("background-color: rgb(170, 170, 127);");
    rareBudBtn1->setStyleSheet("background-color: #3cbaa2; solid black;");
    rareBudBtn1->setVisible(false);

    rareBudBtn2 = new QPushButton("آب یا تخریب", this);
    rareBudBtn2->setGeometry(740,340,160,25);
    rareBudBtn2->setAutoFillBackground(true);
    rareBudBtn2->setPalette(palette);
    rareBudBtn2->setStyleSheet("background-color: rgb(170, 170, 127);");
    rareBudBtn2->setStyleSheet("background-color: #3cbaa2; solid black;");
    rareBudBtn2->setVisible(false);

    rareBudBtn3 = new QPushButton("آب یا تخریب", this);
    rareBudBtn3->setGeometry(480,340,160,25);
    rareBudBtn3->setAutoFillBackground(true);
    rareBudBtn3->setPalette(palette);
    rareBudBtn3->setStyleSheet("background-color: rgb(170, 170, 127);");
    rareBudBtn3->setStyleSheet("background-color: #3cbaa2; solid black;");
    rareBudBtn3->setVisible(false);

    rareBudBtn4 = new QPushButton("آب یا تخریب", this);
    rareBudBtn4->setGeometry(230,340,160,25);
    rareBudBtn4->setAutoFillBackground(true);
    rareBudBtn4->setPalette(palette);
    rareBudBtn4->setStyleSheet("background-color: rgb(170, 170, 127);");
    rareBudBtn4->setStyleSheet("background-color: #3cbaa2; solid black;");
    rareBudBtn4->setVisible(false);

    rareBudBtn5 = new QPushButton("آب یا تخریب", this);
    rareBudBtn5->setGeometry(1000,630,160,25);
    rareBudBtn5->setAutoFillBackground(true);
    rareBudBtn5->setPalette(palette);
    rareBudBtn5->setStyleSheet("background-color: rgb(170, 170, 127);");
    rareBudBtn5->setStyleSheet("background-color: #3cbaa2; solid black;");
    rareBudBtn5->setVisible(false);

    rareBudBtn6 = new QPushButton("آب یا تخریب", this);
    rareBudBtn6->setGeometry(740,630,160,25);
    rareBudBtn6->setAutoFillBackground(true);
    rareBudBtn6->setPalette(palette);
    rareBudBtn6->setStyleSheet("background-color: rgb(170, 170, 127);");
    rareBudBtn6->setStyleSheet("background-color: #3cbaa2; solid black;");
    rareBudBtn6->setVisible(false);

    rareBudBtn7 = new QPushButton("آب یا تخریب", this);
    rareBudBtn7->setGeometry(480,630,160,25);
    rareBudBtn7->setAutoFillBackground(true);
    rareBudBtn7->setPalette(palette);
    rareBudBtn7->setStyleSheet("background-color: rgb(170, 170, 127);");
    rareBudBtn7->setStyleSheet("background-color: #3cbaa2; solid black;");
    rareBudBtn7->setVisible(false);

    rareBudBtn8 = new QPushButton("آب یا تخریب", this);
    rareBudBtn8->setGeometry(230,630,160,25);
    rareBudBtn8->setAutoFillBackground(true);
    rareBudBtn8->setPalette(palette);
    rareBudBtn8->setStyleSheet("background-color: rgb(170, 170, 127);");
    rareBudBtn8->setStyleSheet("background-color: #3cbaa2; solid black;");
    rareBudBtn8->setVisible(false);
}

void GreenHouse::setOrnamBudBtn()
{
    ornamBudBtn1 = new QPushButton("آب یا تخریب", this);
    ornamBudBtn1->setGeometry(1000,340,160,25);
    ornamBudBtn1->setAutoFillBackground(true);
    QPalette palette = ornamBudBtn1->palette();
    palette.setColor(QPalette::Window, QColor(Qt::black));
    ornamBudBtn1->setPalette(palette);
    ornamBudBtn1->setStyleSheet("background-color: rgb(170, 170, 127);");
    ornamBudBtn1->setStyleSheet("background-color: #3cbaa2; solid black;");
    ornamBudBtn1->setVisible(false);

    ornamBudBtn2 = new QPushButton("آب یا تخریب", this);
    ornamBudBtn2->setGeometry(740,340,160,25);
    ornamBudBtn2->setAutoFillBackground(true);
    ornamBudBtn2->setPalette(palette);
    ornamBudBtn2->setStyleSheet("background-color: rgb(170, 170, 127);");
    ornamBudBtn2->setStyleSheet("background-color: #3cbaa2; solid black;");
    ornamBudBtn2->setVisible(false);

    ornamBudBtn3 = new QPushButton("آب یا تخریب", this);
    ornamBudBtn3->setGeometry(480,340,160,25);
    ornamBudBtn3->setAutoFillBackground(true);
    ornamBudBtn3->setPalette(palette);
    ornamBudBtn3->setStyleSheet("background-color: rgb(170, 170, 127);");
    ornamBudBtn3->setStyleSheet("background-color: #3cbaa2; solid black;");
    ornamBudBtn3->setVisible(false);

    ornamBudBtn4 = new QPushButton("آب یا تخریب", this);
    ornamBudBtn4->setGeometry(230,340,160,25);
    ornamBudBtn4->setAutoFillBackground(true);
    ornamBudBtn4->setPalette(palette);
    ornamBudBtn4->setStyleSheet("background-color: rgb(170, 170, 127);");
    ornamBudBtn4->setStyleSheet("background-color: #3cbaa2; solid black;");
    ornamBudBtn4->setVisible(false);

    ornamBudBtn5 = new QPushButton("آب یا تخریب", this);
    ornamBudBtn5->setGeometry(1000,630,160,25);
    ornamBudBtn5->setAutoFillBackground(true);
    ornamBudBtn5->setPalette(palette);
    ornamBudBtn5->setStyleSheet("background-color: rgb(170, 170, 127);");
    ornamBudBtn5->setStyleSheet("background-color: #3cbaa2; solid black;");
    ornamBudBtn5->setVisible(false);

    ornamBudBtn6 = new QPushButton("آب یا تخریب", this);
    ornamBudBtn6->setGeometry(740,630,160,25);
    ornamBudBtn6->setAutoFillBackground(true);
    ornamBudBtn6->setPalette(palette);
    ornamBudBtn6->setStyleSheet("background-color: rgb(170, 170, 127);");
    ornamBudBtn6->setStyleSheet("background-color: #3cbaa2; solid black;");
    ornamBudBtn6->setVisible(false);

    ornamBudBtn7 = new QPushButton("آب یا تخریب", this);
    ornamBudBtn7->setGeometry(480,630,160,25);
    ornamBudBtn7->setAutoFillBackground(true);
    ornamBudBtn7->setPalette(palette);
    ornamBudBtn7->setStyleSheet("background-color: rgb(170, 170, 127);");
    ornamBudBtn7->setStyleSheet("background-color: #3cbaa2; solid black;");
    ornamBudBtn7->setVisible(false);

    ornamBudBtn8 = new QPushButton("آب یا تخریب", this);
    ornamBudBtn8->setGeometry(230,630,160,25);
    ornamBudBtn8->setAutoFillBackground(true);
    ornamBudBtn8->setPalette(palette);
    ornamBudBtn8->setStyleSheet("background-color: rgb(170, 170, 127);");
    ornamBudBtn8->setStyleSheet("background-color: #3cbaa2; solid black;");
    ornamBudBtn8->setVisible(false);
}

void GreenHouse::OnOrBtns()
{
    QPushButton *temp = (QPushButton *)sender();
    QStringList items;
    items << tr("خاک") << tr("تخریب");
    bool ok;

    QString item = QInputDialog::getItem(this, tr("QInputDialog::getItem()"),
                                        tr("Season:"), items, 0, false, &ok);

    if (ok && !items.isEmpty())
    {
        if (item == "خاک")
        {
            try
            {
                personPtr->set_flower(new OrdinaryFlowerBuds(personPtr->get_OrdinaryFlower(), personPtr->get_Soil()));
                temp->setVisible(false);
                if (temp == orBtn1)
                {
                    ordinary1->setVisible(false);
                    orBudBtn1->setVisible(true);
                    ordinaryBud1->setVisible(true);
                }
                if (temp == orBtn2)
                {
                    ordinary2->setVisible(false);
                    orBudBtn2->setVisible(true);
                    ordinaryBud2->setVisible(true);
                }
                if (temp == orBtn3)
                {
                    ordinary3->setVisible(false);
                    orBudBtn3->setVisible(true);
                    ordinaryBud3->setVisible(true);
                }
                if (temp == orBtn4)
                {
                    ordinary4->setVisible(false);
                    orBudBtn4->setVisible(true);
                    ordinaryBud4->setVisible(true);
                }
                if (temp == orBtn5)
                {
                    ordinary5->setVisible(false);
                    orBudBtn5->setVisible(true);
                    ordinaryBud5->setVisible(true);
                }
                if (temp == orBtn6)
                {
                    ordinary6->setVisible(false);
                    orBudBtn6->setVisible(true);
                    ordinaryBud6->setVisible(true);
                }
                if (temp == orBtn7)
                {
                    ordinary7->setVisible(false);
                    orBudBtn7->setVisible(true);
                    ordinaryBud7->setVisible(true);
                }
                if (temp == orBtn8)
                {
                    ordinary8->setVisible(false);
                    orBudBtn8->setVisible(true);
                    ordinaryBud8->setVisible(true);
                }
            }
            catch (const std::runtime_error& e)
            {
                std::cout << e.what() << std::endl;
                QMessageBox messageBox;
                messageBox.critical(0,"Error","پول کافی ندارید!");
                messageBox.setFixedSize(500,200);
            }
        }
        if (item == "تخریب")
        {
            try
            {
                OrdinaryFlowers::inc_ordinaryFlower_count();
                totalDeletedFLower++;
                delete personPtr->get_OrdinaryFlower();
                temp->setVisible(false);
                if (temp == orBtn1)
                {
                    ordinary1->setVisible(false);
                    empty1->setVisible(true);
                    emptyBtn1->setVisible(true);
                }
                if (temp == orBtn2)
                {
                    ordinary2->setVisible(false);
                    empty2->setVisible(true);
                    emptyBtn2->setVisible(true);
                }
                if (temp == orBtn3)
                {
                    ordinary3->setVisible(false);
                    empty3->setVisible(true);
                    emptyBtn3->setVisible(true);
                }
                if (temp == orBtn4)
                {
                    ordinary4->setVisible(false);
                    empty4->setVisible(true);
                    emptyBtn4->setVisible(true);
                }
                if (temp == orBtn5)
                {
                    ordinary5->setVisible(false);
                    empty5->setVisible(true);
                    emptyBtn5->setVisible(true);
                }
                if (temp == orBtn6)
                {
                    ordinary6->setVisible(false);
                    empty6->setVisible(true);
                    emptyBtn6->setVisible(true);
                }
                if (temp == orBtn7)
                {
                    ordinary7->setVisible(false);
                    empty7->setVisible(true);
                    emptyBtn7->setVisible(true);
                }
                if (temp == orBtn8)
                {
                    ordinary8->setVisible(false);
                    empty8->setVisible(true);
                    emptyBtn8->setVisible(true);
                }
            }
            catch (const std::runtime_error& e)
            {
                std::cout << e.what() << std::endl;
                QMessageBox messageBox;
                messageBox.critical(0,"Error","پول کافی ندارید!");
                messageBox.setFixedSize(500,200);
            }
        }
    }
}

void GreenHouse::OnRareBtns()
{
    QPushButton *temp = (QPushButton *)sender();
    QStringList items;
    items << tr("خاک") << tr("تخریب");
    bool ok;

    QString item = QInputDialog::getItem(this, tr("QInputDialog::getItem()"),
                                        tr("Season:"), items, 0, false, &ok);

    if (ok && !items.isEmpty())
    {
        if (item == "خاک")
        {
            try
            {
                personPtr->set_flower(new RareFlowerbuds(personPtr->get_RareFlower(), personPtr->get_Soil()));
                temp->setVisible(false);
                if (temp == rareBtn1)
                {
                    rare1->setVisible(false);
                    rareBudBtn1->setVisible(true);
                    rareBud1->setVisible(true);
                }
                if (temp == rareBtn2)
                {
                    rare2->setVisible(false);
                    rareBudBtn2->setVisible(true);
                    rareBud2->setVisible(true);
                }
                if (temp == rareBtn3)
                {
                    rare3->setVisible(false);
                    rareBudBtn3->setVisible(true);
                    rareBud3->setVisible(true);
                }
                if (temp == rareBtn4)
                {
                    rare4->setVisible(false);
                    rareBudBtn4->setVisible(true);
                    rareBud4->setVisible(true);
                }
                if (temp == rareBtn5)
                {
                    rare5->setVisible(false);
                    rareBudBtn5->setVisible(true);
                    rareBud5->setVisible(true);
                }
                if (temp == rareBtn6)
                {
                    rare6->setVisible(false);
                    rareBudBtn6->setVisible(true);
                    rareBud6->setVisible(true);
                }
                if (temp == rareBtn7)
                {
                    rare7->setVisible(false);
                    rareBudBtn7->setVisible(true);
                    rareBud7->setVisible(true);
                }
                if (temp == rareBtn8)
                {
                    rare8->setVisible(false);
                    rareBudBtn8->setVisible(true);
                    rareBud8->setVisible(true);
                }
            }
            catch (const std::runtime_error& e)
            {
                std::cout << e.what() << std::endl;
                QMessageBox messageBox;
                messageBox.critical(0,"Error","پول کافی ندارید!");
                messageBox.setFixedSize(500,200);
            }
        }
        if (item == "تخریب")
        {
            try
            {
                RareFlower::inc_rareFlower_count();
                totalDeletedFLower++;
                delete personPtr->get_RareFlower();
                temp->setVisible(false);
                if (temp == rareBtn1)
                {
                    rare1->setVisible(false);
                    empty1->setVisible(true);
                    emptyBtn1->setVisible(true);
                }
                if (temp == rareBtn2)
                {
                    rare2->setVisible(false);
                    empty2->setVisible(true);
                    emptyBtn2->setVisible(true);
                }
                if (temp == rareBtn3)
                {
                    rare3->setVisible(false);
                    empty3->setVisible(true);
                    emptyBtn3->setVisible(true);
                }
                if (temp == rareBtn4)
                {
                    rare4->setVisible(false);
                    empty4->setVisible(true);
                    emptyBtn4->setVisible(true);
                }
                if (temp == rareBtn5)
                {
                    rare5->setVisible(false);
                    empty5->setVisible(true);
                    emptyBtn5->setVisible(true);
                }
                if (temp == rareBtn6)
                {
                    rare6->setVisible(false);
                    empty6->setVisible(true);
                    emptyBtn6->setVisible(true);
                }
                if (temp == rareBtn7)
                {
                    rare7->setVisible(false);
                    empty7->setVisible(true);
                    emptyBtn7->setVisible(true);
                }
                if (temp == rareBtn8)
                {
                    rare8->setVisible(false);
                    empty8->setVisible(true);
                    emptyBtn8->setVisible(true);
                }
            }
            catch (const std::runtime_error& e)
            {
                std::cout << e.what() << std::endl;
                QMessageBox messageBox;
                messageBox.critical(0,"Error","پول کافی ندارید!");
                messageBox.setFixedSize(500,200);
            }
        }
    }
}

void GreenHouse::OnOrnamBtns()
{
    QPushButton *temp = (QPushButton *)sender();
    QStringList items;
    items << tr("خاک") << tr("تخریب");
    bool ok;

    QString item = QInputDialog::getItem(this, tr("QInputDialog::getItem()"),
                                        tr("Season:"), items, 0, false, &ok);

    if (ok && !items.isEmpty())
    {
        if (item == "خاک")
        {
            try
            {
                personPtr->set_flower(new OrnamentalBud(personPtr->get_OrnamentalFlower(), personPtr->get_Soil()));
                temp->setVisible(false);
                if (temp == ornamBtn1)
                {
                    ornamental1->setVisible(false);
                    ornamBudBtn1->setVisible(true);
                    ornamentalBud1->setVisible(true);
                }
                if (temp == ornamBtn2)
                {
                    ornamental2->setVisible(false);
                    ornamBudBtn2->setVisible(true);
                    ornamentalBud2->setVisible(true);
                }
                if (temp == ornamBtn3)
                {
                    ornamental3->setVisible(false);
                    ornamBudBtn3->setVisible(true);
                    ornamentalBud3->setVisible(true);
                }
                if (temp == ornamBtn4)
                {
                    ornamental4->setVisible(false);
                    ornamBudBtn4->setVisible(true);
                    ornamentalBud4->setVisible(true);
                }
                if (temp == ornamBtn5)
                {
                    ornamental5->setVisible(false);
                    ornamBudBtn5->setVisible(true);
                    ornamentalBud5->setVisible(true);
                }
                if (temp == ornamBtn6)
                {
                    ornamental6->setVisible(false);
                    ornamBudBtn6->setVisible(true);
                    ornamentalBud6->setVisible(true);
                }
                if (temp == ornamBtn7)
                {
                    ornamental7->setVisible(false);
                    ornamBudBtn7->setVisible(true);
                    ornamentalBud7->setVisible(true);
                }
                if (temp == ornamBtn8)
                {
                    ornamental8->setVisible(false);
                    ornamBudBtn8->setVisible(true);
                    ornamentalBud8->setVisible(true);
                }
            }
            catch (const std::runtime_error& e)
            {
                std::cout << e.what() << std::endl;
                QMessageBox messageBox;
                messageBox.critical(0,"Error","پول کافی ندارید!");
                messageBox.setFixedSize(500,200);
            }
        }
        if (item == "تخریب")
        {
            try
            {
                OrnamentalFlower::inc_ornamentalFlower_count();
                totalDeletedFLower++;
                delete personPtr->get_OrnamentalFlower();
                temp->setVisible(false);
                if (temp == ornamBtn1)
                {
                    ornamental1->setVisible(false);
                    empty1->setVisible(true);
                    emptyBtn1->setVisible(true);
                }
                if (temp == ornamBtn2)
                {
                    ornamental2->setVisible(false);
                    empty2->setVisible(true);
                    emptyBtn2->setVisible(true);
                }
                if (temp == ornamBtn1)
                {
                    ornamental3->setVisible(false);
                    empty3->setVisible(true);
                    emptyBtn3->setVisible(true);
                }
                if (temp == ornamBtn4)
                {
                    ornamental4->setVisible(false);
                    empty4->setVisible(true);
                    emptyBtn4->setVisible(true);
                }
                if (temp == ornamBtn5)
                {
                    ornamental5->setVisible(false);
                    empty5->setVisible(true);
                    emptyBtn5->setVisible(true);
                }
                if (temp == ornamBtn6)
                {
                    ornamental6->setVisible(false);
                    empty6->setVisible(true);
                    emptyBtn6->setVisible(true);
                }
                if (temp == ornamBtn7)
                {
                    ornamental7->setVisible(false);
                    empty7->setVisible(true);
                    emptyBtn7->setVisible(true);
                }
                if (temp == ornamBtn8)
                {
                    ornamental8->setVisible(false);
                    empty8->setVisible(true);
                    emptyBtn8->setVisible(true);
                }
            }
            catch (const std::runtime_error& e)
            {
                std::cout << e.what() << std::endl;
                QMessageBox messageBox;
                messageBox.critical(0,"Error","پول کافی ندارید!");
                messageBox.setFixedSize(500,200);
            }
        }
    }
}

void GreenHouse::OnEmptyBtn1()
{
    QStringList items;
    items << tr("پیاز گل عادی") << tr("پیاز گل نادر") << tr("پیاز گل زینتی");
    bool ok;

    QString item = QInputDialog::getItem(this, tr("QInputDialog::getItem()"),
                                        tr("Season:"), items, 0, false, &ok);

    if (ok && !items.isEmpty())
    {
        if (item == "پیاز گل عادی")
        {
            if (personPtr->get_OrdinaryUnion_count() >= 1)
            {
                personPtr->set_flower(new OrdinaryFlowers(personPtr->get_OrdinaryUnion()));
                emptyBtn1->setVisible(false);
                empty1->setVisible(false);
                ordinary1->setVisible(true);
                orBtn1->setVisible(true);
            }
            else
            {
                QMessageBox messageBox;
                messageBox.critical(0,"Error","پول کافی ندارید!");
                messageBox.setFixedSize(500,200);
            }
        }
        if (item == "پیاز گل نادر")
        {
            if (personPtr->get_RareOnion_count() >= 1)
            {
                personPtr->set_flower(new RareFlower(personPtr->get_RareOnion()));
                emptyBtn1->setVisible(false);
                empty1->setVisible(false);
                rare1->setVisible(true);
                rareBtn1->setVisible(true);
            }
            else
            {
                QMessageBox messageBox;
                messageBox.critical(0,"Error","پول کافی ندارید!");
                messageBox.setFixedSize(500,200);
            }
        }
        if (item == "پیاز گل زینتی")
        {
            if (personPtr->get_OrnamentalOnion_count() >= 1)
            {
                personPtr->set_flower(new OrnamentalFlower(personPtr->get_OrnamentalOnion()));
                emptyBtn1->setVisible(false);
                empty1->setVisible(false);
                ornamental1->setVisible(true);
                ornamBtn1->setVisible(true);
            }
            else
            {
                QMessageBox messageBox;
                messageBox.critical(0,"Error","پول کافی ندارید!");
                messageBox.setFixedSize(500,200);
            }
        }
    }
}

void GreenHouse::OnEmptyBtn2()
{
    QStringList items;
    items << tr("پیاز گل عادی") << tr("پیاز گل نادر") << tr("پیاز گل زینتی");
    bool ok;

    QString item = QInputDialog::getItem(this, tr("QInputDialog::getItem()"),
                                        tr("Season:"), items, 0, false, &ok);

    if (ok && !items.isEmpty())
    {
        if (item == "پیاز گل عادی")
        {
            if (personPtr->get_OrdinaryUnion_count() >= 1)
            {
                personPtr->set_flower(new OrdinaryFlowers(personPtr->get_OrdinaryUnion()));
                emptyBtn2->setVisible(false);
                empty2->setVisible(false);
                ordinary2->setVisible(true);
                orBtn2->setVisible(true);
            }
            else
            {
                QMessageBox messageBox;
                messageBox.critical(0,"Error","پول کافی ندارید!");
                messageBox.setFixedSize(500,200);
            }
        }
        if (item == "پیاز گل نادر")
        {
            if (personPtr->get_RareOnion_count() >= 1)
            {
                personPtr->set_flower(new RareFlower(personPtr->get_RareOnion()));
                emptyBtn2->setVisible(false);
                empty2->setVisible(false);
                rare2->setVisible(true);
                rareBtn2->setVisible(true);
            }
            else
            {
                QMessageBox messageBox;
                messageBox.critical(0,"Error","پول کافی ندارید!");
                messageBox.setFixedSize(500,200);
            }
        }
        if (item == "پیاز گل زینتی")
        {
            if (personPtr->get_OrnamentalOnion_count() >= 1)
            {
                personPtr->set_flower(new OrnamentalFlower(personPtr->get_OrnamentalOnion()));
                emptyBtn2->setVisible(false);
                empty2->setVisible(false);
                ornamental2->setVisible(true);
                ornamBtn2->setVisible(true);
            }
            else
            {
                QMessageBox messageBox;
                messageBox.critical(0,"Error","پول کافی ندارید!");
                messageBox.setFixedSize(500,200);
            }
        }
    }
}

void GreenHouse::OnEmptyBtn3()
{
    QStringList items;
    items << tr("پیاز گل عادی") << tr("پیاز گل نادر") << tr("پیاز گل زینتی");
    bool ok;

    QString item = QInputDialog::getItem(this, tr("QInputDialog::getItem()"),
                                        tr("Season:"), items, 0, false, &ok);

    if (ok && !items.isEmpty())
    {
        if (item == "پیاز گل عادی")
        {
            if (personPtr->get_OrdinaryUnion_count() >= 1)
            {
                personPtr->set_flower(new OrdinaryFlowers(personPtr->get_OrdinaryUnion()));
                emptyBtn3->setVisible(false);
                empty3->setVisible(false);
                ordinary3->setVisible(true);
                orBtn3->setVisible(true);
            }
            else
            {
                QMessageBox messageBox;
                messageBox.critical(0,"Error","پول کافی ندارید!");
                messageBox.setFixedSize(500,200);
            }
        }
        if (item == "پیاز گل نادر")
        {
            if (personPtr->get_RareOnion_count() >= 1)
            {
                personPtr->set_flower(new RareFlower(personPtr->get_RareOnion()));
                emptyBtn3->setVisible(false);
                empty3->setVisible(false);
                rare3->setVisible(true);
                rareBtn3->setVisible(true);
            }
            else
            {
                QMessageBox messageBox;
                messageBox.critical(0,"Error","پول کافی ندارید!");
                messageBox.setFixedSize(500,200);
            }
        }
        if (item == "پیاز گل زینتی")
        {
            if (personPtr->get_OrnamentalOnion_count() >= 1)
            {
                personPtr->set_flower(new OrnamentalFlower(personPtr->get_OrnamentalOnion()));
                emptyBtn3->setVisible(false);
                empty3->setVisible(false);
                ornamental3->setVisible(true);
                ornamBtn3->setVisible(true);
            }
            else
            {
                QMessageBox messageBox;
                messageBox.critical(0,"Error","پول کافی ندارید!");
                messageBox.setFixedSize(500,200);
            }
        }
    }
}

void GreenHouse::OnEmptyBtn4()
{
    QStringList items;
    items << tr("پیاز گل عادی") << tr("پیاز گل نادر") << tr("پیاز گل زینتی");
    bool ok;

    QString item = QInputDialog::getItem(this, tr("QInputDialog::getItem()"),
                                        tr("Season:"), items, 0, false, &ok);

    if (ok && !items.isEmpty())
    {
        if (item == "پیاز گل عادی")
        {
            if (personPtr->get_OrdinaryUnion_count() >= 1)
            {
                personPtr->set_flower(new OrdinaryFlowers(personPtr->get_OrdinaryUnion()));
                emptyBtn4->setVisible(false);
                empty4->setVisible(false);
                ordinary4->setVisible(true);
                orBtn4->setVisible(true);
            }
            else
            {
                QMessageBox messageBox;
                messageBox.critical(0,"Error","پول کافی ندارید!");
                messageBox.setFixedSize(500,200);
            }
        }
        if (item == "پیاز گل نادر")
        {
            if (personPtr->get_RareOnion_count() >= 1)
            {
                personPtr->set_flower(new RareFlower(personPtr->get_RareOnion()));
                emptyBtn4->setVisible(false);
                empty4->setVisible(false);
                rare4->setVisible(true);
                rareBtn4->setVisible(true);
            }
            else
            {
                QMessageBox messageBox;
                messageBox.critical(0,"Error","پول کافی ندارید!");
                messageBox.setFixedSize(500,200);
            }
        }
        if (item == "پیاز گل زینتی")
        {
            if (personPtr->get_OrnamentalOnion_count() >= 1)
            {
                personPtr->set_flower(new OrnamentalFlower(personPtr->get_OrnamentalOnion()));
                emptyBtn4->setVisible(false);
                empty4->setVisible(false);
                ornamental4->setVisible(true);
                ornamBtn4->setVisible(true);
            }
            else
            {
                QMessageBox messageBox;
                messageBox.critical(0,"Error","پول کافی ندارید!");
                messageBox.setFixedSize(500,200);
            }
        }
    }
}

void GreenHouse::OnEmptyBtn5()
{
    QStringList items;
    items << tr("پیاز گل عادی") << tr("پیاز گل نادر") << tr("پیاز گل زینتی");
    bool ok;

    QString item = QInputDialog::getItem(this, tr("QInputDialog::getItem()"),
                                        tr("Season:"), items, 0, false, &ok);

    if (ok && !items.isEmpty())
    {
        if (item == "پیاز گل عادی")
        {
            if (personPtr->get_OrdinaryUnion_count() >= 1)
            {
                personPtr->set_flower(new OrdinaryFlowers(personPtr->get_OrdinaryUnion()));
                emptyBtn5->setVisible(false);
                empty5->setVisible(false);
                ordinary5->setVisible(true);
                orBtn5->setVisible(true);
            }
            else
            {
                QMessageBox messageBox;
                messageBox.critical(0,"Error","پول کافی ندارید!");
                messageBox.setFixedSize(500,200);
            }
        }
        if (item == "پیاز گل نادر")
        {
            if (personPtr->get_RareOnion_count() >= 1)
            {
                personPtr->set_flower(new RareFlower(personPtr->get_RareOnion()));
                emptyBtn5->setVisible(false);
                empty5->setVisible(false);
                rare5->setVisible(true);
                rareBtn5->setVisible(true);
            }
            else
            {
                QMessageBox messageBox;
                messageBox.critical(0,"Error","پول کافی ندارید!");
                messageBox.setFixedSize(500,200);
            }
        }
        if (item == "پیاز گل زینتی")
        {
            if (personPtr->get_OrnamentalOnion_count() >= 1)
            {
                personPtr->set_flower(new OrnamentalFlower(personPtr->get_OrnamentalOnion()));
                emptyBtn5->setVisible(false);
                empty5->setVisible(false);
                ornamental5->setVisible(true);
                ornamBtn5->setVisible(true);
            }
            else
            {
                QMessageBox messageBox;
                messageBox.critical(0,"Error","پول کافی ندارید!");
                messageBox.setFixedSize(500,200);
            }
        }
    }
}

void GreenHouse::OnEmptyBtn6()
{
    QStringList items;
    items << tr("پیاز گل عادی") << tr("پیاز گل نادر") << tr("پیاز گل زینتی");
    bool ok;

    QString item = QInputDialog::getItem(this, tr("QInputDialog::getItem()"),
                                        tr("Season:"), items, 0, false, &ok);

    if (ok && !items.isEmpty())
    {
        if (item == "پیاز گل عادی")
        {
            if (personPtr->get_OrdinaryUnion_count() >= 1)
            {
                personPtr->set_flower(new OrdinaryFlowers(personPtr->get_OrdinaryUnion()));
                emptyBtn6->setVisible(false);
                empty6->setVisible(false);
                ordinary6->setVisible(true);
                orBtn6->setVisible(true);
            }
            else
            {
                QMessageBox messageBox;
                messageBox.critical(0,"Error","پول کافی ندارید!");
                messageBox.setFixedSize(500,200);
            }
        }
        if (item == "پیاز گل نادر")
        {
            if (personPtr->get_RareOnion_count() >= 1)
            {
                personPtr->set_flower(new RareFlower(personPtr->get_RareOnion()));
                emptyBtn6->setVisible(false);
                empty6->setVisible(false);
                rare6->setVisible(true);
                rareBtn6->setVisible(true);
            }
            else
            {
                QMessageBox messageBox;
                messageBox.critical(0,"Error","پول کافی ندارید!");
                messageBox.setFixedSize(500,200);
            }
        }
        if (item == "پیاز گل زینتی")
        {
            if (personPtr->get_OrnamentalOnion_count() >= 1)
            {
                personPtr->set_flower(new OrnamentalFlower(personPtr->get_OrnamentalOnion()));
                emptyBtn6->setVisible(false);
                empty6->setVisible(false);
                ornamental6->setVisible(true);
                ornamBtn6->setVisible(true);
            }
            else
            {
                QMessageBox messageBox;
                messageBox.critical(0,"Error","پول کافی ندارید!");
                messageBox.setFixedSize(500,200);
            }
        }
    }
}

void GreenHouse::OnEmptyBtn7()
{
    QStringList items;
    items << tr("پیاز گل عادی") << tr("پیاز گل نادر") << tr("پیاز گل زینتی");
    bool ok;

    QString item = QInputDialog::getItem(this, tr("QInputDialog::getItem()"),
                                        tr("Season:"), items, 0, false, &ok);

    if (ok && !items.isEmpty())
    {
        if (item == "پیاز گل عادی")
        {
            if (personPtr->get_OrdinaryUnion_count() >= 1)
            {
                personPtr->set_flower(new OrdinaryFlowers(personPtr->get_OrdinaryUnion()));
                emptyBtn7->setVisible(false);
                empty7->setVisible(false);
                ordinary7->setVisible(true);
                orBtn7->setVisible(true);
            }
            else
            {
                QMessageBox messageBox;
                messageBox.critical(0,"Error","پول کافی ندارید!");
                messageBox.setFixedSize(500,200);
            }
        }
        if (item == "پیاز گل نادر")
        {
            if (personPtr->get_RareOnion_count() >= 1)
            {
                personPtr->set_flower(new RareFlower(personPtr->get_RareOnion()));
                emptyBtn7->setVisible(false);
                empty7->setVisible(false);
                rare7->setVisible(true);
                rareBtn7->setVisible(true);
            }
            else
            {
                QMessageBox messageBox;
                messageBox.critical(0,"Error","پول کافی ندارید!");
                messageBox.setFixedSize(500,200);
            }
        }
        if (item == "پیاز گل زینتی")
        {
            if (personPtr->get_OrnamentalOnion_count() >= 1)
            {
                personPtr->set_flower(new OrnamentalFlower(personPtr->get_OrnamentalOnion()));
                emptyBtn7->setVisible(false);
                empty7->setVisible(false);
                ornamental7->setVisible(true);
                ornamBtn7->setVisible(true);
            }
            else
            {
                QMessageBox messageBox;
                messageBox.critical(0,"Error","پول کافی ندارید!");
                messageBox.setFixedSize(500,200);
            }
        }
    }
}

void GreenHouse::OnEmptyBtn8()
{
    QStringList items;
    items << tr("پیاز گل عادی") << tr("پیاز گل نادر") << tr("پیاز گل زینتی");
    bool ok;

    QString item = QInputDialog::getItem(this, tr("QInputDialog::getItem()"),
                                        tr("Season:"), items, 0, false, &ok);

    if (ok && !items.isEmpty())
    {
        if (item == "پیاز گل عادی")
        {
            if (personPtr->get_OrdinaryUnion_count() >= 1)
            {
                personPtr->set_flower(new OrdinaryFlowers(personPtr->get_OrdinaryUnion()));
                emptyBtn8->setVisible(false);
                empty8->setVisible(false);
                ordinary8->setVisible(true);
                orBtn8->setVisible(true);
            }
            else
            {
                QMessageBox messageBox;
                messageBox.critical(0,"Error","پول کافی ندارید!");
                messageBox.setFixedSize(500,200);
            }
        }
        if (item == "پیاز گل نادر")
        {
            if (personPtr->get_RareOnion_count() >= 1)
            {
                personPtr->set_flower(new RareFlower(personPtr->get_RareOnion()));
                emptyBtn8->setVisible(false);
                empty8->setVisible(false);
                rare8->setVisible(true);
                rareBtn8->setVisible(true);
            }
            else
            {
                QMessageBox messageBox;
                messageBox.critical(0,"Error","پول کافی ندارید!");
                messageBox.setFixedSize(500,200);
            }
        }
        if (item == "پیاز گل زینتی")
        {
            if (personPtr->get_OrnamentalOnion_count() >= 1)
            {
                personPtr->set_flower(new OrnamentalFlower(personPtr->get_OrnamentalOnion()));
                emptyBtn8->setVisible(false);
                empty8->setVisible(false);
                ornamental8->setVisible(true);
                ornamBtn8->setVisible(true);
            }
            else
            {
                QMessageBox messageBox;
                messageBox.critical(0,"Error","پول کافی ندارید!");
                messageBox.setFixedSize(500,200);
            }
        }
    }
}

void GreenHouse::OnLockBtn1()
{
    if (money < 1000)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","پول کافی ندارید!");
        messageBox.setFixedSize(500,200);
    }
    else
    {
        money -= 1000;
        lock1->setVisible(false);
        lockBtn1->setVisible(false);
        empty1->setVisible(true);
        emptyBtn1->setVisible(true);
    }
}

void GreenHouse::OnLockBtn2()
{
    if (money < 1000)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","پول کافی ندارید!");
        messageBox.setFixedSize(500,200);
    }
    else
    {
        money -= 1000;
        lock2->setVisible(false);
        lockBtn2->setVisible(false);
        empty2->setVisible(true);
        emptyBtn2->setVisible(true);
    }
}

void GreenHouse::OnLockBtn3()
{
    if (money < 1000)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","پول کافی ندارید!");
        messageBox.setFixedSize(500,200);
    }
    else
    {
        money -= 1000;
        lock3->setVisible(false);
        lockBtn3->setVisible(false);
        empty3->setVisible(true);
        emptyBtn3->setVisible(true);
    }
}

void GreenHouse::OnLockBtn4()
{
    if (money < 1000)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","پول کافی ندارید!");
        messageBox.setFixedSize(500,200);
    }
    else
    {
        money -= 1000;
        lock4->setVisible(false);
        lockBtn4->setVisible(false);
        empty4->setVisible(true);
        emptyBtn4->setVisible(true);
    }
}

void GreenHouse::OnLockBtn5()
{
    if (money < 1000)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","پول کافی ندارید!");
        messageBox.setFixedSize(500,200);
    }
    else
    {
        money -= 1000;
        lock5->setVisible(false);
        lockBtn5->setVisible(false);
        empty5->setVisible(true);
        emptyBtn5->setVisible(true);
    }
}

void GreenHouse::OnLockBtn6()
{
    if (money < 1000)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","پول کافی ندارید!");
        messageBox.setFixedSize(500,200);
    }
    else
    {
        money -= 1000;
        lock6->setVisible(false);
        lockBtn6->setVisible(false);
        empty6->setVisible(true);
        emptyBtn6->setVisible(true);
    }
}

void GreenHouse::OnLockBtn7()
{
    if (money < 1000)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","پول کافی ندارید!");
        messageBox.setFixedSize(500,200);
    }
    else
    {
        money -= 1000;
        lock7->setVisible(false);
        lockBtn7->setVisible(false);
        empty7->setVisible(true);
        emptyBtn7->setVisible(true);
    }
}

void GreenHouse::OnLockBtn8()
{
    if (money < 1000)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","پول کافی ندارید!");
        messageBox.setFixedSize(500,200);
    }
    else
    {
        money -= 1000;
        lock8->setVisible(false);
        lockBtn8->setVisible(false);
        empty8->setVisible(true);
        emptyBtn8->setVisible(true);
    }
}

void GreenHouse::setDahliaPic()
{
    dahlia1 = new QLabel(this);
    QPixmap pic("C:/Users/Abisys/Desktop/nnn/da.png");
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
    QPixmap pic("C:/Users/Abisys/Desktop/nnn/la.png");
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
    QPixmap pic("C:/Users/Abisys/Desktop/nnn/mar.png");
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
    QPixmap pic("C:/Users/Abisys/Desktop/nnn/na.png");
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
    QPixmap pic("C:/Users/Abisys/Desktop/nnn/son.png");
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
    QPixmap pic("C:/Users/Abisys/Desktop/nnn/ma.png");
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
    QPixmap pic("C:/Users/Abisys/Desktop/nnn/li.png");
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
    QPixmap pic("C:/Users/Abisys/Desktop/nnn/or.png");
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
    QPixmap pic("C:/Users/Abisys/Desktop/nnn/aa.png");
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
    QPixmap pic("C:/Users/Abisys/Desktop/nnn/aa.png");
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
    QPixmap pic("C:/Users/Abisys/Desktop/nnn/aa.png");
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
    QPixmap pic("C:/Users/Abisys/Desktop/nnn/aa.png");
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
    QPixmap pic("C:/Users/Abisys/Desktop/nnn/aa.png");
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
    QPixmap pic("C:/Users/Abisys/Desktop/nnn/aa.png");
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
    QPixmap pic("C:/Users/Abisys/Desktop/nnn/aa.png");
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
    QPixmap pixmap1("C:/Users/Abisys/Desktop/nnn/menu15.png");
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
    QPixmap pixmap3("C:/Users/Abisys/Desktop/nnn/menu04.png");
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
