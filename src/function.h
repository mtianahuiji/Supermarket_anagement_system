#include <stdio.h>
#include <mysql/mysql.h>


int create_database(MYSQL* conn);
int create_table_ItemInfo(MYSQL* conn);
int create_table_LoginInfo(MYSQL* conn);
int create_table_BasicInfo(MYSQL* conn);

int show_tables(MYSQL* conn);
//item_info ctl
int add_item(MYSQL* conn, char id[], char name[], int price, int inventory);
int delete_item(MYSQL* conn, char id[], char name[]);
int show_item(MYSQL* conn, MYSQL_RES* res);
int show_item_id(MYSQL* conn, MYSQL_RES* res, char id[]);

//login_info ctl
int add_login(MYSQL* conn, char id[], char name[], char pwd[]);
int delete_login(MYSQL* conn, char id[], char name[]);
int show_login(MYSQL* conn, MYSQL_RES* res);
int show_login_id(MYSQL* conn, MYSQL_RES* res, char id[]);

//basic_info ctl
int add_basic(MYSQL* conn, char id[], char name[], char sex[], char age[], char tel_number[]);
int delete_basic(MYSQL* conn, char id[], char name[]);
int show_basic(MYSQL* conn, MYSQL_RES* res);
int show_basic_id(MYSQL* conn, MYSQL_RES* res, char id[]);


























