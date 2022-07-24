#include <iostream>
#include "MysqlConn.h"

int main()
{
    MYSQL_RES *res;
    MYSQL_ROW row;

    res = mysql_perform_query(getConnectionResult(), "select * from usuarios");

    std::cout << "Tablas en la base de datos:\n" << std::endl;
    std::cout << "ID" << "  +  " << "Usuario" << std::endl;
    while ((row = mysql_fetch_row(res)) != NULL)
    {
        std::cout << "\n" << row[0] << "  +  " << row[1] << std::endl;
    }
    
    mysql_free_result(res);
    mysql_close(getConnectionResult());

    return 0;
}