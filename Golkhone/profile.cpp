#include "profile.h"
#include "laboratory.h"
#include "shop.h"

Laboratory *laboratoryPtr = nullptr;
Profile *profilePtr = nullptr;
Shop *shopPtr = nullptr;

Profile::Profile(QWidget *parent) : QWidget(parent)
{
    profilePtr = this;
    laboratoryPtr = new Laboratory();
    shopPtr = new Shop();

    setBackground();

    setSoundPics();
    connect(soundOff, &QPushButton::clicked, this, &Profile::OnSoundOff);
    connect(soundOn, &QPushButton::clicked, this, &Profile::OnSoundOn);

    setLoadAndSavPic();

    WindowButtons();

    connect(laboratory, &QPushButton::clicked, this, &Profile::OnLaboratory);
    connect(shop, &QPushButton::clicked, this, &Profile::OnShop);


/*
    QLabel *l1 = new QLabel("مجموع گل های عادی:",this);
    //QFont font = l1->setFont();
    //font.setPointSize(16);

    QLabel *l11 = new QLabel("",this);
    unsigned int a = 100;
    l11->setText(QString::number(a));
    l11->setGeometry(1000,440,50,50);
    l1->setGeometry(1050,440,150,50);
    QLabel *l2 = new QLabel("مجموع گل های کاشته شده:",this);
    QLabel *l22 = new QLabel("00",this);
    QLabel *l3 = new QLabel("مجموع گل های نادر:",this);
    QLabel *l33 = new QLabel("00",this);
    QLabel *l4 = new QLabel("مجموع گل های زینتی:",this);
    QLabel *l44 = new QLabel("",this);
    QLabel *l5 = new QLabel("مجموع گل های حذف شدع:",this);
    QLabel *l55 = new QLabel("00",this);
    QLabel *l6 = new QLabel("مجموع عصاره ها:",this);
    QLabel *l66 = new QLabel("",this);
*/
    QLabel *storeLable = new QLabel("", this);
    QPixmap storePic("C:/Users/Abisys/Desktop/nnn/Asset0.png");
    storeLable->setPixmap(storePic);
    storeLable->setFixedSize(storePic.rect().size());
    storeLable->setGeometry(1053,690,150,150);



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

void Profile::WindowButtons()
{
    profile = new QPushButton("prof", this);
    profile->setGeometry(1245,0,150,73);
    //profile->setStyleSheet("QPushButton{background:transparent;}");

    greenHouse = new QPushButton("gr", this);
    greenHouse->setGeometry(1095,0,150,73);

    shop = new QPushButton("st", this);
    shop->setGeometry(945,0,150,73);

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

void Profile::setLoadAndSavPic()
{
    save = new QPushButton(this);
    QPixmap pixmap2("C:/Users/Abisys/Desktop/nnn/strip3.png");
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

    QLabel *saveLable = new QLabel("kkkkk", this);
    saveLable->setGeometry(650, 550,100,100);
    QLabel *loadLable = new QLabel("", this);
    loadLable->setGeometry(220, 550,5,5);

}

void Profile::setSoundPics()
{
    soundOff = new QPushButton("", this);
    soundOff->setGeometry(1083,540,50,50);
    soundOn = new QPushButton("", this);
    soundOn->setGeometry(1083,540,50,50);
    soundOn->setVisible(false);

    QPixmap pixmap("C:/Users/Abisys/Desktop/nnn/music0.png");
    QIcon ButtonIcon(pixmap);
    soundOff->setIcon(ButtonIcon);
    soundOff->setStyleSheet("QPushButton{background:transparent;}");
    soundOff->setIconSize(pixmap.rect().size());
    soundOff->setFixedSize(pixmap.rect().size());

    QPixmap pixmap1("C:/Users/Abisys/Desktop/nnn/music1.png");
    QIcon ButtonIcon1(pixmap1);
    soundOn->setIcon(ButtonIcon1);
    soundOn->setStyleSheet("QPushButton{background:transparent;}");
    soundOn->setIconSize(pixmap1.rect().size());
    soundOn->setFixedSize(pixmap1.rect().size());
}

void Profile::OnSoundOff()
{
    playList = new QMediaPlaylist();
    playList->addMedia(QUrl("C:/Users/Abisys/Downloads/Music/Chaartaar - Adineh.mp3"));
    playList->setPlaybackMode(QMediaPlaylist::Loop);

    music = new QMediaPlayer();
    music->setPlaylist(playList);
    music->play();
    soundOff->setVisible(false);
    soundOn->setVisible(true);
}

void Profile::OnSoundOn()
{
    music->stop();
    soundOff->setVisible(true);
    soundOn->setVisible(false);
}

void Profile::setBackground()
{

    QPixmap bkgnd("C://Users//Abisys//Desktop//nnn//background.png");
    QPalette palettee;
    palettee.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palettee);
    this->setFixedSize(bkgnd.rect().size());
    this->setWindowTitle("گلخونه");
}



/*
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QPushButton *btn1 = new QPushButton( "", this);
    //QHBoxLayout *m = new QHBoxLayout(this);
    //m->addWidget(btn1);
    btn1->setGeometry(50,50,50,50);
    QPushButton *btn2 = new QPushButton( "xx", this);
    btn2->setGeometry(50,50,50,50);
    btn2->setVisible(false);
    btn1->setMinimumSize(376, 103);


    QPixmap pixmap("C://Users//Abisys//Desktop//nnn//Gift//3x//strip2.png");
    QIcon ButtonIcon(pixmap);
    btn1->setIcon(ButtonIcon);
    btn1->setStyleSheet("QPushButton{background:transparent;}");
    //btn1->setAttribute(Qt::WA_TranslucentBackground);
    btn1->setIconSize(pixmap.rect().size());
    btn1->setFixedSize(pixmap.rect().size());


    QToolButton *kl = new QToolButton(this);
    kl->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    kl->setGeometry(250,250,250,250);
    kl->setIconSize(pixmap.rect().size());
    kl->setFixedSize(pixmap.rect().size());
    kl->setStyleSheet("QPushButton{background:transparent;}");
    kl->setIcon(ButtonIcon);
    kl->setText("ali");


    QLabel *lp = new QLabel("رضا:",this);
    //lp->setText("hk");
    lp->setGeometry(500,500,500,500);


    QPixmap bkgnd("C://Users//Abisys//Desktop//nnn//back.png");
    //bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palettee;
    palettee.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palettee);
    this->setFixedSize(bkgnd.rect().size());
    //QHBoxLayout *kfdf = new QHBoxLayout(this);

    QPixmap gg("C://Users//Abisys//Desktop//nnn//Gift//3x//strip2.png");
    lp->setPixmap(gg);

}

*/


/*
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QPushButton *btn1 = new QPushButton( "", this);
    //QHBoxLayout *m = new QHBoxLayout(this);
    //m->addWidget(btn1);
    btn1->setGeometry(50,50,50,50);
    QPushButton *btn2 = new QPushButton( "xx", this);
    btn2->setGeometry(50,50,50,50);
    btn2->setVisible(false);
    btn1->setMinimumSize(376, 103);


    QPixmap pixmap("C://Users//Abisys//Desktop//nnn//Gift//3x//strip2.png");
    QIcon ButtonIcon(pixmap);
    btn1->setIcon(ButtonIcon);
    btn1->setStyleSheet("QPushButton{background:transparent;}");
    //btn1->setAttribute(Qt::WA_TranslucentBackground);
    btn1->setIconSize(pixmap.rect().size());
    btn1->setFixedSize(pixmap.rect().size());


    QToolButton *kl = new QToolButton(this);
    kl->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    kl->setGeometry(250,250,250,250);
    //kl->setStyleSheet(QString("QToolButton {background-image : url(\"C://Users//Abisys//Desktop//nnn//Gift//3x//strip2.png\");}"));
    kl->setIconSize(pixmap.rect().size());
    kl->setFixedSize(pixmap.rect().size());
    kl->setStyleSheet("QPushButton{background:transparent;}");
    kl->setIcon(ButtonIcon);
    kl->setText("ali");


    QLabel *lp = new QLabel("رضا:",this);
    //lp->setText("hk");
    lp->setGeometry(500,500,500,500);


    QPalette pal = btn1->palette();
    pal.setColor(QPalette::Button, QColor(Qt::blue));
    btn1->setAutoFillBackground(true);
    btn1->setPalette(pal);
    btn1->update();*/


/*
    btn1->setAutoFillBackground(true);
    QPalette palette = btn1->palette();
    palette.setColor(QPalette::Window, QColor(Qt::black));
    btn1->setPalette(palette);
//    btn1->setStyleSheet("background-color: rgb(170, 170, 127);");
    btn1->setStyleSheet("background-color: #3cbaa2; solid black;");
    //setAttribute( Qt::WA_NoSystemBackground, true );
    //setAttribute( Qt::WA_OpaquePaintEvent, false );
*/

/*
    QPixmap bkgnd("C://Users//Abisys//Desktop//nnn//Gift//background.png");
    //bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palettee;
    palettee.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palettee);
    this->setFixedSize(bkgnd.rect().size());
*/

/*
    QMediaPlayer *m = new QMediaPlayer();
    m->setMedia(QUrl("qrc:/new/Simge - Biri Var.mp3"));
    m->play();
   */
/*
    QMediaPlaylist *playlist = new QMediaPlaylist();
    //playlist->addMedia(QUrl("qrc:/new/Simge - Biri Var.mp3"));
    playlist->addMedia(QUrl("C:/Users/Abisys/Downloads/Music/Chaartaar - Adineh.mp3"));
    playlist->setPlaybackMode(QMediaPlaylist::Loop);

    QMediaPlayer *m = new QMediaPlayer();
    m->setPlaylist(playlist);
    m->play();

*/
    /*
    QPalette palette1 = view->palette();
    palette.setBrush(QPalette::Base, Qt::transparent);
    view->page()->setPalette(palette);
    view->setAttribute(Qt::WA_OpaquePaintEvent, false);
    */
//}


