#ifndef PROFILE_H
#define PROFILE_H

#include <QWidget>
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
    //virtual ~Profile();
private:
    void setInventory();
    void setBackground();
    void setSoundPics();
    void setLoadAndSavPic();
    void WindowButtons();
    void setLabels();
    QLabel *totalOrdinary, *totalOrnamental, *totalRare;
    QLabel *totalExtract, *totalDeleted, *totalCreated;
    QLabel *totalOrdinary1, *totalOrnamental1, *totalRare1;
    QLabel *totalExtract1, *totalDeleted1, *totalCreated1;
    QLabel *waterLabel, *soilLabel, *sprayingMaterialLabel, *extractsLabel;
    QLabel *waterLabelIN, *soilLabelIN, *sprayingMaterialLabelIN, *extractsLabelIN;
    QLabel *saveLable, *loadLabel;
    QPushButton *profile, *shop, *laboratory, *greenHouse;
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
    void OnGreenHouse();
};

#endif // PROFILE_H
