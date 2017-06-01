#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QChart *chart = new QChart();
    QChartView *chartView = new QChartView(chart);
    QLineSeries *series1 = new QLineSeries();
    QLineSeries *series2 = new QLineSeries();
    QLineSeries *series3 = new QLineSeries();
    QLineSeries *series4 = new QLineSeries();
    QValueAxis *xAxis = new QValueAxis();
    QValueAxis *yAxis = new QValueAxis();

    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int width = screenGeometry.width();
    int heigth = screenGeometry.height();

//    QMainWindow::showFullScreen();

    sensor.generate_temp(sensor.get_temp1(), sensor.get_temp2(), sensor.get_temp3(), sensor.get_temp4(), 10);

    ui->gridLayout_3->setHorizontalSpacing(50);
    ui->gridLayout_3->setVerticalSpacing(20);
    ui->gridLayout_3->setRowStretch(1, 20);
    ui->gridLayout_3->setRowStretch(3, 20);

    ui->gridLayout_5->setColumnStretch(0, width * 0.25);
    ui->gridLayout_5->setColumnStretch(1, width * 0.50);
    ui->gridLayout_5->setColumnStretch(2, width * 0.25);

    ui->pushButton->setFixedHeight(heigth * 0.07);
    ui->pushButton_2->setFixedHeight(ui->pushButton->height());

    ui->progressBar->setFixedHeight(ui->pushButton->height());

    ui->lcdNumber_1->display(sensor.get_temp1());
    ui->lcdNumber_2->display(sensor.get_temp2());
    ui->lcdNumber_3->display(sensor.get_temp3());
    ui->lcdNumber_4->display(sensor.get_temp4());

    ui->verticalLayout->addWidget(chartView);

    series1->append(QPoint(0, 0));
    series1->append(QPoint(7, 30));

    series2->append(QPoint(0, 0));
    series2->append(QPoint(7, 10));

    series3->append(QPoint(0, 2));
    series3->append(QPoint(7, 25));

    series4->append(QPoint(0, 1));
    series4->append(QPoint(7, 16));

    xAxis->setRange(0, 7);
    yAxis->setRange(-5, 30);

    chart->setAxisX(xAxis);
    chart->setAxisY(yAxis);

    chart->addSeries(series1);
    chart->addSeries(series2);
    chart->addSeries(series3);
    chart->addSeries(series4);

    series1->setName("Temperatura 1");
    series2->setName("Temperatura 2");
    series3->setName("Temperatura 3");
    series4->setName("Temperatura 4");

//    chart->createDefaultAxes();
//    chart->setStyle(ChartThemeBlueCerulean);
    chartView->setRenderHint(QPainter::Antialiasing);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    sensor.generate_temp(sensor.get_temp1(), sensor.get_temp2(), sensor.get_temp3(), sensor.get_temp4(), 1);

    ui->lcdNumber_1->display(sensor.get_temp1());
    ui->lcdNumber_2->display(sensor.get_temp2());
    ui->lcdNumber_3->display(sensor.get_temp3());
    ui->lcdNumber_4->display(sensor.get_temp4());
}

void MainWindow::on_pushButton_2_clicked()
{
    QCoreApplication::quit();
}
