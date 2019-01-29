/*
	Name: show.h
	Copyright: HJ
	Author: hujun
	Date: 26/01/19 20:10
	Description: to show template information in console
*/

#define HEAD "==============="
#define SOFTWARE "Library Manager System (V1.28)"
#define AUTHOR "HJ"
#define VERSION "1.0.1.28"
#define NEW_LINE "\n" 
 
#ifndef SHOW_H
#define SHOW_H
void show_software();
void show_head();
void show_bottom();
void show_menu();
void show_op();
void show_info( char *str );
void show_error( char *str );
void show_login_in();
void show_register();
void show_search_books();
void show_return_books();
void show_exit(); 
void show_user_center( char *user_name );
void show_book_list();
void show_book_op();
#endif
