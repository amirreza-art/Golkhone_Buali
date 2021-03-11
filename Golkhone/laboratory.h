#ifndef LABORATORY_H
#define LABORATORY_H
#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMediaPlaylist>
#include <QMediaPlayer>

class Laboratory : public QWidget
{
    Q_OBJECT
public:
    explicit Laboratory(QWidget *parent = nullptr);
private:
    void setBackground();
    void createExtractButtons();
    void WindowButtons();
    void setInventory();
    void setLabels();
    QLabel *magnoliaExtracLabel, *liliumExtracLabel, *orchidExtractLabel;
    QLabel *waterLabel1, *dahliaLabel, *tulipLabel;
    QLabel *waterLabel2, *amarylilisLabel, *tuberoseLabel;
    QLabel *waterLabel3, *hyacinthLabel, *moneyLabel;
    QLabel *waterLabel, *soilLabel, *sprayingMaterialLabel, *extractsLabel;
    QLabel *waterLabelIN, *soilLabelIN, *sprayingMaterialLabelIN, *extractsLabelIN;
    QPushButton *profile, *shop, *laboratory, *greenHouse;
    QPushButton *liliumExtractBtn;
    QPushButton *magnoilaExtractBtn;
    QPushButton *orchidExtractBtn;
private slots:
    void OnProfile();
    void OnShop();
    void OnLiliumExtractBtn();
    void OnMagnoilaExtractBtn();
    void OnOrchidExtractBtn();
signals:

};

#endif // LABORATORY_H
