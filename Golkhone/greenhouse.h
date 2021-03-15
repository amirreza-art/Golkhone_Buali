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
    QPushButton *lockBtn1, *lockBtn2, *lockBtn3, *lockBtn4, *lockBtn5, *lockBtn6, *lockBtn7, *lockBtn8;
    QPushButton *emptyBtn1, *emptyBtn2, *emptyBtn3, *emptyBtn4, *emptyBtn5, *emptyBtn6, *emptyBtn7, *emptyBtn8;
    QPushButton *orBtn1, *orBtn2, *orBtn3, *orBtn4, *orBtn5, *orBtn6, *orBtn7 , *orBtn8;
    QPushButton *rareBtn1, *rareBtn2, *rareBtn3, *rareBtn4, *rareBtn5, *rareBtn6, *rareBtn7 , *rareBtn8;
    QPushButton *ornamBtn1, *ornamBtn2, *ornamBtn3, *ornamBtn4, *ornamBtn5, *ornamBtn6, *ornamBtn7 , *ornamBtn8;
    QPushButton *orBudBtn1, *orBudBtn2, *orBudBtn3, *orBudBtn4, *orBudBtn5, *orBudBtn6, *orBudBtn7 , *orBudBtn8;
    QPushButton *rareBudBtn1, *rareBudBtn2, *rareBudBtn3, *rareBudBtn4, *rareBudBtn5, *rareBudBtn6, *rareBudBtn7 , *rareBudBtn8;
    QPushButton *ornamBudBtn1, *ornamBudBtn2, *ornamBudBtn3, *ornamBudBtn4, *ornamBudBtn5, *ornamBudBtn6, *ornamBudBtn7 , *ornamBudBtn8;
    QPushButton *dahliaP1, *dahliaP2, *dahliaP3, *dahliaP4, *dahliaP5, *dahliaP6, *dahliaP7, *dahliaP8;
    QPushButton *tulipP1, *tulipP2, *tulipP3, *tulipP4, *tulipP5, *tulipP6, *tulipP7, *tulipP8;
    QPushButton *amarP1, *amarP2, *amarP3, *amarP4, *amarP5, *amarP6, *amarP7, *amarP8;
    QPushButton *ornamFBudBtn1, *ornamFBudBtn2, *ornamFBudBtn3, *ornamFBudBtn4, *ornamFBudBtn5, *ornamFBudBtn6, *ornamFBudBtn7 , *ornamFBudBtn8;
    QPushButton *tubeP1, *tubeP2, *tubeP3, *tubeP4, *tubeP5, *tubeP6, *tubeP7, *tubeP8;
    QPushButton *hyacP1, *hyacP2, *hyacP3, *hyacP4, *hyacP5, *hyacP6, *hyacP7, *hyacP8;
    QPushButton *magnP1, *magnP2, *magnP3, *magnP4, *magnP5, *magnP6, *magnP7, *magnP8;
    QPushButton *liliP1, *liliP2, *liliP3, *liliP4, *liliP5, *liliP6, *liliP7, *liliP8;
    QPushButton *orchP1, *orchP2, *orchP3, *orchP4, *orchP5, *orchP6, *orchP7, *orchP8;
    void setOrnamFBudBtn();
    void setTubePBtn();
    void sethyacPBtn();
    void setmagPBtn();
    void setliliPBtn();
    void setorchPBtn();
    void setAmaryllisPBtn();
    void setDahliaPBtn();
    void setTulipPBtn();
    void setLockBtn();
    void setEmptyBtn();
    void setOrBtn();
    void setRareBtn();
    void setOrnamBtn();
    void setOrBudBtn();
    void setRareBudBtn();
    void setOrnamBudBtn();
private slots:
    void OnProfile();
    void OnShop();
    void OnLaboratory();
    void OnLockBtn1();
    void OnLockBtn2();
    void OnLockBtn3();
    void OnLockBtn4();
    void OnLockBtn5();
    void OnLockBtn6();
    void OnLockBtn7();
    void OnLockBtn8();
    void OnEmptyBtn1();
    void OnEmptyBtn2();
    void OnEmptyBtn3();
    void OnEmptyBtn4();
    void OnEmptyBtn5();
    void OnEmptyBtn6();
    void OnEmptyBtn7();
    void OnEmptyBtn8();
    void OnOrnamBtns();
    void OnOrBtns();
    void OnRareBtns();
    void OnOrBudBtns();
    void OnOrnamBudBtns();
    void OnRareBudBtns();
    void OnDahliaBtns();
    void OnTulipBtns();
    void OnTuberoseBtns();
    void OnMagnoliaBtns();
    void OnLiliumBtns();
    void OnOrchidBtns();
    void OnAmarBtns();
    void OnhyacBtns();
signals:

};

#endif // GREENHOUSE_H
