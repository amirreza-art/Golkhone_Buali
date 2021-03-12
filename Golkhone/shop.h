#ifndef SHOP_H
#define SHOP_H

#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMediaPlaylist>
#include <QMediaPlayer>

class Shop : public QWidget
{
    Q_OBJECT
public:
    explicit Shop(QWidget *parent = nullptr);
private:
    void setBackground();
    void WindowButtons();
    void setInventory();
    void setListBtn();
    QPushButton *liliumExtractBtn, *magnoilaExtractBtn, *orchidExtractBtn;
    QPushButton *ordinaryOnionBtn, *ornamentalOnionBtn, *rareOnionBtn;
    QPushButton *ordinaryOnionBtn1, *ornamentalOnionBtn1, *rareOnionBtn1;
    QPushButton *soilBtn, *waterBtn, *sprayingMaterialBtn, *tulipBtn;
    QPushButton *magnoliaBtn, *liliumBtn, *orchidBtn, *dahliaBtn;
    QPushButton *amarylilisBtn, *hyacinthBtn, *tuberoseBtn;
    QLabel *waterLabel, *soilLabel, *sprayingMaterialLabel, *extractsLabel;
    QLabel *waterLabelIN, *soilLabelIN, *sprayingMaterialLabelIN, *extractsLabelIN;
    QPushButton *profile, *shop, *laboratory, *greenHouse;
private slots:
    void OnProfile();
    void OnLaboratory();
    void OnTuberoseBtn();
    void OnHyacinthBtn();
    void OnAmarylilisBtn();
    void OnDahliaBtn();
    void OnOrchidBtn();
    void OnLiliumBtn();
    void OnMagnoliaBtn();
    void OnTulipBtn();
    void OnSprayingMaterialBtn();
    void OnWaterBtn();
    void OnSoilBtn();
    void OnRareOnionBtn1();
    void OnOrnamentalOnionBtn1();
    void OnOrdinaryOnionBtn1();
    void OnRareOnionBtn();
    void OnOrnamentalOnionBtn();
    void OnOrdinaryOnionBtn();
signals:

};

#endif // SHOP_H
