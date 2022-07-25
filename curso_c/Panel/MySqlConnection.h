#ifndef MYSQLCONNECTION_H
#define MYSQLCONNECTION_H

#include <mysql/mysql.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

struct connectionDetails
{
    char *server;
    char *user;
    char *password;
    char *database;
};

MYSQL* mysqlConnectionSetup(struct connectionDetails mysqlDetails)
{
    MYSQL *connection = mysql_init(NULL);
    if(!mysql_real_connect(connection, mysqlDetails.server, mysqlDetails.user, mysqlDetails.password, mysqlDetails.database, 0, NULL, 0))
    {
        std::cout << "Error de conexión : %s " << mysql_error(connection) << std::endl;
    }

    return connection;
}

MYSQL_RES* mysqlPerformQuery(MYSQL *connection, char *sqlQuery)
{
    if(mysql_query(connection, sqlQuery))
    {
        std::cout << "MySql query error: %s" << mysql_error(connection) << std::endl;
    }

    return mysql_use_result(connection);
}

MYSQL* getConnectionResult()
{
    MYSQL *conn;

    struct connectionDetails mysqlD;
    mysqlD.server = "localhost";
    mysqlD.user   = "root";
    mysqlD.password = "Master117+";
    mysqlD.database = "dbz";

    conn = mysqlConnectionSetup(mysqlD);

    return conn;
}

#endif // MYSQLCONNECTION_H
