#include "adicionacontato.h"
#include "ui_adicionacontato.h"

AdicionaContato::AdicionaContato(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdicionaContato)
{
    ui->setupUi(this);
    databaseInst = new Database();

    connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(adiciona_contato()));
}

AdicionaContato::~AdicionaContato()
{
    delete ui;
}

void AdicionaContato::adiciona_contato()
{
    if (databaseInst->connect_database())
    {
        databaseInst->insert_person(ui->nome_lineEdit->text(),
                                    ui->telefone_lineEdit->text(),
                                    ui->endereco_lineEdit->text());
    }

    else
    {
        std::cout << "Erro" << std::endl;
    }
}
