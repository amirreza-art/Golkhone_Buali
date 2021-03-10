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
    QPushButton *profile, *shop, *laboratory, *greenHouse;
    QPushButton *liliumExtractBtn;
    QPushButton *magnoilaExtractBtn;
    QPushButton *orchidExtractBtn;
private slots:
    void OnProfile();
    void OnShop();
signals:

};

#endif // LABORATORY_H
