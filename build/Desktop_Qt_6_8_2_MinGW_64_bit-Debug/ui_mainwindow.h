/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QPushButton *rom;
    QPushButton *squ;
    QPushButton *tri;
    QPushButton *col;
    QPushButton *sav;
    QPushButton *loa;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QFont font;
        font.setPointSize(15);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(-10, 0, 761, 471));
        graphicsView->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border: 2px solid #6d6d6d; \n"
"    border-radius: 5px;"));
        rom = new QPushButton(centralwidget);
        rom->setObjectName("rom");
        rom->setGeometry(QRect(0, 90, 121, 71));
        rom->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font: 15pt \"Terminal\";\n"
"    color: rgb(80, 50, 20);\n"
"    background-color: rgb(255, 200, 150);\n"
"    border: 2px solid #c96f1a;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    transition: background-color 0.2s, transform 0.1s;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(255, 220, 180);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(230, 180, 120);\n"
"    transform: scale(1.05);\n"
"}"));
        squ = new QPushButton(centralwidget);
        squ->setObjectName("squ");
        squ->setGeometry(QRect(0, 180, 121, 71));
        squ->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font: 15pt \"Terminal\";\n"
"    color: rgb(80, 50, 20);\n"
"    background-color: rgb(255, 200, 150);\n"
"    border: 2px solid #c96f1a;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    transition: background-color 0.2s, transform 0.1s;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(255, 220, 180);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(230, 180, 120);\n"
"    transform: scale(1.05);\n"
"}"));
        tri = new QPushButton(centralwidget);
        tri->setObjectName("tri");
        tri->setGeometry(QRect(0, 270, 121, 71));
        tri->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font: 15pt \"Terminal\";\n"
"    color: rgb(80, 50, 20);\n"
"    background-color: rgb(255, 200, 150);\n"
"    border: 2px solid #c96f1a;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    transition: background-color 0.2s, transform 0.1s;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(255, 220, 180);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(230, 180, 120);\n"
"    transform: scale(1.05);\n"
"}"));
        col = new QPushButton(centralwidget);
        col->setObjectName("col");
        col->setGeometry(QRect(630, 90, 121, 71));
        col->setAutoFillBackground(false);
        col->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font: 15pt \"Terminal\";\n"
"    color: rgb(80, 50, 20);\n"
"    background-color: rgb(255, 200, 150);\n"
"    border: 2px solid #c96f1a;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    transition: background-color 0.2s, transform 0.1s;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(255, 220, 180);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(230, 180, 120);\n"
"    transform: scale(1.05);\n"
"}"));
        sav = new QPushButton(centralwidget);
        sav->setObjectName("sav");
        sav->setGeometry(QRect(630, 180, 121, 71));
        sav->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font: 15pt \"Terminal\";\n"
"    color: rgb(80, 50, 20);\n"
"    background-color: rgb(255, 200, 150);\n"
"    border: 2px solid #c96f1a;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    transition: background-color 0.2s, transform 0.1s;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(255, 220, 180);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(230, 180, 120);\n"
"    transform: scale(1.05);\n"
"}"));
        loa = new QPushButton(centralwidget);
        loa->setObjectName("loa");
        loa->setGeometry(QRect(630, 270, 121, 71));
        loa->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font: 15pt \"Terminal\";\n"
"    color: rgb(80, 50, 20);\n"
"    background-color: rgb(255, 200, 150);\n"
"    border: 2px solid #c96f1a;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    transition: background-color 0.2s, transform 0.1s;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(255, 220, 180);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(230, 180, 120);\n"
"    transform: scale(1.05);\n"
"}\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 161, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Terminal")});
        font1.setPointSize(15);
        font1.setBold(false);
        font1.setItalic(false);
        label->setFont(font1);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font: 15pt \"Terminal\";\n"
"    color: rgb(30, 30, 60);\n"
"    background-color: rgb(180, 200, 230);\n"
"    border: 2px solid #4a6b9d;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"    background-color: rgb(200, 220, 250);\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(600, 0, 151, 41));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font: 15pt \"Terminal\";\n"
"    color: rgb(30, 30, 60);\n"
"    background-color: rgb(180, 200, 230);\n"
"    border: 2px solid #4a6b9d;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"    background-color: rgb(200, 220, 250);\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        rom->setText(QCoreApplication::translate("MainWindow", "romb", nullptr));
        squ->setText(QCoreApplication::translate("MainWindow", "square", nullptr));
        tri->setText(QCoreApplication::translate("MainWindow", "triangle", nullptr));
        col->setText(QCoreApplication::translate("MainWindow", "set color", nullptr));
        sav->setText(QCoreApplication::translate("MainWindow", "save", nullptr));
        loa->setText(QCoreApplication::translate("MainWindow", "load", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Type of figure", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Control panel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
