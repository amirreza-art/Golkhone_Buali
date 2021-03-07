#include "laboratory.h"

Laboratory::Laboratory(QWidget *parent) : QWidget(parent)
{

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

/*
    QPixmap pixmap("C:/Users/Abisys/Desktop/nnn/music0.png");
    QIcon ButtonIcon(pixmap);
    soundOff->setIcon(ButtonIcon);
    soundOff->setStyleSheet("QPushButton{background:transparent;}");
    soundOff->setIconSize(pixmap.rect().size());
    soundOff->setFixedSize(pixmap.rect().size());*/
}

void Laboratory::setBackground()
{

    QPixmap bkgnd("C://Users//Abisys//Desktop//nnn//labback.png");
    QPalette palettee;
    palettee.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palettee);
    this->setFixedSize(bkgnd.rect().size());
    this->setWindowTitle("گلخونه");
}
