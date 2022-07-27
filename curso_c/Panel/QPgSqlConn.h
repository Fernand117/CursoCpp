#ifndef QPGSQLCONN_H
#define QPGSQLCONN_H

#include <QtSql/QSqlDatabase>

QSqlDatabase getConnectionQSql()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName("localhost");
    db.setPort(5432);
    db.setDatabaseName("dbz");
    db.setUserName("postgres");
    db.setPassword("Master117+");
    db.open();
    return db;
}

#endif // QPGSQLCONN_H
