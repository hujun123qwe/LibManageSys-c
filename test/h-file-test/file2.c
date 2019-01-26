/*
	Name:  file2.c
	Copyright:    HJ
	Author:         hujun
	Date: 26/01/19 17:09
	Description:  test head file
	
	file1.c -> struct.h  (define struct)
	file2.c -> file1.h (define Initlsit function)
	file2.c -> struct.h   (define struct)
	then struct.h would be invoked towice that will be caused error until define STRUCT_H
*/

#include<stdio.h>

#include "struct.h" //为了使用结构体类型

#include "file1.h" //为了调用外部函数

void test_h_file(){

Sqlist La;

Initlist(&La);

printf("%d,%d\n",La.length,La.list_size);

}


