# Supermarket_anagement_system
MYSQL学习记录 利用C语言编写的基于MYSQL超市数据管理系统


## 部署
`$ cd src`
导入数据库到mysql
配置db_config.h 修改为本机**mysql**相关配置
在src目录下执行 `$ make`

## 运行
`./mysql`

## API
### item_info ctl 商品增加 删除 显示
id为商品唯一编号   price为商品价格  inventory为当前库存
```
int add_item(MYSQL* conn, char id[], char name[], int price, int inventory);
int delete_item(MYSQL* conn, char id[], char name[]);
int show_item(MYSQL* conn, MYSQL_RES* res);
int show_item_id(MYSQL* conn, MYSQL_RES* res, char id[]);
```

### login_info ctl 登录用户管理
用户id(登陆用)   姓名  密码
```
int add_login(MYSQL* conn, char id[], char name[], char pwd[]);
int delete_login(MYSQL* conn, char id[], char name[]);
int show_login(MYSQL* conn, MYSQL_RES* res);
int show_login_id(MYSQL* conn, MYSQL_RES* res, char id[]);
```


### basic_info ctl 用户基础信息管理
用户id(登陆用)   姓名 *于login表中信息共享*  
性别  岁数  手机号
```
int add_basic(MYSQL* conn, char id[], char name[], char sex[], char age[], char tel_number[]);
int delete_basic(MYSQL* conn, char id[], char name[]);
int show_basic(MYSQL* conn, MYSQL_RES* res);
int show_basic_id(MYSQL* conn, MYSQL_RES* res, char id[]);
```





