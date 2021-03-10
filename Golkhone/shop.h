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
    QPushButton *profile, *shop, *laboratory, *greenHouse;
    QPushButton *liliumExtractBtn;
    QPushButton *magnoilaExtractBtn;
    QPushButton *orchidExtractBtn;
private slots:
    void OnProfile();
    void OnLaboratory();
signals:

};

#endif // SHOP_H
