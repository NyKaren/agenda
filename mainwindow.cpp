#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dataInst = new Database();
    dataInst->connect_database();

    addInst = new AdicionaContato();
    delInst = new RemoveContato();
    connect(ui->actionAdicionar, SIGNAL(triggered()), addInst, SLOT(show()));
    connect(ui->actionRemover, SIGNAL(triggered()), delInst, SLOT(show()));
    connect(ui->buscar_pushButton, SIGNAL(clicked()), dataInst, SLOT(select_person()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::buscar()
{
    dataInst->select_person();
}

