#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QScreen>
#include <QRect>
#include <QTimer>
#include <QTime>
#include "sensorsimulator.h"
#include "qcustomplot.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void newSecond();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;

    SensorSimulator sensor;

    int time;

    QDateTime qtime;
    QTimer *timer;
    QScreen *screen;
    QRect screenGeometry;
    QString xAxisValue[10];

    void drawLinesOnGraph();
};

#endif // MAINWINDOW_H
