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

#include "struct.h" //Ϊ��ʹ�ýṹ������

#include "file1.h" //Ϊ�˵����ⲿ����

void test_h_file(){

Sqlist La;

Initlist(&La);

printf("%d,%d\n",La.length,La.list_size);

}


