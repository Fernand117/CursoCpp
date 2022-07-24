#include <mysql.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

struct connection_details
{
    char *server;
    char *user;
    char *password;
    char *database;
};

MYSQL* mysql_connection_setup(struct connection_details mysql_details)
{
    MYSQL *connection = mysql_init(NULL);

    if(!mysql_real_connect(connection, mysql_details.server, mysql_details.user, mysql_details.password, mysql_details.database, 0, NULL, 0))
    {
        std::cout << "Erro de conexión : %s\n" << mysql_error(connection) << std::endl;
    }

    return connection;
}

MYSQL_RES* mysql_perform_query(MYSQL *connection, char *sql_query)
{
    if(mysql_query(connection, sql_query))
    {
        std::cout << "MySql query error : %s\n" << mysql_error(connection) << std::endl;
    }

    return mysql_use_result(connection);
}

MYSQL* getConnectionResult()
{
    MYSQL *conn;
    MYSQL_RES *res;
    MYSQL_ROW row;

    struct connection_details mysqlD;
    mysqlD.server   = "localhost";
    mysqlD.user     = "root";
    mysqlD.password = "Master117+";
    mysqlD.database = "dbz";

    conn = mysql_connection_setup(mysqlD);

    return conn;
}