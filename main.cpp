#include <iostream>

#include <mysql_connection.h>
#include <mysql_driver.h>
#include <mysql_error.h>

#include <cppconn/resultset.h>
#include <cppconn/statement.h>

int main(int argc, char *argv[]) {
    sql::ConnectOptionsMap options;
    auto* driver = get_driver_instance();

    std::cout << "Hello, world" << std::endl;
}
