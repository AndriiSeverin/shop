/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QComboBox *comboBox;
    QLineEdit *TLogin;
    QLineEdit *TPassword;
    QLabel *LLogin;
    QLabel *LPassword;
    QPushButton *pushButton;
    QPushButton *Exit;
    QPushButton *Enter;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(457, 348);
        MainWindow->setAnimated(true);
        MainWindow->setDocumentMode(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(40, 40, 111, 21));
        TLogin = new QLineEdit(centralWidget);
        TLogin->setObjectName(QStringLiteral("TLogin"));
        TLogin->setGeometry(QRect(150, 100, 141, 21));
        TPassword = new QLineEdit(centralWidget);
        TPassword->setObjectName(QStringLiteral("TPassword"));
        TPassword->setGeometry(QRect(152, 140, 141, 21));
        LLogin = new QLabel(centralWidget);
        LLogin->setObjectName(QStringLiteral("LLogin"));
        LLogin->setGeometry(QRect(70, 100, 61, 21));
        LPassword = new QLabel(centralWidget);
        LPassword->setObjectName(QStringLiteral("LPassword"));
        LPassword->setGeometry(QRect(70, 140, 61, 21));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 170, 111, 21));
        QFont font;
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        pushButton->setFont(font);
        pushButton->setAutoDefault(false);
        pushButton->setDefault(false);
        pushButton->setFlat(true);
        Exit = new QPushButton(centralWidget);
        Exit->setObjectName(QStringLiteral("Exit"));
        Exit->setGeometry(QRect(240, 240, 75, 23));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        Exit->setFont(font1);
        Enter = new QPushButton(centralWidget);
        Enter->setObjectName(QStringLiteral("Enter"));
        Enter->setGeometry(QRect(140, 240, 75, 23));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        Enter->setFont(font2);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 457, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\320\237\320\276\320\272\321\203\320\277\320\265\321\206\321\214", 0)
         << QApplication::translate("MainWindow", "\320\220\320\264\320\274\321\226\320\275\321\226\321\201\321\202\321\200\320\260\321\202\320\276\321\200", 0)
        );
        LLogin->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\320\233\320\276\320\263\321\226\320\275</span></p></body></html>", 0));
        LPassword->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\320\237\320\260\321\200\320\276\320\273\321\214</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\320\227\320\260\321\200\320\265\321\224\321\201\321\202\321\200\321\203\320\262\320\260\321\202\320\270\321\201\321\217", 0));
        Exit->setText(QApplication::translate("MainWindow", "\320\222\320\270\321\205\321\226\320\264", 0));
        Enter->setText(QApplication::translate("MainWindow", "\320\243\320\262\321\226\320\271\321\202\320\270", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
