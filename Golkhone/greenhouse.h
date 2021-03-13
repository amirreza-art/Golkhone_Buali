#ifndef GREENHOUSE_H
#define GREENHOUSE_H

#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMediaPlaylist>
#include <QMediaPlayer>

class GreenHouse : public QWidget
{
    Q_OBJECT
public:
    explicit GreenHouse(QWidget *parent = nullptr);
private:
    void setBackground();
    void createExtractButtons();
    void WindowButtons();
    void setInventory();
    void setLabels();
    void setEmptyPic();
    void setLockPic();
    void setDahliaPic();
    void setTulipPic();
    void setTuberosePic();
    void setAmaryllisPic();
    void setHyacinthPic();
    void setMagnoliaPic();
    void seLiliumPic();
    void setOrchidPic();
    void setOrdinaryPic();
    void setOrdinaryBudPic();
    void setOrnamentalPic();
    void setOrnamentalBudPic();
    void setOrnamentalFlowerBudPic();
    void setRarePic();
    void setRareBudPic();
    QLabel *ornamentalBud1, *ornamentalBud2, *ornamentalBud3, *ornamentalBud4, *ornamentalBud5, *ornamentalBud6, *ornamentalBud7, *ornamentalBud8;
    QLabel *ornamental1, *ornamental2, *ornamental3, *ornamental4, *ornamental5, *ornamental6, *ornamental7, *ornamental8;
    QLabel *ordinaryBud1, *ordinaryBud2, *ordinaryBud3, *ordinaryBud4, *ordinaryBud5, *ordinaryBud6, *ordinaryBud7, *ordinaryBud8;
    QLabel *ordinary1, *ordinary2, *ordinary3, *ordinary4, *ordinary5, *ordinary6, *ordinary7, *ordinary8;
    QLabel *hyacinth1, *hyacinth2, *hyacinth3, *hyacinth4, *hyacinth5, *hyacinth6, *hyacinth7, *hyacinth8;
    QLabel *dahlia1, *dahlia2, *dahlia3, *dahlia4, *dahlia5, *dahlia6, *dahlia7, *dahlia8;
    QLabel *lilium1, *lilium2, *lilium3, *lilium4, *lilium5, *lilium6, *lilium7, *lilium8;
    QLabel *magnolia1, *magnolia2, *magnolia3, *magnolia4, *magnolia5, *magnolia6, *magnolia7, *magnolia8;
    QLabel *tulip1, *tulip2, *tulip3, *tulip4, *tulip5, *tulip6, *tulip7, *tulip8;
    QLabel *amaryllis1, *amaryllis2, *amaryllis3, *amaryllis4, *amaryllis5, *amaryllis6, *amaryllis7, *amaryllis8;
    QLabel *tuberose1, *tuberose2, *tuberose3, *tuberose4, *tuberose5, *tuberose6, *tuberose7, *tuberose8;
    QLabel *orchid1, *orchid2, *orchid3, *orchid4, *orchid5, *orchid6, *orchid7, *orchid8;
    QLabel *rare1, *rare2, *rare3, *rare4, *rare5, *rare6, *rare7, *rare8;
    QLabel *ornamentalFlowerBud1, *ornamentalFlowerBud2, *ornamentalFlowerBud3, *ornamentalFlowerBud4, *ornamentalFlowerBud5, *ornamentalFlowerBud6, *ornamentalFlowerBud7, *ornamentalFlowerBud8;
    QLabel *rareBud1, *rareBud2, *rareBud3, *rareBud4, *rareBud5, *rareBud6, *rareBud7, *rareBud8;
    QLabel *empty1, *empty2, *empty3, *empty4, *empty5, *empty6, *empty7, *empty8;
    QLabel *lock1, *lock2, *lock3, *lock4, *lock5, *lock6, *lock7, *lock8;
    QLabel *waterLabel, *soilLabel, *sprayingMaterialLabel, *extractsLabel;
    QLabel *waterLabelIN, *soilLabelIN, *sprayingMaterialLabelIN, *extractsLabelIN;
    QPushButton *profile, *shop, *laboratory, *greenHouse;

private slots:
    void OnProfile();
    void OnShop();
    void OnLaboratory();
signals:

};

#endif // GREENHOUSE_H
