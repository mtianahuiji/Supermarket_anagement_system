#include"menu.h"
#include"function.h"

void main_menu(MYSQL *conn) {	
	int type;
	while(1) {
		printf("\t\t|-------------------------------|\n");
		printf("\t\t| Enter choic\t\t\t|\n");
		printf("\t\t| 1. ItemInfoCtl_menu\t\t|\n");
		printf("\t\t| 2. LoginInfoCtl_menu\t\t|\n");
		printf("\t\t| 3. userBasicInfoCtl_menu\t|\n");
		printf("\t\t| 0. exit Marker_Management_Sys |\n");
		printf("\t\t|-------------------------------|\n");

		scanf("%d", &type);
		switch(type) {
			case 1:
				ItemInfoCtl_menu(conn);
				break;
			case 2:
				LoginInfoCtl_menu(conn);
				break;
			case 3:
				BasicInfo_menu(conn);
				break;
			case 0:
				exit(0);
			default:
				printf("Invalid Command\n");
		}

	}
}

void ItemInfoCtl_menu(MYSQL *conn) {
	MYSQL_RES *res;
	int type, price, inventory;
	char id[10], name[10];
	while(1) {
		printf("\t\t|-------------------------------|\n");
		printf("\t\t| Enter choic\t\t\t|\n");
		printf("\t\t| 1. add item\t\t\t|\n");
		printf("\t\t| 2. delete item\t\t|\n");
		printf("\t\t| 3. show item\t\t\t|\n");
		printf("\t\t| 4. show item by ID\t\t|\n");;
		printf("\t\t| 0. return to main_menu\t|\n");
		printf("\t\t|-------------------------------|\n");
		scanf("%d", &type);
		switch(type) {
			case 1:
				printf("Enter id(char), name(char), price(int), inventory(int)\n");
				scanf("%s %s %d %d", id, name, &price, &inventory);
				if(add_item(conn, id, name, price, inventory)) {
					printf("add item failed\n");
				}
				break;
			case 2:
				printf("Enter id(char), name(char)\n");
				scanf("%s %s", id, name);
				if(delete_item(conn, id, name)) {
					printf("delete item failed\n");
				}
				break;
			case 3:
				if(show_item(conn , res)) {
					printf("show item failed\n");
				}
				break;
			case 4:
				scanf("%s", id);
				if(show_item_id(conn, res, id)) {
					printf("show item by ID failed\n");
				}
				break;
			case 0:
				return;
			default:
				printf("Invalid Command\n");
		}
	}
}

void LoginInfoCtl_menu(MYSQL *conn) {
	MYSQL_RES *res;
	int type;
	char id[10], name[10], pwd[10];
	while(1) {
		printf("\t\t|-------------------------------|\n");
		printf("\t\t| Enter choic\t\t\t|\n");
		printf("\t\t| 1. add LoginAccountInfo\t|\n");
		printf("\t\t| 2. delete LoginAccountInfo\t|\n");
		printf("\t\t| 3. show LoginAccount\t\t|\n");
		printf("\t\t| 4. show LoginAccount by ID\t|\n");;
		printf("\t\t| 0. return to main_menu\t|\n");
		printf("\t\t|-------------------------------|\n");
		scanf("%d", &type);
		switch(type) {
			case 1:
				printf("Enter id(char), name(char), pwd(char)\n");
				scanf("%s %s %s", id, name, pwd);
				if(add_login(conn, id, name, pwd)) {
					printf("add login failed\n");
				}
				break;
			case 2:
				printf("Enter id(char), name(char)\n");
				scanf("%s %s", id, name);
				if(delete_login(conn, id, name)) {
					printf("delete login failed\n");
				}
				break;
			case 3:
				if(show_login(conn, res)) {
					printf("show login failed\n");
				}
				break;
			case 4:
				scanf("%s", id);
				if(show_login_id(conn, res, id)) {
					printf("show login by ID failed\n");
				}
				break;
			case 0:
				return;
			default:
				printf("Invalid Command\n");
		}
	}
}

void BasicInfo_menu(MYSQL *conn) {
	MYSQL_RES *res;
	int type;
	char id[10], name[10], pwd[10], sex[5], age[3], tel_number[11];
	while(1) {
		printf("\t\t|-------------------------------|\n");
		printf("\t\t| Enter choic\t\t\t|\n");
		printf("\t\t| 1. add userBasicInfo\t\t|\n");
		printf("\t\t| 2. delete userBasicInfo\t|\n");
		printf("\t\t| 3. show userBasicInfo\t\t|\n");
		printf("\t\t| 4. show userBasicInfo by ID\t|\n");;
		printf("\t\t| 0. return to main_menu\t|\n");
		printf("\t\t|-------------------------------|\n");
		scanf("%d", &type);
		switch(type) {
			case 1:
				printf("Enter id, name, sex, age, tel_number\n");
				scanf("%s %s %s %s %s", id, name, sex, age, tel_number);
				if(add_basic(conn, id, name, sex, age, tel_number)) {
					printf("add basic failed\n");
				}
				break;
			case 2:
				printf("Enter id(char), name(char)\n");
				scanf("%s %s", id, name);
				if(delete_basic(conn, id, name)) {
					printf("delete basic failed\n");
				}
				break;
			case 3:
				if(show_basic(conn, res)) {
					printf("show basic failed\n");
				}
				break;
			case 4:
				scanf("%s", id);
				if(show_basic_id(conn, res, id)) {
					printf("show basic by ID failed\n");
				}
				break;
			case 0:
				return;
			default:
				printf("Invalid Command\n");
		}
	}
}


















