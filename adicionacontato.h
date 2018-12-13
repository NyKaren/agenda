#ifndef ADICIONACONTATO_H
#define ADICIONACONTATO_H

#include <QDialog>
#include "database.h"

namespace Ui {
class AdicionaContato;
}

class AdicionaContato : public QDialog
{
    Q_OBJECT

public:
    explicit AdicionaContato(QWidget *parent = 0);
    ~AdicionaContato();

public slots:
    void adiciona_contato ();

private:
    Ui::AdicionaContato *ui;
    Database *databaseInst;
};

#endif // ADICIONACONTATO_H
