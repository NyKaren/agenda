#include "database.h"

Database::Database(QObject *parent) : QObject(parent)
{
}

bool Database::connect_database()
{
    dbConnection = QSqlDatabase::addDatabase("QSQLITE");
    dbConnection.setDatabaseName("AgendaDB.db");

    if (!dbConnection.open()) {
        std::cout << "Error" << std::endl;
        qDebug() << dbConnection.lastError();
        return false;
    }

    else
    {
        std::cout << "Ok" << std::endl;
        return true;
    }
}

bool Database::insert_person(QString nome, QString telefone, QString endereco)
{
    QSqlQuery query (dbConnection);
    query.prepare ("INSERT INTO Pessoa (nome, telefone, endereco) VALUES (:nome, :telefone, :endereco)");

    query.bindValue(":nome", nome);
    query.bindValue(":telefone", telefone);
    query.bindValue(":endereco", endereco);

    if (query.exec())
    {
        return true;
    }

    else
    {
        qDebug() << "Falhou: " << query.lastError();
        return false;
    }
}

QVector<QString> Database::select_person()
{
    QVector<QString> strResult;
    QSqlQuery query (dbConnection);
    query.prepare ("SELECT * FROM Pessoa");

    if (query.exec())
    {
        query.first();
        while (query.next()) {
            std::cout << query.value(1).toString().toStdString() << std::endl;
            strResult.push_back(query.value(1).toString());
        }

        return strResult;
    }

    else
    {
        return strResult;
    }

}






















