/*
	Name: menu.h
	Copyright: HJ
	Author: hujun
	Date: 26/01/19 22:40
	Description:  menu head file
*/

#ifndef MENU_H
#define MENU_H
void menu_show();
void menu_process();
void menu_division(int *t);
void menu_login_in();
void menu_search_books();
void menu_return_books();
void menu_exit();
void menu_user_center( char *user_name );
void menu_user_list_books( char *user_name );
void menu_user_change_name( char *user_name );
void menu_user_change_password( char *user_name ); 
void menu_user_list_books_op( char *user_name );
void menu_user_list_books_division(int *t, char *user_name );
void menu_user_list_books_return( char *user_name );
void menu_user_list_books_prolong( char *user_name );
#endif
