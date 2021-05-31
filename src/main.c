#include <stdio.h>
#include <mysql/mysql.h>
#include "db_config.h"
#include "function.h"
#include "menu.h"

int main() {
	MYSQL mysql;
	mysql_init(&mysql);
	MYSQL *conn = mysql_real_connect(&mysql, DB_HOST, DB_USER, DB_PWD, DB_NAME, 0, 0, 0);
	if(conn == NULL) {
		printf("Connect failed\n");
		return 1;
	}

	
	main_menu(&mysql);
	mysql_close(conn);
}
