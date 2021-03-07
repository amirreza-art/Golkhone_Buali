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


class Profile : public QWidget
{
    Q_OBJECT
public:
    explicit Profile(QWidget *parent = nullptr);
private:
    void setBackground();
    void setSoundPics();
    void setLoadAndSavPic();
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
};

#endif // PROFILE_H
