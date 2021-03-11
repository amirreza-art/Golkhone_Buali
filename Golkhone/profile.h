#ifndef PROFILE_H
#define PROFILE_H

#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMediaPlaylist>
#include <QMediaPlayer>
#include <person.h>
#include <store.h>


class Profile : public QWidget
{
    Q_OBJECT
public:
    explicit Profile(QWidget *parent = nullptr);
private:
    //Person *person;
    //Store *store;
    void setBackground();
    void setSoundPics();
    void setLoadAndSavPic();
    void WindowButtons();
    QPushButton *profile, *shop, *laboratory, *greenHouse;
    QGridLayout *gridLayout;
    QPushButton *soundOff;
    QPushButton *soundOn;
    QPushButton *save;
    QPushButton *load;
    QMediaPlaylist *playList;
    QMediaPlayer *music;
private slots:
    void OnSoundOff();
    void OnSoundOn();
    void OnLaboratory();
    void OnShop();
};

#endif // PROFILE_H
