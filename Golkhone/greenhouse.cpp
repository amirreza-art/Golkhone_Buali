#include "greenhouse.h"
#include "laboratory.h"
#include "profile.h"
#include "shop.h"
#include "QMessageBox"
#include "QInputDialog"
#include <iostream>
#include <ornamentalflower.h>
#include <random>
#include <magnolia.h>
#include <lilium.h>
#include <orchis.h>
#include <time.h>

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

    setHyacinthPic();
    setLockPic();
    setEmptyPic();
    setDahliaPic();
    setTulipPic();
    setTuberosePic();
    setAmaryllisPic();

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
    setDahliaPBtn();
    setTulipPBtn();
    setAmaryllisPBtn();

    setTubePBtn();
    sethyacPBtn();
    setmagPBtn();
    setliliPBtn();
    setorchPBtn();
    //setOrnamFBudBtn();

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

    connect(orBudBtn1, &QPushButton::clicked, this, &GreenHouse::OnOrBudBtns);
    connect(orBudBtn2, &QPushButton::clicked, this, &GreenHouse::OnOrBudBtns);
    connect(orBudBtn3, &QPushButton::clicked, this, &GreenHouse::OnOrBudBtns);
    connect(orBudBtn4, &QPushButton::clicked, this, &GreenHouse::OnOrBudBtns);
    connect(orBudBtn5, &QPushButton::clicked, this, &GreenHouse::OnOrBudBtns);
    connect(orBudBtn6, &QPushButton::clicked, this, &GreenHouse::OnOrBudBtns);
    connect(orBudBtn7, &QPushButton::clicked, this, &GreenHouse::OnOrBudBtns);
    connect(orBudBtn8, &QPushButton::clicked, this, &GreenHouse::OnOrBudBtns);

    connect(rareBtn1, &QPushButton::clicked, this, &GreenHouse::OnRareBtns);
    connect(rareBtn2, &QPushButton::clicked, this, &GreenHouse::OnRareBtns);
    connect(rareBtn3, &QPushButton::clicked, this, &GreenHouse::OnRareBtns);
    connect(rareBtn4, &QPushButton::clicked, this, &GreenHouse::OnRareBtns);
    connect(rareBtn5, &QPushButton::clicked, this, &GreenHouse::OnRareBtns);
    connect(rareBtn6, &QPushButton::clicked, this, &GreenHouse::OnRareBtns);
    connect(rareBtn7, &QPushButton::clicked, this, &GreenHouse::OnRareBtns);
    connect(rareBtn8, &QPushButton::clicked, this, &GreenHouse::OnRareBtns);

    connect(rareBudBtn1, &QPushButton::clicked, this, &GreenHouse::OnRareBudBtns);
    connect(rareBudBtn2, &QPushButton::clicked, this, &GreenHouse::OnRareBudBtns);
    connect(rareBudBtn3, &QPushButton::clicked, this, &GreenHouse::OnRareBudBtns);
    connect(rareBudBtn4, &QPushButton::clicked, this, &GreenHouse::OnRareBudBtns);
    connect(rareBudBtn5, &QPushButton::clicked, this, &GreenHouse::OnRareBudBtns);
    connect(rareBudBtn6, &QPushButton::clicked, this, &GreenHouse::OnRareBudBtns);
    connect(rareBudBtn7, &QPushButton::clicked, this, &GreenHouse::OnRareBudBtns);
    connect(rareBudBtn8, &QPushButton::clicked, this, &GreenHouse::OnRareBudBtns);

    connect(ornamBtn1, &QPushButton::clicked, this, &GreenHouse::OnOrnamBtns);
    connect(ornamBtn2, &QPushButton::clicked, this, &GreenHouse::OnOrnamBtns);
    connect(ornamBtn3, &QPushButton::clicked, this, &GreenHouse::OnOrnamBtns);
    connect(ornamBtn4, &QPushButton::clicked, this, &GreenHouse::OnOrnamBtns);
    connect(ornamBtn5, &QPushButton::clicked, this, &GreenHouse::OnOrnamBtns);
    connect(ornamBtn6, &QPushButton::clicked, this, &GreenHouse::OnOrnamBtns);
    connect(ornamBtn7, &QPushButton::clicked, this, &GreenHouse::OnOrnamBtns);
    connect(ornamBtn8, &QPushButton::clicked, this, &GreenHouse::OnOrnamBtns);

    connect(ornamBudBtn1, &QPushButton::clicked, this, &GreenHouse::OnOrnamBudBtns);
    connect(ornamBudBtn2, &QPushButton::clicked, this, &GreenHouse::OnOrnamBudBtns);
    connect(ornamBudBtn3, &QPushButton::clicked, this, &GreenHouse::OnOrnamBudBtns);
    connect(ornamBudBtn4, &QPushButton::clicked, this, &GreenHouse::OnOrnamBudBtns);
    connect(ornamBudBtn5, &QPushButton::clicked, this, &GreenHouse::OnOrnamBudBtns);
    connect(ornamBudBtn6, &QPushButton::clicked, this, &GreenHouse::OnOrnamBudBtns);
    connect(ornamBudBtn7, &QPushButton::clicked, this, &GreenHouse::OnOrnamBudBtns);
    connect(ornamBudBtn8, &QPushButton::clicked, this, &GreenHouse::OnOrnamBudBtns);

    connect(dahliaP1, &QPushButton::clicked, this, &GreenHouse::OnDahliaBtns);
    connect(dahliaP2, &QPushButton::clicked, this, &GreenHouse::OnDahliaBtns);
    connect(dahliaP3, &QPushButton::clicked, this, &GreenHouse::OnDahliaBtns);
    connect(dahliaP4, &QPushButton::clicked, this, &GreenHouse::OnDahliaBtns);
    connect(dahliaP5, &QPushButton::clicked, this, &GreenHouse::OnDahliaBtns);
    connect(dahliaP6, &QPushButton::clicked, this, &GreenHouse::OnDahliaBtns);
    connect(dahliaP7, &QPushButton::clicked, this, &GreenHouse::OnDahliaBtns);
    connect(dahliaP8, &QPushButton::clicked, this, &GreenHouse::OnDahliaBtns);

    connect(tulipP1, &QPushButton::clicked, this, &GreenHouse::OnTulipBtns);
    connect(tulipP2, &QPushButton::clicked, this, &GreenHouse::OnTulipBtns);
    connect(tulipP3, &QPushButton::clicked, this, &GreenHouse::OnTulipBtns);
    connect(tulipP4, &QPushButton::clicked, this, &GreenHouse::OnTulipBtns);
    connect(tulipP5, &QPushButton::clicked, this, &GreenHouse::OnTulipBtns);
    connect(tulipP6, &QPushButton::clicked, this, &GreenHouse::OnTulipBtns);
    connect(tulipP7, &QPushButton::clicked, this, &GreenHouse::OnTulipBtns);
    connect(tulipP8, &QPushButton::clicked, this, &GreenHouse::OnTulipBtns);

    connect(tubeP1, &QPushButton::clicked, this, &GreenHouse::OnTuberoseBtns);
    connect(tubeP2, &QPushButton::clicked, this, &GreenHouse::OnTuberoseBtns);
    connect(tubeP3, &QPushButton::clicked, this, &GreenHouse::OnTuberoseBtns);
    connect(tubeP4, &QPushButton::clicked, this, &GreenHouse::OnTuberoseBtns);
    connect(tubeP5, &QPushButton::clicked, this, &GreenHouse::OnTuberoseBtns);
    connect(tubeP6, &QPushButton::clicked, this, &GreenHouse::OnTuberoseBtns);
    connect(tubeP7, &QPushButton::clicked, this, &GreenHouse::OnTuberoseBtns);
    connect(tubeP8, &QPushButton::clicked, this, &GreenHouse::OnTuberoseBtns);

    connect(amarP1, &QPushButton::clicked, this, &GreenHouse::OnAmarBtns);
    connect(amarP2, &QPushButton::clicked, this, &GreenHouse::OnAmarBtns);
    connect(amarP3, &QPushButton::clicked, this, &GreenHouse::OnAmarBtns);
    connect(amarP4, &QPushButton::clicked, this, &GreenHouse::OnAmarBtns);
    connect(amarP5, &QPushButton::clicked, this, &GreenHouse::OnAmarBtns);
    connect(amarP6, &QPushButton::clicked, this, &GreenHouse::OnAmarBtns);
    connect(amarP7, &QPushButton::clicked, this, &GreenHouse::OnAmarBtns);
    connect(amarP8, &QPushButton::clicked, this, &GreenHouse::OnAmarBtns);

    connect(hyacP1, &QPushButton::clicked, this, &GreenHouse::OnhyacBtns);
    connect(hyacP2, &QPushButton::clicked, this, &GreenHouse::OnhyacBtns);
    connect(hyacP3, &QPushButton::clicked, this, &GreenHouse::OnhyacBtns);
    connect(hyacP4, &QPushButton::clicked, this, &GreenHouse::OnhyacBtns);
    connect(hyacP5, &QPushButton::clicked, this, &GreenHouse::OnhyacBtns);
    connect(hyacP6, &QPushButton::clicked, this, &GreenHouse::OnhyacBtns);
    connect(hyacP7, &QPushButton::clicked, this, &GreenHouse::OnhyacBtns);
    connect(hyacP8, &QPushButton::clicked, this, &GreenHouse::OnhyacBtns);

    connect(magnP1, &QPushButton::clicked, this, &GreenHouse::OnMagnoliaBtns);
    connect(magnP2, &QPushButton::clicked, this, &GreenHouse::OnMagnoliaBtns);
    connect(magnP3, &QPushButton::clicked, this, &GreenHouse::OnMagnoliaBtns);
    connect(magnP4, &QPushButton::clicked, this, &GreenHouse::OnMagnoliaBtns);
    connect(magnP5, &QPushButton::clicked, this, &GreenHouse::OnMagnoliaBtns);
    connect(magnP6, &QPushButton::clicked, this, &GreenHouse::OnMagnoliaBtns);
    connect(magnP7, &QPushButton::clicked, this, &GreenHouse::OnMagnoliaBtns);
    connect(magnP8, &QPushButton::clicked, this, &GreenHouse::OnMagnoliaBtns);

    connect(liliP1, &QPushButton::clicked, this, &GreenHouse::OnLiliumBtns);
    connect(liliP2, &QPushButton::clicked, this, &GreenHouse::OnLiliumBtns);
    connect(liliP3, &QPushButton::clicked, this, &GreenHouse::OnLiliumBtns);
    connect(liliP4, &QPushButton::clicked, this, &GreenHouse::OnLiliumBtns);
    connect(liliP5, &QPushButton::clicked, this, &GreenHouse::OnLiliumBtns);
    connect(liliP6, &QPushButton::clicked, this, &GreenHouse::OnLiliumBtns);
    connect(liliP7, &QPushButton::clicked, this, &GreenHouse::OnLiliumBtns);
    connect(liliP8, &QPushButton::clicked, this, &GreenHouse::OnLiliumBtns);

    connect(orchP1, &QPushButton::clicked, this, &GreenHouse::OnOrchidBtns);
    connect(orchP2, &QPushButton::clicked, this, &GreenHouse::OnOrchidBtns);
    connect(orchP3, &QPushButton::clicked, this, &GreenHouse::OnOrchidBtns);
    connect(orchP4, &QPushButton::clicked, this, &GreenHouse::OnOrchidBtns);
    connect(orchP5, &QPushButton::clicked, this, &GreenHouse::OnOrchidBtns);
    connect(orchP6, &QPushButton::clicked, this, &GreenHouse::OnOrchidBtns);
    connect(orchP7, &QPushButton::clicked, this, &GreenHouse::OnOrchidBtns);
    connect(orchP8, &QPushButton::clicked, this, &GreenHouse::OnOrchidBtns);
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

void GreenHouse::setTubePBtn()
{
    tubeP1 = new QPushButton("چیدن", this);
    tubeP1->setGeometry(1000,340,160,25);
    tubeP1->setAutoFillBackground(true);
    QPalette palette = tubeP1->palette();
    palette.setColor(QPalette::Window, QColor(Qt::black));
    tubeP1->setPalette(palette);
    tubeP1->setStyleSheet("background-color: rgb(170, 170, 127);");
    tubeP1->setStyleSheet("background-color: #3cbaa2; solid black;");
    tubeP1->setVisible(false);

    tubeP2 = new QPushButton("چیدن", this);
    tubeP2->setGeometry(740,340,160,25);
    tubeP2->setAutoFillBackground(true);
    tubeP2->setPalette(palette);
    tubeP2->setStyleSheet("background-color: rgb(170, 170, 127);");
    tubeP2->setStyleSheet("background-color: #3cbaa2; solid black;");
    tubeP2->setVisible(false);

    tubeP3 = new QPushButton("چیدن", this);
    tubeP3->setGeometry(480,340,160,25);
    tubeP3->setAutoFillBackground(true);
    tubeP3->setPalette(palette);
    tubeP3->setStyleSheet("background-color: rgb(170, 170, 127);");
    tubeP3->setStyleSheet("background-color: #3cbaa2; solid black;");
    tubeP3->setVisible(false);

    tubeP4 = new QPushButton("چیدن", this);
    tubeP4->setGeometry(230,340,160,25);
    tubeP4->setAutoFillBackground(true);
    tubeP4->setPalette(palette);
    tubeP4->setStyleSheet("background-color: rgb(170, 170, 127);");
    tubeP4->setStyleSheet("background-color: #3cbaa2; solid black;");
    tubeP4->setVisible(false);

    tubeP5 = new QPushButton("چیدن", this);
    tubeP5->setGeometry(1000,630,160,25);
    tubeP5->setAutoFillBackground(true);
    tubeP5->setPalette(palette);
    tubeP5->setStyleSheet("background-color: rgb(170, 170, 127);");
    tubeP5->setStyleSheet("background-color: #3cbaa2; solid black;");
    tubeP5->setVisible(false);

    tubeP6 = new QPushButton("چیدن", this);
    tubeP6->setGeometry(740,630,160,25);
    tubeP6->setAutoFillBackground(true);
    tubeP6->setPalette(palette);
    tubeP6->setStyleSheet("background-color: rgb(170, 170, 127);");
    tubeP6->setStyleSheet("background-color: #3cbaa2; solid black;");
    tubeP6->setVisible(false);

    tubeP7 = new QPushButton("چیدن", this);
    tubeP7->setGeometry(480,630,160,25);
    tubeP7->setAutoFillBackground(true);
    tubeP7->setPalette(palette);
    tubeP7->setStyleSheet("background-color: rgb(170, 170, 127);");
    tubeP7->setStyleSheet("background-color: #3cbaa2; solid black;");
    tubeP7->setVisible(false);

    tubeP8 = new QPushButton("چیدن", this);
    tubeP8->setGeometry(230,630,160,25);
    tubeP8->setAutoFillBackground(true);
    tubeP8->setPalette(palette);
    tubeP8->setStyleSheet("background-color: rgb(170, 170, 127);");
    tubeP8->setStyleSheet("background-color: #3cbaa2; solid black;");
    tubeP8->setVisible(false);
}

void GreenHouse::sethyacPBtn()
{
    hyacP1 = new QPushButton("چیدن", this);
    hyacP1->setGeometry(1000,340,160,25);
    hyacP1->setAutoFillBackground(true);
    QPalette palette = hyacP1->palette();
    palette.setColor(QPalette::Window, QColor(Qt::black));
    hyacP1->setPalette(palette);
    hyacP1->setStyleSheet("background-color: rgb(170, 170, 127);");
    hyacP1->setStyleSheet("background-color: #3cbaa2; solid black;");
    hyacP1->setVisible(false);

    hyacP2 = new QPushButton("چیدن", this);
    hyacP2->setGeometry(740,340,160,25);
    hyacP2->setAutoFillBackground(true);
    hyacP2->setPalette(palette);
    hyacP2->setStyleSheet("background-color: rgb(170, 170, 127);");
    hyacP2->setStyleSheet("background-color: #3cbaa2; solid black;");
    hyacP2->setVisible(false);

    hyacP3 = new QPushButton("چیدن", this);
    hyacP3->setGeometry(480,340,160,25);
    hyacP3->setAutoFillBackground(true);
    hyacP3->setPalette(palette);
    hyacP3->setStyleSheet("background-color: rgb(170, 170, 127);");
    hyacP3->setStyleSheet("background-color: #3cbaa2; solid black;");
    hyacP3->setVisible(false);

    hyacP4 = new QPushButton("چیدن", this);
    hyacP4->setGeometry(230,340,160,25);
    hyacP4->setAutoFillBackground(true);
    hyacP4->setPalette(palette);
    hyacP4->setStyleSheet("background-color: rgb(170, 170, 127);");
    hyacP4->setStyleSheet("background-color: #3cbaa2; solid black;");
    hyacP4->setVisible(false);

    hyacP5 = new QPushButton("چیدن", this);
    hyacP5->setGeometry(1000,630,160,25);
    hyacP5->setAutoFillBackground(true);
    hyacP5->setPalette(palette);
    hyacP5->setStyleSheet("background-color: rgb(170, 170, 127);");
    hyacP5->setStyleSheet("background-color: #3cbaa2; solid black;");
    hyacP5->setVisible(false);

    hyacP6 = new QPushButton("چیدن", this);
    hyacP6->setGeometry(740,630,160,25);
    hyacP6->setAutoFillBackground(true);
    hyacP6->setPalette(palette);
    hyacP6->setStyleSheet("background-color: rgb(170, 170, 127);");
    hyacP6->setStyleSheet("background-color: #3cbaa2; solid black;");
    hyacP6->setVisible(false);

    hyacP7 = new QPushButton("چیدن", this);
    hyacP7->setGeometry(480,630,160,25);
    hyacP7->setAutoFillBackground(true);
    hyacP7->setPalette(palette);
    hyacP7->setStyleSheet("background-color: rgb(170, 170, 127);");
    hyacP7->setStyleSheet("background-color: #3cbaa2; solid black;");
    hyacP7->setVisible(false);

    hyacP8 = new QPushButton("چیدن", this);
    hyacP8->setGeometry(230,630,160,25);
    hyacP8->setAutoFillBackground(true);
    hyacP8->setPalette(palette);
    hyacP8->setStyleSheet("background-color: rgb(170, 170, 127);");
    hyacP8->setStyleSheet("background-color: #3cbaa2; solid black;");
    hyacP8->setVisible(false);
}

void GreenHouse::setmagPBtn()
{
    magnP1 = new QPushButton("چیدن", this);
    magnP1->setGeometry(1000,340,160,25);
    magnP1->setAutoFillBackground(true);
    QPalette palette = magnP1->palette();
    palette.setColor(QPalette::Window, QColor(Qt::black));
    magnP1->setPalette(palette);
    magnP1->setStyleSheet("background-color: rgb(170, 170, 127);");
    magnP1->setStyleSheet("background-color: #3cbaa2; solid black;");
    magnP1->setVisible(false);

    magnP2 = new QPushButton("چیدن", this);
    magnP2->setGeometry(740,340,160,25);
    magnP2->setAutoFillBackground(true);
    magnP2->setPalette(palette);
    magnP2->setStyleSheet("background-color: rgb(170, 170, 127);");
    magnP2->setStyleSheet("background-color: #3cbaa2; solid black;");
    magnP2->setVisible(false);

    magnP3 = new QPushButton("چیدن", this);
    magnP3->setGeometry(480,340,160,25);
    magnP3->setAutoFillBackground(true);
    magnP3->setPalette(palette);
    magnP3->setStyleSheet("background-color: rgb(170, 170, 127);");
    magnP3->setStyleSheet("background-color: #3cbaa2; solid black;");
    magnP3->setVisible(false);

    magnP4 = new QPushButton("چیدن", this);
    magnP4->setGeometry(230,340,160,25);
    magnP4->setAutoFillBackground(true);
    magnP4->setPalette(palette);
    magnP4->setStyleSheet("background-color: rgb(170, 170, 127);");
    magnP4->setStyleSheet("background-color: #3cbaa2; solid black;");
    magnP4->setVisible(false);

    magnP5 = new QPushButton("چیدن", this);
    magnP5->setGeometry(1000,630,160,25);
    magnP5->setAutoFillBackground(true);
    magnP5->setPalette(palette);
    magnP5->setStyleSheet("background-color: rgb(170, 170, 127);");
    magnP5->setStyleSheet("background-color: #3cbaa2; solid black;");
    magnP5->setVisible(false);

    magnP6 = new QPushButton("چیدن", this);
    magnP6->setGeometry(740,630,160,25);
    magnP6->setAutoFillBackground(true);
    magnP6->setPalette(palette);
    magnP6->setStyleSheet("background-color: rgb(170, 170, 127);");
    magnP6->setStyleSheet("background-color: #3cbaa2; solid black;");
    magnP6->setVisible(false);

    magnP7 = new QPushButton("چیدن", this);
    magnP7->setGeometry(480,630,160,25);
    magnP7->setAutoFillBackground(true);
    magnP7->setPalette(palette);
    magnP7->setStyleSheet("background-color: rgb(170, 170, 127);");
    magnP7->setStyleSheet("background-color: #3cbaa2; solid black;");
    magnP7->setVisible(false);

    magnP8 = new QPushButton("چیدن", this);
    magnP8->setGeometry(230,630,160,25);
    magnP8->setAutoFillBackground(true);
    magnP8->setPalette(palette);
    magnP8->setStyleSheet("background-color: rgb(170, 170, 127);");
    magnP8->setStyleSheet("background-color: #3cbaa2; solid black;");
    magnP8->setVisible(false);
}

void GreenHouse::setliliPBtn()
{
    liliP1 = new QPushButton("چیدن", this);
    liliP1->setGeometry(1000,340,160,25);
    liliP1->setAutoFillBackground(true);
    QPalette palette = liliP1->palette();
    palette.setColor(QPalette::Window, QColor(Qt::black));
    liliP1->setPalette(palette);
    liliP1->setStyleSheet("background-color: rgb(170, 170, 127);");
    liliP1->setStyleSheet("background-color: #3cbaa2; solid black;");
    liliP1->setVisible(false);

    liliP2 = new QPushButton("چیدن", this);
    liliP2->setGeometry(740,340,160,25);
    liliP2->setAutoFillBackground(true);
    liliP2->setPalette(palette);
    liliP2->setStyleSheet("background-color: rgb(170, 170, 127);");
    liliP2->setStyleSheet("background-color: #3cbaa2; solid black;");
    liliP2->setVisible(false);

    liliP3 = new QPushButton("چیدن", this);
    liliP3->setGeometry(480,340,160,25);
    liliP3->setAutoFillBackground(true);
    liliP3->setPalette(palette);
    liliP3->setStyleSheet("background-color: rgb(170, 170, 127);");
    liliP3->setStyleSheet("background-color: #3cbaa2; solid black;");
    liliP3->setVisible(false);

    liliP4 = new QPushButton("چیدن", this);
    liliP4->setGeometry(230,340,160,25);
    liliP4->setAutoFillBackground(true);
    liliP4->setPalette(palette);
    liliP4->setStyleSheet("background-color: rgb(170, 170, 127);");
    liliP4->setStyleSheet("background-color: #3cbaa2; solid black;");
    liliP4->setVisible(false);

    liliP5 = new QPushButton("چیدن", this);
    liliP5->setGeometry(1000,630,160,25);
    liliP5->setAutoFillBackground(true);
    liliP5->setPalette(palette);
    liliP5->setStyleSheet("background-color: rgb(170, 170, 127);");
    liliP5->setStyleSheet("background-color: #3cbaa2; solid black;");
    liliP5->setVisible(false);

    liliP6 = new QPushButton("چیدن", this);
    liliP6->setGeometry(740,630,160,25);
    liliP6->setAutoFillBackground(true);
    liliP6->setPalette(palette);
    liliP6->setStyleSheet("background-color: rgb(170, 170, 127);");
    liliP6->setStyleSheet("background-color: #3cbaa2; solid black;");
    liliP6->setVisible(false);

    liliP7 = new QPushButton("چیدن", this);
    liliP7->setGeometry(480,630,160,25);
    liliP7->setAutoFillBackground(true);
    liliP7->setPalette(palette);
    liliP7->setStyleSheet("background-color: rgb(170, 170, 127);");
    liliP7->setStyleSheet("background-color: #3cbaa2; solid black;");
    liliP7->setVisible(false);

    liliP8 = new QPushButton("چیدن", this);
    liliP8->setGeometry(230,630,160,25);
    liliP8->setAutoFillBackground(true);
    liliP8->setPalette(palette);
    liliP8->setStyleSheet("background-color: rgb(170, 170, 127);");
    liliP8->setStyleSheet("background-color: #3cbaa2; solid black;");
    liliP8->setVisible(false);
}

void GreenHouse::setorchPBtn()
{
    orchP1 = new QPushButton("چیدن", this);
    orchP1->setGeometry(1000,340,160,25);
    orchP1->setAutoFillBackground(true);
    QPalette palette = orchP1->palette();
    palette.setColor(QPalette::Window, QColor(Qt::black));
    orchP1->setPalette(palette);
    orchP1->setStyleSheet("background-color: rgb(170, 170, 127);");
    orchP1->setStyleSheet("background-color: #3cbaa2; solid black;");
    orchP1->setVisible(false);

    orchP2 = new QPushButton("چیدن", this);
    orchP2->setGeometry(740,340,160,25);
    orchP2->setAutoFillBackground(true);
    orchP2->setPalette(palette);
    orchP2->setStyleSheet("background-color: rgb(170, 170, 127);");
    orchP2->setStyleSheet("background-color: #3cbaa2; solid black;");
    orchP2->setVisible(false);

    orchP3 = new QPushButton("چیدن", this);
    orchP3->setGeometry(480,340,160,25);
    orchP3->setAutoFillBackground(true);
    orchP3->setPalette(palette);
    orchP3->setStyleSheet("background-color: rgb(170, 170, 127);");
    orchP3->setStyleSheet("background-color: #3cbaa2; solid black;");
    orchP3->setVisible(false);

    orchP4 = new QPushButton("چیدن", this);
    orchP4->setGeometry(230,340,160,25);
    orchP4->setAutoFillBackground(true);
    orchP4->setPalette(palette);
    orchP4->setStyleSheet("background-color: rgb(170, 170, 127);");
    orchP4->setStyleSheet("background-color: #3cbaa2; solid black;");
    orchP4->setVisible(false);

    orchP5 = new QPushButton("چیدن", this);
    orchP5->setGeometry(1000,630,160,25);
    orchP5->setAutoFillBackground(true);
    orchP5->setPalette(palette);
    orchP5->setStyleSheet("background-color: rgb(170, 170, 127);");
    orchP5->setStyleSheet("background-color: #3cbaa2; solid black;");
    orchP5->setVisible(false);

    orchP6 = new QPushButton("چیدن", this);
    orchP6->setGeometry(740,630,160,25);
    orchP6->setAutoFillBackground(true);
    orchP6->setPalette(palette);
    orchP6->setStyleSheet("background-color: rgb(170, 170, 127);");
    orchP6->setStyleSheet("background-color: #3cbaa2; solid black;");
    orchP6->setVisible(false);

    orchP7 = new QPushButton("چیدن", this);
    orchP7->setGeometry(480,630,160,25);
    orchP7->setAutoFillBackground(true);
    orchP7->setPalette(palette);
    orchP7->setStyleSheet("background-color: rgb(170, 170, 127);");
    orchP7->setStyleSheet("background-color: #3cbaa2; solid black;");
    orchP7->setVisible(false);

    orchP8 = new QPushButton("چیدن", this);
    orchP8->setGeometry(230,630,160,25);
    orchP8->setAutoFillBackground(true);
    orchP8->setPalette(palette);
    orchP8->setStyleSheet("background-color: rgb(170, 170, 127);");
    orchP8->setStyleSheet("background-color: #3cbaa2; solid black;");
    orchP8->setVisible(false);
}

void GreenHouse::setOrnamFBudBtn()
{
    ornamFBudBtn1 = new QPushButton("چیدن", this);
    ornamFBudBtn1->setGeometry(1000,340,160,25);
    ornamFBudBtn1->setAutoFillBackground(true);
    QPalette palette = ornamFBudBtn1->palette();
    palette.setColor(QPalette::Window, QColor(Qt::black));
    ornamFBudBtn1->setPalette(palette);
    ornamFBudBtn1->setStyleSheet("background-color: rgb(170, 170, 127);");
    ornamFBudBtn1->setStyleSheet("background-color: #3cbaa2; solid black;");
    ornamFBudBtn1->setVisible(false);

    ornamFBudBtn2 = new QPushButton("چیدن", this);
    ornamFBudBtn2->setGeometry(740,340,160,25);
    ornamFBudBtn2->setAutoFillBackground(true);
    ornamFBudBtn2->setPalette(palette);
    ornamFBudBtn2->setStyleSheet("background-color: rgb(170, 170, 127);");
    ornamFBudBtn2->setStyleSheet("background-color: #3cbaa2; solid black;");
    ornamFBudBtn2->setVisible(false);

    ornamFBudBtn3 = new QPushButton("چیدن", this);
    ornamFBudBtn3->setGeometry(480,340,160,25);
    ornamFBudBtn3->setAutoFillBackground(true);
    ornamFBudBtn3->setPalette(palette);
    ornamFBudBtn3->setStyleSheet("background-color: rgb(170, 170, 127);");
    ornamFBudBtn3->setStyleSheet("background-color: #3cbaa2; solid black;");
    ornamFBudBtn3->setVisible(false);

    ornamFBudBtn4 = new QPushButton("چیدن", this);
    ornamFBudBtn4->setGeometry(230,340,160,25);
    ornamFBudBtn4->setAutoFillBackground(true);
    ornamFBudBtn4->setPalette(palette);
    ornamFBudBtn4->setStyleSheet("background-color: rgb(170, 170, 127);");
    ornamFBudBtn4->setStyleSheet("background-color: #3cbaa2; solid black;");
    ornamFBudBtn4->setVisible(false);

    ornamFBudBtn5 = new QPushButton("چیدن", this);
    ornamFBudBtn5->setGeometry(1000,630,160,25);
    ornamFBudBtn5->setAutoFillBackground(true);
    ornamFBudBtn5->setPalette(palette);
    ornamFBudBtn5->setStyleSheet("background-color: rgb(170, 170, 127);");
    ornamFBudBtn5->setStyleSheet("background-color: #3cbaa2; solid black;");
    ornamFBudBtn5->setVisible(false);

    ornamFBudBtn6 = new QPushButton("چیدن", this);
    ornamFBudBtn6->setGeometry(740,630,160,25);
    ornamFBudBtn6->setAutoFillBackground(true);
    ornamFBudBtn6->setPalette(palette);
    ornamFBudBtn6->setStyleSheet("background-color: rgb(170, 170, 127);");
    ornamFBudBtn6->setStyleSheet("background-color: #3cbaa2; solid black;");
    ornamFBudBtn6->setVisible(false);

    ornamFBudBtn7 = new QPushButton("چیدن", this);
    ornamFBudBtn7->setGeometry(480,630,160,25);
    ornamFBudBtn7->setAutoFillBackground(true);
    ornamFBudBtn7->setPalette(palette);
    ornamFBudBtn7->setStyleSheet("background-color: rgb(170, 170, 127);");
    ornamFBudBtn7->setStyleSheet("background-color: #3cbaa2; solid black;");
    ornamFBudBtn7->setVisible(false);

    ornamFBudBtn8 = new QPushButton("افزودن عصاره", this);
    ornamFBudBtn8->setGeometry(230,630,160,25);
    ornamFBudBtn8->setAutoFillBackground(true);
    ornamFBudBtn8->setPalette(palette);
    ornamFBudBtn8->setStyleSheet("background-color: rgb(170, 170, 127);");
    ornamFBudBtn8->setStyleSheet("background-color: #3cbaa2; solid black;");
    ornamFBudBtn8->setVisible(false);
}

void GreenHouse::setAmaryllisPBtn()
{
    amarP1 = new QPushButton("چیدن", this);
    amarP1->setGeometry(1000,340,160,25);
    amarP1->setAutoFillBackground(true);
    QPalette palette = amarP1->palette();
    palette.setColor(QPalette::Window, QColor(Qt::black));
    amarP1->setPalette(palette);
    amarP1->setStyleSheet("background-color: rgb(170, 170, 127);");
    amarP1->setStyleSheet("background-color: #3cbaa2; solid black;");
    amarP1->setVisible(false);

    amarP2 = new QPushButton("چیدن", this);
    amarP2->setGeometry(740,340,160,25);
    amarP2->setAutoFillBackground(true);
    amarP2->setPalette(palette);
    amarP2->setStyleSheet("background-color: rgb(170, 170, 127);");
    amarP2->setStyleSheet("background-color: #3cbaa2; solid black;");
    amarP2->setVisible(false);

    amarP3 = new QPushButton("چیدن", this);
    amarP3->setGeometry(480,340,160,25);
    amarP3->setAutoFillBackground(true);
    amarP3->setPalette(palette);
    amarP3->setStyleSheet("background-color: rgb(170, 170, 127);");
    amarP3->setStyleSheet("background-color: #3cbaa2; solid black;");
    amarP3->setVisible(false);

    amarP4 = new QPushButton("چیدن", this);
    amarP4->setGeometry(230,340,160,25);
    amarP4->setAutoFillBackground(true);
    amarP4->setPalette(palette);
    amarP4->setStyleSheet("background-color: rgb(170, 170, 127);");
    amarP4->setStyleSheet("background-color: #3cbaa2; solid black;");
    amarP4->setVisible(false);

    amarP5 = new QPushButton("چیدن", this);
    amarP5->setGeometry(1000,630,160,25);
    amarP5->setAutoFillBackground(true);
    amarP5->setPalette(palette);
    amarP5->setStyleSheet("background-color: rgb(170, 170, 127);");
    amarP5->setStyleSheet("background-color: #3cbaa2; solid black;");
    amarP5->setVisible(false);

    amarP6 = new QPushButton("چیدن", this);
    amarP6->setGeometry(740,630,160,25);
    amarP6->setAutoFillBackground(true);
    amarP6->setPalette(palette);
    amarP6->setStyleSheet("background-color: rgb(170, 170, 127);");
    amarP6->setStyleSheet("background-color: #3cbaa2; solid black;");
    amarP6->setVisible(false);

    amarP7 = new QPushButton("چیدن", this);
    amarP7->setGeometry(480,630,160,25);
    amarP7->setAutoFillBackground(true);
    amarP7->setPalette(palette);
    amarP7->setStyleSheet("background-color: rgb(170, 170, 127);");
    amarP7->setStyleSheet("background-color: #3cbaa2; solid black;");
    amarP7->setVisible(false);

    amarP8 = new QPushButton("چیدن", this);
    amarP8->setGeometry(230,630,160,25);
    amarP8->setAutoFillBackground(true);
    amarP8->setPalette(palette);
    amarP8->setStyleSheet("background-color: rgb(170, 170, 127);");
    amarP8->setStyleSheet("background-color: #3cbaa2; solid black;");
    amarP8->setVisible(false);
}

void GreenHouse::setDahliaPBtn()
{
    dahliaP1 = new QPushButton("چیدن", this);
    dahliaP1->setGeometry(1000,340,160,25);
    dahliaP1->setAutoFillBackground(true);
    QPalette palette = dahliaP1->palette();
    palette.setColor(QPalette::Window, QColor(Qt::black));
    dahliaP1->setPalette(palette);
    dahliaP1->setStyleSheet("background-color: rgb(170, 170, 127);");
    dahliaP1->setStyleSheet("background-color: #3cbaa2; solid black;");
    dahliaP1->setVisible(false);

    dahliaP2 = new QPushButton("چیدن", this);
    dahliaP2->setGeometry(740,340,160,25);
    dahliaP2->setAutoFillBackground(true);
    dahliaP2->setPalette(palette);
    dahliaP2->setStyleSheet("background-color: rgb(170, 170, 127);");
    dahliaP2->setStyleSheet("background-color: #3cbaa2; solid black;");
    dahliaP2->setVisible(false);

    dahliaP3 = new QPushButton("چیدن", this);
    dahliaP3->setGeometry(480,340,160,25);
    dahliaP3->setAutoFillBackground(true);
    dahliaP3->setPalette(palette);
    dahliaP3->setStyleSheet("background-color: rgb(170, 170, 127);");
    dahliaP3->setStyleSheet("background-color: #3cbaa2; solid black;");
    dahliaP3->setVisible(false);

    dahliaP4 = new QPushButton("چیدن", this);
    dahliaP4->setGeometry(230,340,160,25);
    dahliaP4->setAutoFillBackground(true);
    dahliaP4->setPalette(palette);
    dahliaP4->setStyleSheet("background-color: rgb(170, 170, 127);");
    dahliaP4->setStyleSheet("background-color: #3cbaa2; solid black;");
    dahliaP4->setVisible(false);

    dahliaP5 = new QPushButton("چیدن", this);
    dahliaP5->setGeometry(1000,630,160,25);
    dahliaP5->setAutoFillBackground(true);
    dahliaP5->setPalette(palette);
    dahliaP5->setStyleSheet("background-color: rgb(170, 170, 127);");
    dahliaP5->setStyleSheet("background-color: #3cbaa2; solid black;");
    dahliaP5->setVisible(false);

    dahliaP6 = new QPushButton("چیدن", this);
    dahliaP6->setGeometry(740,630,160,25);
    dahliaP6->setAutoFillBackground(true);
    dahliaP6->setPalette(palette);
    dahliaP6->setStyleSheet("background-color: rgb(170, 170, 127);");
    dahliaP6->setStyleSheet("background-color: #3cbaa2; solid black;");
    dahliaP6->setVisible(false);

    dahliaP7 = new QPushButton("چیدن", this);
    dahliaP7->setGeometry(480,630,160,25);
    dahliaP7->setAutoFillBackground(true);
    dahliaP7->setPalette(palette);
    dahliaP7->setStyleSheet("background-color: rgb(170, 170, 127);");
    dahliaP7->setStyleSheet("background-color: #3cbaa2; solid black;");
    dahliaP7->setVisible(false);

    dahliaP8 = new QPushButton("چیدن", this);
    dahliaP8->setGeometry(230,630,160,25);
    dahliaP8->setAutoFillBackground(true);
    dahliaP8->setPalette(palette);
    dahliaP8->setStyleSheet("background-color: rgb(170, 170, 127);");
    dahliaP8->setStyleSheet("background-color: #3cbaa2; solid black;");
    dahliaP8->setVisible(false);
}

void GreenHouse::setTulipPBtn()
{
    tulipP1 = new QPushButton("چیدن", this);
    tulipP1->setGeometry(1000,340,160,25);
    tulipP1->setAutoFillBackground(true);
    QPalette palette = tulipP1->palette();
    palette.setColor(QPalette::Window, QColor(Qt::black));
    tulipP1->setPalette(palette);
    tulipP1->setStyleSheet("background-color: rgb(170, 170, 127);");
    tulipP1->setStyleSheet("background-color: #3cbaa2; solid black;");
    tulipP1->setVisible(false);

    tulipP2 = new QPushButton("چیدن", this);
    tulipP2->setGeometry(740,340,160,25);
    tulipP2->setAutoFillBackground(true);
    tulipP2->setPalette(palette);
    tulipP2->setStyleSheet("background-color: rgb(170, 170, 127);");
    tulipP2->setStyleSheet("background-color: #3cbaa2; solid black;");
    tulipP2->setVisible(false);

    tulipP3 = new QPushButton("چیدن", this);
    tulipP3->setGeometry(480,340,160,25);
    tulipP3->setAutoFillBackground(true);
    tulipP3->setPalette(palette);
    tulipP3->setStyleSheet("background-color: rgb(170, 170, 127);");
    tulipP3->setStyleSheet("background-color: #3cbaa2; solid black;");
    tulipP3->setVisible(false);

    tulipP4 = new QPushButton("چیدن", this);
    tulipP4->setGeometry(230,340,160,25);
    tulipP4->setAutoFillBackground(true);
    tulipP4->setPalette(palette);
    tulipP4->setStyleSheet("background-color: rgb(170, 170, 127);");
    tulipP4->setStyleSheet("background-color: #3cbaa2; solid black;");
    tulipP4->setVisible(false);

    tulipP5 = new QPushButton("چیدن", this);
    tulipP5->setGeometry(1000,630,160,25);
    tulipP5->setAutoFillBackground(true);
    tulipP5->setPalette(palette);
    tulipP5->setStyleSheet("background-color: rgb(170, 170, 127);");
    tulipP5->setStyleSheet("background-color: #3cbaa2; solid black;");
    tulipP5->setVisible(false);

    tulipP6 = new QPushButton("چیدن", this);
    tulipP6->setGeometry(740,630,160,25);
    tulipP6->setAutoFillBackground(true);
    tulipP6->setPalette(palette);
    tulipP6->setStyleSheet("background-color: rgb(170, 170, 127);");
    tulipP6->setStyleSheet("background-color: #3cbaa2; solid black;");
    tulipP6->setVisible(false);

    tulipP7 = new QPushButton("چیدن", this);
    tulipP7->setGeometry(480,630,160,25);
    tulipP7->setAutoFillBackground(true);
    tulipP7->setPalette(palette);
    tulipP7->setStyleSheet("background-color: rgb(170, 170, 127);");
    tulipP7->setStyleSheet("background-color: #3cbaa2; solid black;");
    tulipP7->setVisible(false);

    tulipP8 = new QPushButton("چیدن", this);
    tulipP8->setGeometry(230,630,160,25);
    tulipP8->setAutoFillBackground(true);
    tulipP8->setPalette(palette);
    tulipP8->setStyleSheet("background-color: rgb(170, 170, 127);");
    tulipP8->setStyleSheet("background-color: #3cbaa2; solid black;");
    tulipP8->setVisible(false);
}

void GreenHouse::setRareBtn()
{
    rareBtn1 = new QPushButton("خاک یا تخریب", this);
    rareBtn1->setGeometry(1000,340,160,25);
    rareBtn1->setAutoFillBackground(true);
    QPalette palette = rareBtn1->palette();
    palette.setColor(QPalette::Window, QColor(Qt::black));
    rareBtn1->setPalette(palette);
    rareBtn1->setStyleSheet("background-color: rgb(170, 170, 127);");
    rareBtn1->setStyleSheet("background-color: #3cbaa2; solid black;");
    rareBtn1->setVisible(false);

    rareBtn2 = new QPushButton("خاک یا تخریب", this);
    rareBtn2->setGeometry(740,340,160,25);
    rareBtn2->setAutoFillBackground(true);
    rareBtn2->setPalette(palette);
    rareBtn2->setStyleSheet("background-color: rgb(170, 170, 127);");
    rareBtn2->setStyleSheet("background-color: #3cbaa2; solid black;");
    rareBtn2->setVisible(false);

    rareBtn3 = new QPushButton("خاک یا تخریب", this);
    rareBtn3->setGeometry(480,340,160,25);
    rareBtn3->setAutoFillBackground(true);
    rareBtn3->setPalette(palette);
    rareBtn3->setStyleSheet("background-color: rgb(170, 170, 127);");
    rareBtn3->setStyleSheet("background-color: #3cbaa2; solid black;");
    rareBtn3->setVisible(false);

    rareBtn4 = new QPushButton("خاک یا تخریب", this);
    rareBtn4->setGeometry(230,340,160,25);
    rareBtn4->setAutoFillBackground(true);
    rareBtn4->setPalette(palette);
    rareBtn4->setStyleSheet("background-color: rgb(170, 170, 127);");
    rareBtn4->setStyleSheet("background-color: #3cbaa2; solid black;");
    rareBtn4->setVisible(false);

    rareBtn5 = new QPushButton("خاک یا تخریب", this);
    rareBtn5->setGeometry(1000,630,160,25);
    rareBtn5->setAutoFillBackground(true);
    rareBtn5->setPalette(palette);
    rareBtn5->setStyleSheet("background-color: rgb(170, 170, 127);");
    rareBtn5->setStyleSheet("background-color: #3cbaa2; solid black;");
    rareBtn5->setVisible(false);

    rareBtn6 = new QPushButton("خاک یا تخریب", this);
    rareBtn6->setGeometry(740,630,160,25);
    rareBtn6->setAutoFillBackground(true);
    rareBtn6->setPalette(palette);
    rareBtn6->setStyleSheet("background-color: rgb(170, 170, 127);");
    rareBtn6->setStyleSheet("background-color: #3cbaa2; solid black;");
    rareBtn6->setVisible(false);

    rareBtn7 = new QPushButton("خاک یا تخریب", this);
    rareBtn7->setGeometry(480,630,160,25);
    rareBtn7->setAutoFillBackground(true);
    rareBtn7->setPalette(palette);
    rareBtn7->setStyleSheet("background-color: rgb(170, 170, 127);");
    rareBtn7->setStyleSheet("background-color: #3cbaa2; solid black;");
    rareBtn7->setVisible(false);

    rareBtn8 = new QPushButton("خاک یا تخریب", this);
    rareBtn8->setGeometry(230,630,160,25);
    rareBtn8->setAutoFillBackground(true);
    rareBtn8->setPalette(palette);
    rareBtn8->setStyleSheet("background-color: rgb(170, 170, 127);");
    rareBtn8->setStyleSheet("background-color: #3cbaa2; solid black;");
    rareBtn8->setVisible(false);
}

void GreenHouse::setOrnamBtn()
{
    ornamBtn1 = new QPushButton("خاک یا تخریب", this);
    ornamBtn1->setGeometry(1000,340,160,25);
    ornamBtn1->setAutoFillBackground(true);
    QPalette palette = ornamBtn1->palette();
    palette.setColor(QPalette::Window, QColor(Qt::black));
    ornamBtn1->setPalette(palette);
    ornamBtn1->setStyleSheet("background-color: rgb(170, 170, 127);");
    ornamBtn1->setStyleSheet("background-color: #3cbaa2; solid black;");
    ornamBtn1->setVisible(false);

    ornamBtn2 = new QPushButton("خاک یا تخریب", this);
    ornamBtn2->setGeometry(740,340,160,25);
    ornamBtn2->setAutoFillBackground(true);
    ornamBtn2->setPalette(palette);
    ornamBtn2->setStyleSheet("background-color: rgb(170, 170, 127);");
    ornamBtn2->setStyleSheet("background-color: #3cbaa2; solid black;");
    ornamBtn2->setVisible(false);

    ornamBtn3 = new QPushButton("خاک یا تخریب", this);
    ornamBtn3->setGeometry(480,340,160,25);
    ornamBtn3->setAutoFillBackground(true);
    ornamBtn3->setPalette(palette);
    ornamBtn3->setStyleSheet("background-color: rgb(170, 170, 127);");
    ornamBtn3->setStyleSheet("background-color: #3cbaa2; solid black;");
    ornamBtn3->setVisible(false);

    ornamBtn4 = new QPushButton("خاک یا تخریب", this);
    ornamBtn4->setGeometry(230,340,160,25);
    ornamBtn4->setAutoFillBackground(true);
    ornamBtn4->setPalette(palette);
    ornamBtn4->setStyleSheet("background-color: rgb(170, 170, 127);");
    ornamBtn4->setStyleSheet("background-color: #3cbaa2; solid black;");
    ornamBtn4->setVisible(false);

    ornamBtn5 = new QPushButton("خاک یا تخریب", this);
    ornamBtn5->setGeometry(1000,630,160,25);
    ornamBtn5->setAutoFillBackground(true);
    ornamBtn5->setPalette(palette);
    ornamBtn5->setStyleSheet("background-color: rgb(170, 170, 127);");
    ornamBtn5->setStyleSheet("background-color: #3cbaa2; solid black;");
    ornamBtn5->setVisible(false);

    ornamBtn6 = new QPushButton("خاک یا تخریب", this);
    ornamBtn6->setGeometry(740,630,160,25);
    ornamBtn6->setAutoFillBackground(true);
    ornamBtn6->setPalette(palette);
    ornamBtn6->setStyleSheet("background-color: rgb(170, 170, 127);");
    ornamBtn6->setStyleSheet("background-color: #3cbaa2; solid black;");
    ornamBtn6->setVisible(false);

    ornamBtn7 = new QPushButton("خاک یا تخریب", this);
    ornamBtn7->setGeometry(480,630,160,25);
    ornamBtn7->setAutoFillBackground(true);
    ornamBtn7->setPalette(palette);
    ornamBtn7->setStyleSheet("background-color: rgb(170, 170, 127);");
    ornamBtn7->setStyleSheet("background-color: #3cbaa2; solid black;");
    ornamBtn7->setVisible(false);

    ornamBtn8 = new QPushButton("خاک یا تخریب", this);
    ornamBtn8->setGeometry(230,630,160,25);
    ornamBtn8->setAutoFillBackground(true);
    ornamBtn8->setPalette(palette);
    ornamBtn8->setStyleSheet("background-color: rgb(170, 170, 127);");
    ornamBtn8->setStyleSheet("background-color: #3cbaa2; solid black;");
    ornamBtn8->setVisible(false);
}

void GreenHouse::setOrBtn()
{
    orBtn1 = new QPushButton("خاک یا تخریب", this);
    orBtn1->setGeometry(1000,340,160,25);
    orBtn1->setAutoFillBackground(true);
    QPalette palette = orBtn1->palette();
    palette.setColor(QPalette::Window, QColor(Qt::black));
    orBtn1->setPalette(palette);
    orBtn1->setStyleSheet("background-color: rgb(170, 170, 127);");
    orBtn1->setStyleSheet("background-color: #3cbaa2; solid black;");
    orBtn1->setVisible(false);

    orBtn2 = new QPushButton("خاک یا تخریب", this);
    orBtn2->setGeometry(740,340,160,25);
    orBtn2->setAutoFillBackground(true);
    orBtn2->setPalette(palette);
    orBtn2->setStyleSheet("background-color: rgb(170, 170, 127);");
    orBtn2->setStyleSheet("background-color: #3cbaa2; solid black;");
    orBtn2->setVisible(false);

    orBtn3 = new QPushButton("خاک یا تخریب", this);
    orBtn3->setGeometry(480,340,160,25);
    orBtn3->setAutoFillBackground(true);
    orBtn3->setPalette(palette);
    orBtn3->setStyleSheet("background-color: rgb(170, 170, 127);");
    orBtn3->setStyleSheet("background-color: #3cbaa2; solid black;");
    orBtn3->setVisible(false);

    orBtn4 = new QPushButton("خاک یا تخریب", this);
    orBtn4->setGeometry(230,340,160,25);
    orBtn4->setAutoFillBackground(true);
    orBtn4->setPalette(palette);
    orBtn4->setStyleSheet("background-color: rgb(170, 170, 127);");
    orBtn4->setStyleSheet("background-color: #3cbaa2; solid black;");
    orBtn4->setVisible(false);

    orBtn5 = new QPushButton("خاک یا تخریب", this);
    orBtn5->setGeometry(1000,630,160,25);
    orBtn5->setAutoFillBackground(true);
    orBtn5->setPalette(palette);
    orBtn5->setStyleSheet("background-color: rgb(170, 170, 127);");
    orBtn5->setStyleSheet("background-color: #3cbaa2; solid black;");
    orBtn5->setVisible(false);

    orBtn6 = new QPushButton("خاک یا تخریب", this);
    orBtn6->setGeometry(740,630,160,25);
    orBtn6->setAutoFillBackground(true);
    orBtn6->setPalette(palette);
    orBtn6->setStyleSheet("background-color: rgb(170, 170, 127);");
    orBtn6->setStyleSheet("background-color: #3cbaa2; solid black;");
    orBtn6->setVisible(false);

    orBtn7 = new QPushButton("خاک یا تخریب", this);
    orBtn7->setGeometry(480,630,160,25);
    orBtn7->setAutoFillBackground(true);
    orBtn7->setPalette(palette);
    orBtn7->setStyleSheet("background-color: rgb(170, 170, 127);");
    orBtn7->setStyleSheet("background-color: #3cbaa2; solid black;");
    orBtn7->setVisible(false);

    orBtn8 = new QPushButton("خاک یا تخریب", this);
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

void GreenHouse::OnDahliaBtns()
{
    QPushButton *temp = (QPushButton *)sender();

    try
    {
        personPtr->pick_Dahlia();
        temp->setVisible(false);
        if (temp == dahliaP1)
        {
            dahlia1->setVisible(false);
            empty1->setVisible(true);
            emptyBtn1->setVisible(true);
        }
        if (temp == dahliaP2)
        {
            dahlia2->setVisible(false);
            empty2->setVisible(true);
            emptyBtn2->setVisible(true);
        }
        if (temp == dahliaP3)
        {
            dahlia3->setVisible(false);
            empty3->setVisible(true);
            emptyBtn3->setVisible(true);
        }
        if (temp == dahliaP4)
        {
            dahlia4->setVisible(false);
            empty4->setVisible(true);
            emptyBtn4->setVisible(true);
        }
        if (temp == dahliaP5)
        {
            dahlia5->setVisible(false);
            empty5->setVisible(true);
            emptyBtn5->setVisible(true);
        }
        if (temp == dahliaP6)
        {
            dahlia6->setVisible(false);
            empty6->setVisible(true);
            emptyBtn6->setVisible(true);
        }
        if (temp == dahliaP7)
        {
            dahlia7->setVisible(false);
            empty7->setVisible(true);
            emptyBtn7->setVisible(true);
        }
        if (temp == dahliaP8)
        {
            dahlia8->setVisible(false);
            empty8->setVisible(true);
            emptyBtn8->setVisible(true);
        }
    }
    catch (const std::runtime_error& e)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error",e.what());
        messageBox.setFixedSize(500,200);
    }
}

void GreenHouse::OnTulipBtns()
{
    QPushButton *temp = (QPushButton *)sender();

    try
    {
        personPtr->pick_Tulip();
        temp->setVisible(false);
        if (temp == tulipP1)
        {
            tulip1->setVisible(false);
            empty1->setVisible(true);
            emptyBtn1->setVisible(true);
        }
        if (temp == tulipP2)
        {
            tulip2->setVisible(false);
            empty2->setVisible(true);
            emptyBtn2->setVisible(true);
        }
        if (temp == tulipP3)
        {
            tulip3->setVisible(false);
            empty3->setVisible(true);
            emptyBtn3->setVisible(true);
        }
        if (temp == tulipP4)
        {
            tulip4->setVisible(false);
            empty4->setVisible(true);
            emptyBtn4->setVisible(true);
        }
        if (temp == tulipP5)
        {
            tulip5->setVisible(false);
            empty5->setVisible(true);
            emptyBtn5->setVisible(true);
        }
        if (temp == tulipP6)
        {
            tulip6->setVisible(false);
            empty6->setVisible(true);
            emptyBtn6->setVisible(true);
        }
        if (temp == tulipP7)
        {
            tulip7->setVisible(false);
            empty7->setVisible(true);
            emptyBtn7->setVisible(true);
        }
        if (temp == tulipP8)
        {
            tulip8->setVisible(false);
            empty8->setVisible(true);
            emptyBtn8->setVisible(true);
        }
    }
    catch (const std::runtime_error& e)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error",e.what());
        messageBox.setFixedSize(500,200);
    }
}

void GreenHouse::OnTuberoseBtns()
{
    QPushButton *temp = (QPushButton *)sender();

    try
    {
        personPtr->pick_Tuberose();
        temp->setVisible(false);
        if (temp == tubeP1)
        {
            tuberose1->setVisible(false);
            empty1->setVisible(true);
            emptyBtn1->setVisible(true);
        }
        if (temp == tubeP2)
        {
            tuberose2->setVisible(false);
            empty2->setVisible(true);
            emptyBtn2->setVisible(true);
        }
        if (temp == tubeP3)
        {
            tuberose3->setVisible(false);
            empty3->setVisible(true);
            emptyBtn3->setVisible(true);
        }
        if (temp == tubeP4)
        {
            tuberose4->setVisible(false);
            empty4->setVisible(true);
            emptyBtn4->setVisible(true);
        }
        if (temp == tubeP5)
        {
            tuberose5->setVisible(false);
            empty5->setVisible(true);
            emptyBtn5->setVisible(true);
        }
        if (temp == tubeP6)
        {
            tuberose6->setVisible(false);
            empty6->setVisible(true);
            emptyBtn6->setVisible(true);
        }
        if (temp == tubeP7)
        {
            tuberose7->setVisible(false);
            empty7->setVisible(true);
            emptyBtn7->setVisible(true);
        }
        if (temp == tubeP8)
        {
            tuberose8->setVisible(false);
            empty8->setVisible(true);
            emptyBtn8->setVisible(true);
        }
    }
    catch (const std::runtime_error& e)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error",e.what());
        messageBox.setFixedSize(500,200);
    }
}

void GreenHouse::OnMagnoliaBtns()
{
    QPushButton *temp = (QPushButton *)sender();

    try
    {
        personPtr->pick_Magnolia();
        temp->setVisible(false);
        if (temp == magnP1)
        {
            magnolia1->setVisible(false);
            empty1->setVisible(true);
            emptyBtn1->setVisible(true);
        }
        if (temp == magnP2)
        {
            magnolia2->setVisible(false);
            empty2->setVisible(true);
            emptyBtn2->setVisible(true);
        }
        if (temp == magnP3)
        {
            magnolia3->setVisible(false);
            empty3->setVisible(true);
            emptyBtn3->setVisible(true);
        }
        if (temp == magnP4)
        {
            magnolia4->setVisible(false);
            empty4->setVisible(true);
            emptyBtn4->setVisible(true);
        }
        if (temp == magnP5)
        {
            magnolia5->setVisible(false);
            empty5->setVisible(true);
            emptyBtn5->setVisible(true);
        }
        if (temp == magnP6)
        {
            magnolia6->setVisible(false);
            empty6->setVisible(true);
            emptyBtn6->setVisible(true);
        }
        if (temp == magnP7)
        {
            magnolia7->setVisible(false);
            empty7->setVisible(true);
            emptyBtn7->setVisible(true);
        }
        if (temp == magnP8)
        {
            magnolia8->setVisible(false);
            empty8->setVisible(true);
            emptyBtn8->setVisible(true);
        }
    }
    catch (const std::runtime_error& e)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error",e.what());
        messageBox.setFixedSize(500,200);
    }
}

void GreenHouse::OnLiliumBtns()
{
    QPushButton *temp = (QPushButton *)sender();

    try
    {
        personPtr->pick_Lilium();
        temp->setVisible(false);
        if (temp == liliP1)
        {
            lilium1->setVisible(false);
            empty1->setVisible(true);
            emptyBtn1->setVisible(true);
        }
        if (temp == liliP2)
        {
            lilium2->setVisible(false);
            empty2->setVisible(true);
            emptyBtn2->setVisible(true);
        }
        if (temp == liliP3)
        {
            lilium3->setVisible(false);
            empty3->setVisible(true);
            emptyBtn3->setVisible(true);
        }
        if (temp == liliP4)
        {
            lilium4->setVisible(false);
            empty4->setVisible(true);
            emptyBtn4->setVisible(true);
        }
        if (temp == liliP5)
        {
            lilium5->setVisible(false);
            empty5->setVisible(true);
            emptyBtn5->setVisible(true);
        }
        if (temp == liliP6)
        {
            lilium6->setVisible(false);
            empty6->setVisible(true);
            emptyBtn6->setVisible(true);
        }
        if (temp == liliP7)
        {
            lilium7->setVisible(false);
            empty7->setVisible(true);
            emptyBtn7->setVisible(true);
        }
        if (temp == liliP8)
        {
            lilium8->setVisible(false);
            empty8->setVisible(true);
            emptyBtn8->setVisible(true);
        }
    }
    catch (const std::runtime_error& e)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error",e.what());
        messageBox.setFixedSize(500,200);
    }
}

void GreenHouse::OnOrchidBtns()
{
    QPushButton *temp = (QPushButton *)sender();

    try
    {
        personPtr->pick_Orchid();
        temp->setVisible(false);
        if (temp == orchP1)
        {
            orchid1->setVisible(false);
            empty1->setVisible(true);
            emptyBtn1->setVisible(true);
        }
        if (temp == orchP2)
        {
            orchid2->setVisible(false);
            empty2->setVisible(true);
            emptyBtn2->setVisible(true);
        }
        if (temp == orchP3)
        {
            orchid3->setVisible(false);
            empty3->setVisible(true);
            emptyBtn3->setVisible(true);
        }
        if (temp == orchP4)
        {
            orchid4->setVisible(false);
            empty4->setVisible(true);
            emptyBtn4->setVisible(true);
        }
        if (temp == orchP5)
        {
            orchid5->setVisible(false);
            empty5->setVisible(true);
            emptyBtn5->setVisible(true);
        }
        if (temp == orchP6)
        {
            orchid6->setVisible(false);
            empty6->setVisible(true);
            emptyBtn6->setVisible(true);
        }
        if (temp == orchP7)
        {
            orchid7->setVisible(false);
            empty7->setVisible(true);
            emptyBtn7->setVisible(true);
        }
        if (temp == orchP7)
        {
            orchid8->setVisible(false);
            empty8->setVisible(true);
            emptyBtn8->setVisible(true);
        }
    }
    catch (const std::runtime_error& e)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error",e.what());
        messageBox.setFixedSize(500,200);
    }
}

void GreenHouse::OnAmarBtns()
{
    QPushButton *temp = (QPushButton *)sender();

    try
    {
        personPtr->pick_Amaryllis();
        temp->setVisible(false);
        if (temp == amarP1)
        {
            amaryllis1->setVisible(false);
            empty1->setVisible(true);
            emptyBtn1->setVisible(true);
        }
        if (temp == amarP2)
        {
            amaryllis2->setVisible(false);
            empty2->setVisible(true);
            emptyBtn2->setVisible(true);
        }
        if (temp == amarP3)
        {
            amaryllis3->setVisible(false);
            empty3->setVisible(true);
            emptyBtn3->setVisible(true);
        }
        if (temp == amarP4)
        {
            amaryllis4->setVisible(false);
            empty4->setVisible(true);
            emptyBtn4->setVisible(true);
        }
        if (temp == amarP5)
        {
            amaryllis5->setVisible(false);
            empty5->setVisible(true);
            emptyBtn5->setVisible(true);
        }
        if (temp == amarP6)
        {
            amaryllis6->setVisible(false);
            empty6->setVisible(true);
            emptyBtn6->setVisible(true);
        }
        if (temp == amarP7)
        {
            amaryllis7->setVisible(false);
            empty7->setVisible(true);
            emptyBtn7->setVisible(true);
        }
        if (temp == amarP8)
        {
            amaryllis8->setVisible(false);
            empty8->setVisible(true);
            emptyBtn8->setVisible(true);
        }
    }
    catch (const std::runtime_error& e)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error",e.what());
        messageBox.setFixedSize(500,200);
    }
}

void GreenHouse::OnhyacBtns()
{
    QPushButton *temp = (QPushButton *)sender();

    try
    {
        personPtr->pick_Hyacinth();
        temp->setVisible(false);
        if (temp == hyacP1)
        {
            hyacinth1->setVisible(false);
            empty1->setVisible(true);
            emptyBtn1->setVisible(true);
        }
        if (temp == hyacP2)
        {
            hyacinth2->setVisible(false);
            empty2->setVisible(true);
            emptyBtn2->setVisible(true);
        }
        if (temp == hyacP3)
        {
            hyacinth3->setVisible(false);
            empty3->setVisible(true);
            emptyBtn3->setVisible(true);
        }
        if (temp == hyacP4)
        {
            hyacinth4->setVisible(false);
            empty4->setVisible(true);
            emptyBtn4->setVisible(true);
        }
        if (temp == hyacP5)
        {
            hyacinth5->setVisible(false);
            empty5->setVisible(true);
            emptyBtn5->setVisible(true);
        }
        if (temp == hyacP6)
        {
            hyacinth6->setVisible(false);
            empty6->setVisible(true);
            emptyBtn6->setVisible(true);
        }
        if (temp == hyacP7)
        {
            hyacinth7->setVisible(false);
            empty7->setVisible(true);
            emptyBtn7->setVisible(true);
        }
        if (temp == hyacP8)
        {
            hyacinth8->setVisible(false);
            empty8->setVisible(true);
            emptyBtn8->setVisible(true);
        }
    }
    catch (const std::runtime_error& e)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error",e.what());
        messageBox.setFixedSize(500,200);
    }
}

void GreenHouse::OnRareBudBtns()
{
    QPushButton *temp = (QPushButton *)sender();

    int ran = qrand() % 2;

    QStringList items;
    items << tr("آب") << tr("تخریب");
    bool ok;

    QString item = QInputDialog::getItem(this, tr("لیست"),
                                        tr("انتخاب:"), items, 0, false, &ok);

    if (ok && !items.isEmpty())
    {
        if (item == "آب")
        {
            if (ran == 0)
            {
                int ran1 = qrand() % 3;
                if (ran1 == 0)
                {
                    try
                    {
                        personPtr->set_flower(new Tuberose(personPtr->get_RareFlowerbud(), personPtr->get_Water()));
                        temp->setVisible(false);
                        if (temp == rareBudBtn1)
                        {
                            rareBud1->setVisible(false);
                            tuberose1->setVisible(true);
                            tubeP1->setVisible(true);
                        }
                        if (temp == rareBudBtn2)
                        {
                            rareBud2->setVisible(false);
                            tuberose2->setVisible(true);
                            tubeP2->setVisible(true);
                        }
                        if (temp == rareBudBtn3)
                        {
                            rareBud3->setVisible(false);
                            tuberose3->setVisible(true);
                            tubeP3->setVisible(true);
                        }
                        if (temp == rareBudBtn4)
                        {
                            rareBud4->setVisible(false);
                            tuberose4->setVisible(true);
                            tubeP4->setVisible(true);
                        }
                        if (temp == rareBudBtn5)
                        {
                            rareBud5->setVisible(false);
                            tuberose5->setVisible(true);
                            tubeP5->setVisible(true);
                        }
                        if (temp == rareBudBtn6)
                        {
                            rareBud6->setVisible(false);
                            tuberose6->setVisible(true);
                            tubeP6->setVisible(true);
                        }
                        if (temp == rareBudBtn7)
                        {
                            rareBud7->setVisible(false);
                            tuberose7->setVisible(true);
                            tubeP7->setVisible(true);
                        }
                        if (temp == rareBudBtn8)
                        {
                            rareBud8->setVisible(false);
                            tuberose8->setVisible(true);
                            tubeP8->setVisible(true);
                        }
                    }
                    catch (const std::runtime_error& e)
                    {
                        QMessageBox messageBox;
                        messageBox.critical(0,"Error",e.what());
                        messageBox.setFixedSize(500,200);
                    }

                }
                if (ran1 == 1)
                {
                    try
                    {
                        personPtr->set_flower(new Tulip(personPtr->get_RareFlowerbud(), personPtr->get_Water()));
                        temp->setVisible(false);
                        if (temp == rareBudBtn1)
                        {
                            rareBud1->setVisible(false);
                            tulip1->setVisible(true);
                            tulipP1->setVisible(true);
                        }
                        if (temp == rareBudBtn2)
                        {
                            rareBud2->setVisible(false);
                            tulip2->setVisible(true);
                            tulipP2->setVisible(true);
                        }
                        if (temp == rareBudBtn1)
                        {
                            rareBud3->setVisible(false);
                            tulip3->setVisible(true);
                            tulipP3->setVisible(true);
                        }
                        if (temp == rareBudBtn4)
                        {
                            rareBud4->setVisible(false);
                            tulip4->setVisible(true);
                            tulipP4->setVisible(true);
                        }
                        if (temp == rareBudBtn5)
                        {
                            rareBud5->setVisible(false);
                            tulip5->setVisible(true);
                            tulipP5->setVisible(true);
                        }
                        if (temp == rareBudBtn6)
                        {
                            rareBud6->setVisible(false);
                            tulip6->setVisible(true);
                            tulipP6->setVisible(true);
                        }
                        if (temp == rareBudBtn7)
                        {
                            rareBud7->setVisible(false);
                            tulip7->setVisible(true);
                            tulipP7->setVisible(true);
                        }
                        if (temp == rareBudBtn8)
                        {
                            rareBud8->setVisible(false);
                            tulip8->setVisible(true);
                            tulipP8->setVisible(true);
                        }
                    }
                    catch (const std::runtime_error& e)
                    {
                        QMessageBox messageBox;
                        messageBox.critical(0,"Error",e.what());
                        messageBox.setFixedSize(500,200);
                    }

                }
                if (ran1 == 2)
                {
                    try
                    {
                        personPtr->set_flower(new Hyacinth(personPtr->get_RareFlowerbud(), personPtr->get_Water()));
                        temp->setVisible(false);
                        if (temp == rareBudBtn1)
                        {
                            rareBud1->setVisible(false);
                            hyacinth1->setVisible(true);
                            hyacP1->setVisible(true);
                        }
                        if (temp == rareBudBtn2)
                        {
                            rareBud2->setVisible(false);
                            hyacinth2->setVisible(true);
                            hyacP2->setVisible(true);
                        }
                        if (temp == rareBudBtn3)
                        {
                            rareBud3->setVisible(false);
                            hyacinth3->setVisible(true);
                            hyacP3->setVisible(true);
                        }
                        if (temp == rareBudBtn4)
                        {
                            rareBud4->setVisible(false);
                            hyacinth4->setVisible(true);
                            hyacP4->setVisible(true);
                        }
                        if (temp == rareBudBtn5)
                        {
                            rareBud5->setVisible(false);
                            hyacinth5->setVisible(true);
                            hyacP5->setVisible(true);
                        }
                        if (temp == rareBudBtn6)
                        {
                            rareBud6->setVisible(false);
                            hyacinth6->setVisible(true);
                            hyacP6->setVisible(true);
                        }
                        if (temp == rareBudBtn7)
                        {
                            rareBud7->setVisible(false);
                            hyacinth7->setVisible(true);
                            hyacP7->setVisible(true);
                        }
                        if (temp == rareBudBtn8)
                        {
                            rareBud8->setVisible(false);
                            hyacinth8->setVisible(true);
                            hyacP8->setVisible(true);
                        }
                    }
                    catch (const std::runtime_error& e)
                    {
                        QMessageBox messageBox;
                        messageBox.critical(0,"Error",e.what());
                        messageBox.setFixedSize(500,200);
                    }

                }
            }
            if (ran == 1)
            {
                QStringList items1;
                items1 << tr("ماده سمپاشی");
                bool ok1;

                QString item1 = QInputDialog::getItem(this, tr("لیست"),
                                                    tr("انتخاب:"), items1, 0, false, &ok1);

                if (ok1 && !items1.isEmpty())
                {
                    if (item1 == "ماده سمپاشی")
                    {
                        std::default_random_engine eng1(static_cast<unsigned int>(time(0)));
                        std::uniform_int_distribution<unsigned int> myrand1(1, 3);
                        int a1 = myrand1(eng1);
                        if (a1 == 1)
                        {
                            try
                            {
                                personPtr->set_flower(new Tuberose(personPtr->get_RareFlowerbud(), personPtr->get_Water()));
                                temp->setVisible(false);
                                if (temp == rareBudBtn1)
                                {
                                    rareBud1->setVisible(false);
                                    tuberose1->setVisible(true);
                                    tubeP1->setVisible(true);
                                }
                                if (temp == rareBudBtn2)
                                {
                                    rareBud2->setVisible(false);
                                    tuberose2->setVisible(true);
                                    tubeP2->setVisible(true);
                                }
                                if (temp == rareBudBtn3)
                                {
                                    rareBud3->setVisible(false);
                                    tuberose3->setVisible(true);
                                    tubeP3->setVisible(true);
                                }
                                if (temp == rareBudBtn4)
                                {
                                    rareBud4->setVisible(false);
                                    tuberose4->setVisible(true);
                                    tubeP4->setVisible(true);
                                }
                                if (temp == rareBudBtn5)
                                {
                                    rareBud5->setVisible(false);
                                    tuberose5->setVisible(true);
                                    tubeP5->setVisible(true);
                                }
                                if (temp == rareBudBtn6)
                                {
                                    rareBud6->setVisible(false);
                                    tuberose6->setVisible(true);
                                    tubeP6->setVisible(true);
                                }
                                if (temp == rareBudBtn7)
                                {
                                    rareBud7->setVisible(false);
                                    tuberose7->setVisible(true);
                                    tubeP7->setVisible(true);
                                }
                                if (temp == rareBudBtn8)
                                {
                                    rareBud8->setVisible(false);
                                    tuberose8->setVisible(true);
                                    tubeP8->setVisible(true);
                                }
                            }
                            catch (const std::runtime_error& e)
                            {
                                QMessageBox messageBox;
                                messageBox.critical(0,"Error",e.what());
                                messageBox.setFixedSize(500,200);
                            }

                        }
                        if (a1 == 2)
                        {
                            try
                            {
                                personPtr->set_flower(new Tulip(personPtr->get_RareFlowerbud(), personPtr->get_Water()));
                                temp->setVisible(false);
                                if (temp == rareBudBtn1)
                                {
                                    rareBud1->setVisible(false);
                                    tulip1->setVisible(true);
                                    tulipP1->setVisible(true);
                                }
                                if (temp == rareBudBtn2)
                                {
                                    rareBud2->setVisible(false);
                                    tulip2->setVisible(true);
                                    tulipP2->setVisible(true);
                                }
                                if (temp == rareBudBtn1)
                                {
                                    rareBud3->setVisible(false);
                                    tulip3->setVisible(true);
                                    tulipP3->setVisible(true);
                                }
                                if (temp == rareBudBtn4)
                                {
                                    rareBud4->setVisible(false);
                                    tulip4->setVisible(true);
                                    tulipP4->setVisible(true);
                                }
                                if (temp == rareBudBtn5)
                                {
                                    rareBud5->setVisible(false);
                                    tulip5->setVisible(true);
                                    tulipP5->setVisible(true);
                                }
                                if (temp == rareBudBtn6)
                                {
                                    rareBud6->setVisible(false);
                                    tulip6->setVisible(true);
                                    tulipP6->setVisible(true);
                                }
                                if (temp == rareBudBtn7)
                                {
                                    rareBud7->setVisible(false);
                                    tulip7->setVisible(true);
                                    tulipP7->setVisible(true);
                                }
                                if (temp == rareBudBtn8)
                                {
                                    rareBud8->setVisible(false);
                                    tulip8->setVisible(true);
                                    tulipP8->setVisible(true);
                                }
                            }
                            catch (const std::runtime_error& e)
                            {
                                QMessageBox messageBox;
                                messageBox.critical(0,"Error",e.what());
                                messageBox.setFixedSize(500,200);
                            }

                        }
                        if (a1 == 3)
                        {
                            try
                            {
                                personPtr->set_flower(new Hyacinth(personPtr->get_RareFlowerbud(), personPtr->get_Water()));
                                temp->setVisible(false);
                                if (temp == rareBudBtn1)
                                {
                                    rareBud1->setVisible(false);
                                    hyacinth1->setVisible(true);
                                    hyacP1->setVisible(true);
                                }
                                if (temp == rareBudBtn2)
                                {
                                    rareBud2->setVisible(false);
                                    hyacinth2->setVisible(true);
                                    hyacP2->setVisible(true);
                                }
                                if (temp == rareBudBtn3)
                                {
                                    rareBud3->setVisible(false);
                                    hyacinth3->setVisible(true);
                                    hyacP3->setVisible(true);
                                }
                                if (temp == rareBudBtn4)
                                {
                                    rareBud4->setVisible(false);
                                    hyacinth4->setVisible(true);
                                    hyacP4->setVisible(true);
                                }
                                if (temp == rareBudBtn5)
                                {
                                    rareBud5->setVisible(false);
                                    hyacinth5->setVisible(true);
                                    hyacP5->setVisible(true);
                                }
                                if (temp == rareBudBtn6)
                                {
                                    rareBud6->setVisible(false);
                                    hyacinth6->setVisible(true);
                                    hyacP6->setVisible(true);
                                }
                                if (temp == rareBudBtn7)
                                {
                                    rareBud7->setVisible(false);
                                    hyacinth7->setVisible(true);
                                    hyacP7->setVisible(true);
                                }
                                if (temp == rareBudBtn8)
                                {
                                    rareBud8->setVisible(false);
                                    hyacinth8->setVisible(true);
                                    hyacP8->setVisible(true);
                                }
                            }
                            catch (const std::runtime_error& e)
                            {
                                QMessageBox messageBox;
                                messageBox.critical(0,"Error",e.what());
                                messageBox.setFixedSize(500,200);
                            }

                        }
                    }
                }
            }
        }
        if (item == "تخریب")
        {
            try
            {
                RareFlowerbuds::inc_rareFlowerBud_count();
                totalDeletedFLower++;
                delete personPtr->get_RareFlowerbud();
                temp->setVisible(false);
                if (temp == rareBudBtn1)
                {
                    rareBud1->setVisible(false);
                    empty1->setVisible(true);
                    emptyBtn1->setVisible(true);
                }
                if (temp == rareBudBtn1)
                {
                    rareBud2->setVisible(false);
                    empty2->setVisible(true);
                    emptyBtn2->setVisible(true);
                }
                if (temp == rareBudBtn3)
                {
                    rareBud3->setVisible(false);
                    empty3->setVisible(true);
                    emptyBtn3->setVisible(true);
                }
                if (temp == rareBudBtn4)
                {
                    rareBud4->setVisible(false);
                    empty4->setVisible(true);
                    emptyBtn4->setVisible(true);
                }
                if (temp == rareBudBtn5)
                {
                    rareBud5->setVisible(false);
                    empty5->setVisible(true);
                    emptyBtn5->setVisible(true);
                }
                if (temp == rareBudBtn6)
                {
                    rareBud6->setVisible(false);
                    empty6->setVisible(true);
                    emptyBtn6->setVisible(true);
                }
                if (temp == rareBudBtn7)
                {
                    rareBud7->setVisible(false);
                    empty7->setVisible(true);
                    emptyBtn7->setVisible(true);
                }
                if (temp == rareBudBtn8)
                {
                    rareBud8->setVisible(false);
                    empty8->setVisible(true);
                    emptyBtn8->setVisible(true);
                }
            }
            catch (const std::runtime_error& e)
            {
                QMessageBox messageBox;
                messageBox.critical(0,"Error",e.what());
                messageBox.setFixedSize(500,200);
            }
        }
    }
}

void GreenHouse::OnOrnamBudBtns()
{
    QPushButton *temp = (QPushButton *)sender();
    QStringList items;
    items << tr("آب") << tr("تخریب");
    bool ok;

    QString item = QInputDialog::getItem(this, tr("لیست"),
                                        tr("انتخاب:"), items, 0, false, &ok);

    if (ok && !items.isEmpty())
    {
        if (item == "آب")
        {
            personPtr->set_flower(new OrnamentalFlowerBud(personPtr->get_OrnamentalBud(), personPtr->get_Water()));
            QStringList items1;
            items1 << tr("عصاره مگنولیا") << tr("عصاره ارکیده") << tr("عصاره لیلیوم") << tr("تخریب");
            bool ok1;

            QString item1 = QInputDialog::getItem(this, tr("لیست"),
                                                tr("انتخاب:"), items1, 0, false, &ok1);

            if (ok1 && !items1.isEmpty())
            {
                if (item1 == "عصاره مگنولیا")
                {
                    try
                    {
                        personPtr->set_flower(new Magnolia(personPtr->get_OrnamentalFlowerBud(), personPtr->get_MagnoliaExtract()));
                        temp->setVisible(false);
                        if (temp == ornamBudBtn1)
                        {
                            ornamentalBud1->setVisible(false);
                            magnolia1->setVisible(true);
                            magnP1->setVisible(true);
                        }
                        if (temp == ornamBudBtn2)
                        {
                            ornamentalBud2->setVisible(false);
                            magnolia2->setVisible(true);
                            magnP2->setVisible(true);
                        }
                        if (temp == ornamBudBtn3)
                        {
                            ornamentalBud3->setVisible(false);
                            magnolia3->setVisible(true);
                            magnP3->setVisible(true);
                        }
                        if (temp == ornamBudBtn4)
                        {
                            ornamentalBud4->setVisible(false);
                            magnolia4->setVisible(true);
                            magnP4->setVisible(true);
                        }
                        if (temp == ornamBudBtn5)
                        {
                            ornamentalBud5->setVisible(false);
                            magnolia5->setVisible(true);
                            magnP5->setVisible(true);
                        }
                        if (temp == ornamBudBtn6)
                        {
                            ornamentalBud6->setVisible(false);
                            magnolia6->setVisible(true);
                            magnP6->setVisible(true);
                        }
                        if (temp == ornamBudBtn7)
                        {
                            ornamentalBud7->setVisible(false);
                            magnolia7->setVisible(true);
                            magnP7->setVisible(true);
                        }
                        if (temp == ornamBudBtn8)
                        {
                            ornamentalBud8->setVisible(false);
                            magnolia8->setVisible(true);
                            magnP8->setVisible(true);
                        }
                    }
                    catch (const std::runtime_error& e)
                    {
                        QMessageBox messageBox;
                        messageBox.critical(0,"Error",e.what());
                        messageBox.setFixedSize(500,200);
                    }

                }
                if (item1 == "عصاره لیلیوم")
                {
                    try
                    {
                        personPtr->set_flower(new Orchid(personPtr->get_OrnamentalFlowerBud(), personPtr->get_OrchidExtract()));
                        temp->setVisible(false);
                        if (temp == ornamBudBtn1)
                        {
                            ornamentalBud1->setVisible(false);
                            lilium1->setVisible(true);
                            liliP1->setVisible(true);
                        }
                        if (temp == ornamBudBtn2)
                        {
                            ornamentalBud2->setVisible(false);
                            lilium2->setVisible(true);
                            liliP2->setVisible(true);
                        }
                        if (temp == ornamBudBtn3)
                        {
                            ornamentalBud3->setVisible(false);
                            lilium3->setVisible(true);
                            liliP3->setVisible(true);
                        }
                        if (temp == ornamBudBtn4)
                        {
                            ornamentalBud4->setVisible(false);
                            lilium4->setVisible(true);
                            liliP4->setVisible(true);
                        }
                        if (temp == ornamBudBtn5)
                        {
                            ornamentalBud5->setVisible(false);
                            lilium5->setVisible(true);
                            liliP5->setVisible(true);
                        }
                        if (temp == ornamBudBtn6)
                        {
                            ornamentalBud6->setVisible(false);
                            lilium6->setVisible(true);
                            liliP6->setVisible(true);
                        }
                        if (temp == ornamBudBtn7)
                        {
                            ornamentalBud7->setVisible(false);
                            lilium7->setVisible(true);
                            liliP7->setVisible(true);
                        }
                        if (temp == ornamBudBtn8)
                        {
                            ornamentalBud8->setVisible(false);
                            lilium8->setVisible(true);
                            liliP8->setVisible(true);
                        }
                    }
                    catch (const std::runtime_error& e)
                    {
                        QMessageBox messageBox;
                        messageBox.critical(0,"Error",e.what());
                        messageBox.setFixedSize(500,200);
                    }

                }
                if (item1 == "عصاره ارکیده")
                {
                    try
                    {
                        personPtr->set_flower(new Lilium(personPtr->get_OrnamentalFlowerBud(), personPtr->get_LiliumExtract()));
                        temp->setVisible(false);
                        if (temp == ornamBudBtn1)
                        {
                            ornamentalBud1->setVisible(false);
                            orchid1->setVisible(true);
                            orchP1->setVisible(true);
                        }
                        if (temp == ornamBudBtn2)
                        {
                            ornamentalBud2->setVisible(false);
                            orchid2->setVisible(true);
                            orchP2->setVisible(true);
                        }
                        if (temp == ornamBudBtn3)
                        {
                            ornamentalBud3->setVisible(false);
                            orchid3->setVisible(true);
                            orchP3->setVisible(true);
                        }
                        if (temp == ornamBudBtn4)
                        {
                            ornamentalBud4->setVisible(false);
                            orchid4->setVisible(true);
                            orchP4->setVisible(true);
                        }
                        if (temp == ornamBudBtn5)
                        {
                            ornamentalBud5->setVisible(false);
                            orchid5->setVisible(true);
                            orchP5->setVisible(true);
                        }
                        if (temp == ornamBudBtn6)
                        {
                            ornamentalBud6->setVisible(false);
                            orchid6->setVisible(true);
                            orchP6->setVisible(true);
                        }
                        if (temp == ornamBudBtn7)
                        {
                            ornamentalBud7->setVisible(false);
                            orchid7->setVisible(true);
                            orchP7->setVisible(true);
                        }
                        if (temp == ornamBudBtn8)
                        {
                            ornamentalBud8->setVisible(false);
                            orchid8->setVisible(true);
                            orchP8->setVisible(true);
                        }
                    }
                    catch (const std::runtime_error& e)
                    {
                        QMessageBox messageBox;
                        messageBox.critical(0,"Error",e.what());
                        messageBox.setFixedSize(500,200);
                    }

                }
                if (item1 == "تخریب")
                {
                    try
                    {
                        OrnamentalFlowerBud::inc_ornamentalFlowerBud_count();
                        totalDeletedFLower++;
                        delete personPtr->get_OrnamentalFlowerBud();
                        temp->setVisible(false);
                        if (temp == ornamBudBtn1)
                        {
                            ornamentalBud1->setVisible(false);
                            empty1->setVisible(true);
                            emptyBtn1->setVisible(true);
                        }
                        if (temp == ornamBudBtn1)
                        {
                            ornamentalBud2->setVisible(false);
                            empty2->setVisible(true);
                            emptyBtn2->setVisible(true);
                        }
                        if (temp == ornamBudBtn3)
                        {
                            ornamentalBud3->setVisible(false);
                            empty3->setVisible(true);
                            emptyBtn3->setVisible(true);
                        }
                        if (temp == ornamBudBtn4)
                        {
                            ornamentalBud4->setVisible(false);
                            empty4->setVisible(true);
                            emptyBtn4->setVisible(true);
                        }
                        if (temp == ornamBudBtn5)
                        {
                            ornamentalBud5->setVisible(false);
                            empty5->setVisible(true);
                            emptyBtn5->setVisible(true);
                        }
                        if (temp == ornamBudBtn6)
                        {
                            ornamentalBud6->setVisible(false);
                            empty6->setVisible(true);
                            emptyBtn6->setVisible(true);
                        }
                        if (temp == ornamBudBtn7)
                        {
                            ornamentalBud7->setVisible(false);
                            empty7->setVisible(true);
                            emptyBtn7->setVisible(true);
                        }
                        if (temp == ornamBudBtn8)
                        {
                            ornamentalBud8->setVisible(false);
                            empty8->setVisible(true);
                            emptyBtn8->setVisible(true);
                        }
                    }
                    catch (const std::runtime_error& e)
                    {
                        QMessageBox messageBox;
                        messageBox.critical(0,"Error",e.what());
                        messageBox.setFixedSize(500,200);
                    }
                }
            }
        }
        if (item == "تخریب")
        {
            try
            {
                OrnamentalBud::inc_ornamentalBud_count();
                totalDeletedFLower++;
                delete personPtr->get_OrnamentalBud();
                temp->setVisible(false);
                if (temp == ornamBudBtn1)
                {
                    ornamentalBud1->setVisible(false);
                    empty1->setVisible(true);
                    emptyBtn1->setVisible(true);
                }
                if (temp == ornamBudBtn1)
                {
                    ornamentalBud2->setVisible(false);
                    empty2->setVisible(true);
                    emptyBtn2->setVisible(true);
                }
                if (temp == ornamBudBtn3)
                {
                    ornamentalBud3->setVisible(false);
                    empty3->setVisible(true);
                    emptyBtn3->setVisible(true);
                }
                if (temp == ornamBudBtn4)
                {
                    ornamentalBud4->setVisible(false);
                    empty4->setVisible(true);
                    emptyBtn4->setVisible(true);
                }
                if (temp == ornamBudBtn5)
                {
                    ornamentalBud5->setVisible(false);
                    empty5->setVisible(true);
                    emptyBtn5->setVisible(true);
                }
                if (temp == ornamBudBtn6)
                {
                    ornamentalBud6->setVisible(false);
                    empty6->setVisible(true);
                    emptyBtn6->setVisible(true);
                }
                if (temp == ornamBudBtn7)
                {
                    ornamentalBud7->setVisible(false);
                    empty7->setVisible(true);
                    emptyBtn7->setVisible(true);
                }
                if (temp == ornamBudBtn8)
                {
                    ornamentalBud8->setVisible(false);
                    empty8->setVisible(true);
                    emptyBtn8->setVisible(true);
                }
            }
            catch (const std::runtime_error& e)
            {
                QMessageBox messageBox;
                messageBox.critical(0,"Error",e.what());
                messageBox.setFixedSize(500,200);
            }
        }
    }
}

void GreenHouse::OnOrBudBtns()
{
    QPushButton *temp = (QPushButton *)sender();
    int ran = qrand() % 2;


    QStringList items;
    items << tr("آب") << tr("تخریب");
    bool ok;

    QString item = QInputDialog::getItem(this, tr("لیست"),
                                        tr("انتخاب:"), items, 0, false, &ok);

    if (ok && !items.isEmpty())
    {
        if (item == "آب")
        {
            std::cout << ran << std::endl;
            if (ran == 0)
            {
                try
                {
                    personPtr->set_flower(new Dahlia(personPtr->get_OrdinaryFlowerBud(), personPtr->get_Water()));
                    temp->setVisible(false);
                    if (temp == orBudBtn1)
                    {
                        ordinaryBud1->setVisible(false);
                        dahliaP1->setVisible(true);
                        dahlia1->setVisible(true);
                    }
                    if (temp == orBudBtn2)
                    {
                        ordinaryBud2->setVisible(false);
                        dahliaP2->setVisible(true);
                        dahlia2->setVisible(true);
                    }
                    if (temp == orBudBtn3)
                    {
                        ordinaryBud3->setVisible(false);
                        dahliaP3->setVisible(true);
                        dahlia3->setVisible(true);
                    }
                    if (temp == orBudBtn4)
                    {
                        ordinaryBud4->setVisible(false);
                        dahliaP4->setVisible(true);
                        dahlia4->setVisible(true);
                    }
                    if (temp == orBudBtn5)
                    {
                        ordinaryBud5->setVisible(false);
                        dahliaP5->setVisible(true);
                        dahlia5->setVisible(true);
                    }
                    if (temp == orBudBtn6)
                    {
                        ordinaryBud6->setVisible(false);
                        dahliaP6->setVisible(true);
                        dahlia6->setVisible(true);
                    }
                    if (temp == orBudBtn7)
                    {
                        ordinaryBud7->setVisible(false);
                        dahliaP7->setVisible(true);
                        dahlia7->setVisible(true);
                    }
                    if (temp == orBudBtn8)
                    {
                        ordinaryBud8->setVisible(false);
                        dahliaP8->setVisible(true);
                        dahlia8->setVisible(true);
                    }
                }
                catch (const std::runtime_error& e)
                {
                    QMessageBox messageBox;
                    messageBox.critical(0,"Error","پول کافی ندارید!");
                    messageBox.setFixedSize(500,200);
                }
            }
                if (ran == 1)
                {
                    try
                    {
                        personPtr->set_flower(new Amaryllis(personPtr->get_OrdinaryFlowerBud(), personPtr->get_Water()));
                        temp->setVisible(false);
                        if (temp == orBudBtn1)
                        {
                            ordinaryBud1->setVisible(false);
                            amarP1->setVisible(true);
                            amaryllis1->setVisible(true);
                        }
                        if (temp == orBudBtn2)
                        {
                            ordinaryBud2->setVisible(false);
                            amarP2->setVisible(true);
                            amaryllis2->setVisible(true);
                        }
                        if (temp == orBudBtn3)
                        {
                            ordinaryBud3->setVisible(false);
                            amarP3->setVisible(true);
                            amaryllis3->setVisible(true);
                        }
                        if (temp == orBudBtn4)
                        {
                            ordinaryBud4->setVisible(false);
                            amarP4->setVisible(true);
                            amaryllis4->setVisible(true);
                        }
                        if (temp == orBudBtn5)
                        {
                            ordinaryBud5->setVisible(false);
                            amarP5->setVisible(true);
                            amaryllis5->setVisible(true);
                        }
                        if (temp == orBudBtn6)
                        {
                            ordinaryBud6->setVisible(false);
                            amarP6->setVisible(true);
                            amaryllis6->setVisible(true);
                        }
                        if (temp == orBudBtn7)
                        {
                            ordinaryBud7->setVisible(false);
                            amarP7->setVisible(true);
                            amaryllis7->setVisible(true);
                        }
                        if (temp == orBudBtn8)
                        {
                            ordinaryBud8->setVisible(false);
                            amarP8->setVisible(true);
                            amaryllis8->setVisible(true);
                        }
                    }
                    catch (const std::runtime_error& e)
                    {
                        QMessageBox messageBox;
                        messageBox.critical(0,"Error",e.what());
                        messageBox.setFixedSize(500,200);
                    }
                }
            }

        if (item == "تخریب")
        {
            try
            {
                OrdinaryFlowerBuds::inc_ordinaryFlowerBud_count();
                totalDeletedFLower++;
                delete personPtr->get_OrdinaryFlowerBud();
                temp->setVisible(false);
                if (temp == orBudBtn1)
                {
                    ordinaryBud1->setVisible(false);
                    empty1->setVisible(true);
                    emptyBtn1->setVisible(true);
                }
                if (temp == orBudBtn2)
                {
                    ordinaryBud2->setVisible(false);
                    empty2->setVisible(true);
                    emptyBtn2->setVisible(true);
                }
                if (temp == orBudBtn3)
                {
                    ordinaryBud3->setVisible(false);
                    empty3->setVisible(true);
                    emptyBtn3->setVisible(true);
                }
                if (temp == orBudBtn4)
                {
                    ordinaryBud4->setVisible(false);
                    empty4->setVisible(true);
                    emptyBtn4->setVisible(true);
                }
                if (temp == orBudBtn5)
                {
                    ordinaryBud5->setVisible(false);
                    empty5->setVisible(true);
                    emptyBtn5->setVisible(true);
                }
                if (temp == orBudBtn6)
                {
                    ordinaryBud6->setVisible(false);
                    empty6->setVisible(true);
                    emptyBtn6->setVisible(true);
                }
                if (temp == orBudBtn7)
                {
                    ordinaryBud7->setVisible(false);
                    empty7->setVisible(true);
                    emptyBtn7->setVisible(true);
                }
                if (temp == orBudBtn8)
                {
                    ordinaryBud8->setVisible(false);
                    empty8->setVisible(true);
                    emptyBtn8->setVisible(true);
                }
            }
            catch (const std::runtime_error& e)
            {
                QMessageBox messageBox;
                messageBox.critical(0,"Error",e.what());
                messageBox.setFixedSize(500,200);
            }
        }
    }
}

void GreenHouse::OnOrBtns()
{
    QPushButton *temp = (QPushButton *)sender();
    QStringList items;
    items << tr("خاک") << tr("تخریب");
    bool ok;

    QString item = QInputDialog::getItem(this, tr("لیست"),
                                        tr("انتخاب:"), items, 0, false, &ok);

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
                QMessageBox messageBox;
                messageBox.critical(0,"Error",e.what());
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
                QMessageBox messageBox;
                messageBox.critical(0,"Error",e.what());
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

    QString item = QInputDialog::getItem(this, tr("لیست"),
                                        tr("انتخاب:"), items, 0, false, &ok);

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
                QMessageBox messageBox;
                messageBox.critical(0,"Error",e.what());
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
                QMessageBox messageBox;
                messageBox.critical(0,"Error",e.what());
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

    QString item = QInputDialog::getItem(this, tr("لیست"),
                                        tr("انتخاب:"), items, 0, false, &ok);

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
                QMessageBox messageBox;
                messageBox.critical(0,"Error",e.what());
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
                if (temp == ornamBtn3)
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
                QMessageBox messageBox;
                messageBox.critical(0,"Error","پیاز گل زینتی کافی ندارید!");
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

    QString item = QInputDialog::getItem(this, tr("لیست"),
                                        tr("انتخاب:"), items, 0, false, &ok);

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
                messageBox.critical(0,"Error","پیاز گل عادی کافی ندارید!");
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
                messageBox.critical(0,"Error","پیاز گل نادر کافی ندارید!");
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
                messageBox.critical(0,"Error","پیاز گل زینتی کافی ندارید!");
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

    QString item = QInputDialog::getItem(this, tr("لیست"),
                                        tr("انتخاب:"), items, 0, false, &ok);
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
                messageBox.critical(0,"Error","پیاز گل عادی کافی ندارید!");
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
                messageBox.critical(0,"Error","پیاز گل نادر کافی ندارید!");
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
                messageBox.critical(0,"Error","پیاز گل زینتی کافی ندارید!");
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

    QString item = QInputDialog::getItem(this, tr("لیست"),
                                        tr("انتخاب:"), items, 0, false, &ok);

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
                messageBox.critical(0,"Error","پیاز گل عادی کافی ندارید!");
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
                messageBox.critical(0,"Error","پیاز گل نادر کافی ندارید!");
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
                messageBox.critical(0,"Error","پیاز گل زینتی کافی ندارید!");
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

    QString item = QInputDialog::getItem(this, tr("لیست"),
                                        tr("انتخاب:"), items, 0, false, &ok);

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
                messageBox.critical(0,"Error","پیاز گل عادی کافی ندارید!");
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
                messageBox.critical(0,"Error","پیاز گل نادر کافی ندارید!");
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
                messageBox.critical(0,"Error","پیاز گل زینتی کافی ندارید!");
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

    QString item = QInputDialog::getItem(this, tr("لیست"),
                                        tr("انتخاب:"), items, 0, false, &ok);

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
                messageBox.critical(0,"Error","پیاز گل عادی کافی ندارید!");
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
                messageBox.critical(0,"Error","پیاز گل نادر کافی ندارید!");
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
                messageBox.critical(0,"Error","پیاز گل زینتی کافی ندارید!");
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

    QString item = QInputDialog::getItem(this, tr("لیست"),
                                        tr("انتخاب:"), items, 0, false, &ok);

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
                messageBox.critical(0,"Error","پیاز گل عادی کافی ندارید!");
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
                messageBox.critical(0,"Error","پیاز گل نادر کافی ندارید!");
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
                messageBox.critical(0,"Error","پیاز گل زینتی کافی ندارید!");
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

    QString item = QInputDialog::getItem(this, tr("لیست"),
                                        tr("انتخاب:"), items, 0, false, &ok);

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
                messageBox.critical(0,"Error","پیاز گل عادی کافی ندارید!");
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
                messageBox.critical(0,"Error","پیاز گل نادر کافی ندارید!");
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
                messageBox.critical(0,"Error","پیاز گل زینتی کافی ندارید!");
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

    QString item = QInputDialog::getItem(this, tr("لیست"),
                                        tr("انتخاب:"), items, 0, false, &ok);

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
                messageBox.critical(0,"Error","پیاز گل عادی کافی ندارید!");
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
                messageBox.critical(0,"Error","پیاز گل نادر کافی ندارید!");
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
                messageBox.critical(0,"Error","پیاز گل زینتی کافی ندارید!");
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
    QPixmap pic(":/new/da.png");
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
    QPixmap pic(":/new/la.png");
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
    QPixmap pic(":/new/mar.png");
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
    QPixmap pic(":/new/na.png");
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
    QPixmap pic(":/new/son.png");
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
    QPixmap pic(":/new/ma.png");
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
    QPixmap pic(":/new/li.png");
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
    QPixmap pic(":/new/or.png");
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
    QPixmap pic(":/new/gh81.png");
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
    QPixmap pic(":/new/gh81.png");
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
    QPixmap pic(":/new/gh81.png");
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
    QPixmap pic(":/new/gh81.png");
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
    QPixmap pic(":/new/gh81.png");
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
    QPixmap pic(":/new/gh81.png");
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
    QPixmap pic(":/new/gh81.png");
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
    QPixmap pic(":/new/pic.png");
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
    QPixmap pic(":/new/khali.png");
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
    QPixmap pixmap(":/new/menu14.png");
    QIcon ButtonIcon(pixmap);
    profile->setIcon(ButtonIcon);
    profile->setIconSize(pixmap.rect().size());
    profile->setFixedSize(pixmap.rect().size());

    greenHouse = new QPushButton("", this);
    greenHouse->setGeometry(1095,0,150,73);
    QPixmap pixmap1(":/new/menu15.png");
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

void GreenHouse::setBackground()
{

    QPixmap bkgnd(":/new/ghback.png");
    QPalette palettee;
    palettee.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palettee);
    this->setFixedSize(bkgnd.rect().size());
    this->setWindowTitle("گلخونه");
}
