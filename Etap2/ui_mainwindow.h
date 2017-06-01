/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLCDNumber *lcdNumber_4;
    QLCDNumber *lcdNumber_3;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *tab_2;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QProgressBar *progressBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(560, 361);
        QPalette palette;
        MainWindow->setPalette(palette);
        MainWindow->setStyleSheet(QLatin1String("#centralWidget{\n"
"background-color: #333333;\n"
"}\n"
"\n"
"QTabWidget{\n"
"	background-color: #333333;\n"
"}\n"
"\n"
"QTabWidget::pane { \n"
"    border-top: 2px solid #1f1f1f;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    background: #1f1f1f;\n"
"    border: 1px solid #1f1f1f;\n"
"    border-bottom-color: #1f1f1f;\n"
"	padding: 8px;\n"
"	color: #59abe3;\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"	background-color: #333333;\n"
"    margin-top: 2px; \n"
"}\n"
"\n"
"#tab{\n"
"background-color: #1f1f1f;\n"
"}\n"
"\n"
"#tab_2{\n"
"background-color: #1f1f1f;\n"
"}\n"
"\n"
"QProgressBar {\n"
"background-color: #333333;\n"
"border-color: #1f1f1f;\n"
"border-style: solid;\n"
"text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk{\n"
"background-color: #59abe3;\n"
"}\n"
"\n"
"QPushButton {\n"
"color: #59abe3;\n"
"/*background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #333333,\n"
"stop: 0.1 #333333, stop: 0.49 #292929, stop: 0.5 #292929, stop: 1 #1f1f1f);*/\n"
"background-color: #1f1f1f;\n"
"border-width:"
                        " 1px;\n"
"border-color: #1f1f1f;\n"
"border-style: solid;\n"
"padding: 3px;\n"
"font-size: 18px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"background-color: #333333;\n"
"}\n"
"\n"
"QLabel{\n"
"color: #59abe3;\n"
"}\n"
"\n"
"QLCDNumber {\n"
"background-color: #333333;\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, -1, -1, -1);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        QFont font;
        font.setFamily(QStringLiteral("MS Sans Serif"));
        font.setPointSize(14);
        tabWidget->setFont(font);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QStringLiteral(""));
        tabWidget->setElideMode(Qt::ElideNone);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        QFont font1;
        font1.setPointSize(14);
        tab->setFont(font1);
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        QFont font2;
        font2.setFamily(QStringLiteral("MS Sans Serif"));
        font2.setPointSize(18);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        font2.setStrikeOut(false);
        font2.setKerning(true);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        lcdNumber_4 = new QLCDNumber(tab);
        lcdNumber_4->setObjectName(QStringLiteral("lcdNumber_4"));
        QPalette palette1;
        QBrush brush(QColor(89, 171, 227, 255));
        brush.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(51, 51, 51, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush2(QColor(164, 166, 168, 96));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        lcdNumber_4->setPalette(palette1);
        QFont font3;
        font3.setItalic(false);
        lcdNumber_4->setFont(font3);
        lcdNumber_4->setFrameShape(QFrame::Box);
        lcdNumber_4->setFrameShadow(QFrame::Plain);
        lcdNumber_4->setLineWidth(1);
        lcdNumber_4->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_3->addWidget(lcdNumber_4, 3, 1, 1, 1);

        lcdNumber_3 = new QLCDNumber(tab);
        lcdNumber_3->setObjectName(QStringLiteral("lcdNumber_3"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        lcdNumber_3->setPalette(palette2);
        lcdNumber_3->setFrameShadow(QFrame::Plain);
        lcdNumber_3->setSmallDecimalPoint(false);
        lcdNumber_3->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_3->addWidget(lcdNumber_3, 3, 0, 1, 1);

        lcdNumber_2 = new QLCDNumber(tab);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        lcdNumber_2->setPalette(palette3);
        lcdNumber_2->setFrameShadow(QFrame::Plain);
        lcdNumber_2->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_3->addWidget(lcdNumber_2, 1, 1, 1, 1);

        lcdNumber_1 = new QLCDNumber(tab);
        lcdNumber_1->setObjectName(QStringLiteral("lcdNumber_1"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        lcdNumber_1->setPalette(palette4);
        lcdNumber_1->setFrameShape(QFrame::Box);
        lcdNumber_1->setFrameShadow(QFrame::Plain);
        lcdNumber_1->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_3->addWidget(lcdNumber_1, 1, 0, 1, 1);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font4;
        font4.setFamily(QStringLiteral("MS Sans Serif"));
        font4.setPointSize(18);
        label_2->setFont(font4);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_2, 0, 1, 1, 1);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font4);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font4);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_4, 2, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_6 = new QGridLayout(tab_2);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        gridLayout_6->addLayout(verticalLayout, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font5;
        pushButton->setFont(font5);
        pushButton->setAutoDefault(false);
        pushButton->setFlat(false);

        gridLayout_5->addWidget(pushButton, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font5);

        gridLayout_5->addWidget(pushButton_2, 0, 2, 1, 1);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setEnabled(true);
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        progressBar->setPalette(palette5);
        progressBar->setValue(50);
        progressBar->setTextVisible(false);
        progressBar->setInvertedAppearance(false);

        gridLayout_5->addWidget(progressBar, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_5, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);
        pushButton->setDefault(false);
        pushButton_2->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Temperatura 1", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Temperatura 2", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Temperatura 3", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Temperatura 4", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Temperatury", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Wykresy", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushButton->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        pushButton->setText(QApplication::translate("MainWindow", "Generuj", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButton_2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushButton_2->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        pushButton_2->setText(QApplication::translate("MainWindow", "Wyjd\305\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
