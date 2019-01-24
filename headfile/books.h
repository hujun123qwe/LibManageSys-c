/*
	Name:  books.h
	Copyright: HJ
	Author:  hujun
	Date: 24/01/19 15:23
	Description: 图书类，只把图书固有属性封装，并实现常用操作 
*/

typedef struct book{
	char book_name[60];
	char author_name[30];
	char interpreter_name[30];
	char publisher_name[30];
	char ISBN[18];
	char profile[120];
	float price;
	int total_num; 
};

 

