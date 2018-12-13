#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "adicionacontato.h"
#include "database.h"

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
    void buscar();

private:
    Ui::MainWindow *ui;
    AdicionaContato *addInst;
    Database *dataInst;
};

#endif // MAINWINDOW_H
