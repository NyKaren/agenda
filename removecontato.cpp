#include "removecontato.h"
#include "ui_removecontato.h"

RemoveContato::RemoveContato(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RemoveContato)
{
    ui->setupUi(this);
    databaseInst = new Database();
}

RemoveContato::~RemoveContato()
{
    delete ui;
}

void RemoveContato::remove_contato()
{
    if (databaseInst->connect_database())
    {
//        databaseInst->insert_person(ui->nome_lineEdit->text(),
//                                    ui->telefone_lineEdit->text(),
//                                    ui->endereco_lineEdit->text());
    }

    else
    {
        std::cout << "Erro" << std::endl;
    }
}
