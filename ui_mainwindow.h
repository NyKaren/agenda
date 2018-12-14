/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdicionar;
    QAction *actionRemover;
    QAction *actionEditar;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QPushButton *buscar_pushButton;
    QMenuBar *menuBar;
    QMenu *menuAgenda;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(438, 349);
        actionAdicionar = new QAction(MainWindow);
        actionAdicionar->setObjectName(QStringLiteral("actionAdicionar"));
        actionRemover = new QAction(MainWindow);
        actionRemover->setObjectName(QStringLiteral("actionRemover"));
        actionEditar = new QAction(MainWindow);
        actionEditar->setObjectName(QStringLiteral("actionEditar"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        buscar_pushButton = new QPushButton(centralWidget);
        buscar_pushButton->setObjectName(QStringLiteral("buscar_pushButton"));

        gridLayout->addWidget(buscar_pushButton, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 438, 22));
        menuAgenda = new QMenu(menuBar);
        menuAgenda->setObjectName(QStringLiteral("menuAgenda"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuAgenda->menuAction());
        menuAgenda->addAction(actionAdicionar);
        menuAgenda->addAction(actionRemover);
        menuAgenda->addAction(actionEditar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAdicionar->setText(QApplication::translate("MainWindow", "Adicionar", nullptr));
        actionRemover->setText(QApplication::translate("MainWindow", "Remover", nullptr));
        actionEditar->setText(QApplication::translate("MainWindow", "Editar", nullptr));
        buscar_pushButton->setText(QApplication::translate("MainWindow", "Buscar ", nullptr));
        menuAgenda->setTitle(QApplication::translate("MainWindow", "Agenda", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
