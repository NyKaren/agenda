#ifndef REMOVECONTATO_H
#define REMOVECONTATO_H

#include <QDialog>
#include "database.h"

namespace Ui {
class RemoveContato;
}

class RemoveContato : public QDialog
{
    Q_OBJECT

public:
    explicit RemoveContato(QWidget *parent = nullptr);
    ~RemoveContato();

public slots:
    void remove_contato ();

private:
    Ui::RemoveContato *ui;
    Database *databaseInst;
};

#endif // REMOVECONTATO_H
