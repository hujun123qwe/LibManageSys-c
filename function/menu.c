/*
	Name:  menu.c
	Copyright:  HJ
	Author:  hujun
	Date: 26/01/19 22:40
	Description: menu process file
*/

#include "../headfile/global.h"
#include "../headfile/input.h"
#include "../headfile/menu.h"
#include "../headfile/show.h"
#include "../headfile/login.h"
#include "../headfile/book.h"

void menu_division(int *t)
{
	switch( *t ){
		case 1:
			menu_login_in();
			break;
		case 2:
			menu_register();
			break;
		case 3:
			menu_search_books();
			break;
		case 4:
			menu_return_books();
			break;
		case 5:
			menu_exit();
			break;
		default:
			show_error( "Input Invalidate!" );
			menu_show();
			menu_process();
			break;
	}	
} 

void menu_process()
{
	int *menu_select=(int *)malloc(sizeof(int));	
	input( menu_select );
	menu_division( menu_select );
	free( menu_select); 
 
}

void menu_login_in()
{
	show_login_in();
	char *user_name = (char *)malloc( sizeof(char) );
	char *user_password = (char *)malloc( sizeof(char) );
	input_str( user_name );
	input_str( user_password );
	
	int re = user_login_in( user_name, user_password );
	if( re == 0 )
	{
		show_info( "login successed !" );
		menu_user_center( user_name );
	}
	else if( re == 1 )
	{
		menu_show();
		show_info( "user name can not find !" );
	}
	else
	{
		menu_show();
		show_info( "password error !" );
	}
	
	 
	free( user_name );
	free( user_password );			
}
   
void menu_search_books()
{
	show_search_books();
}

void menu_return_books()
{
	show_return_books();
}

void menu_exit()
{
	show_exit();
}

void menu_show()
{
	show_head();	
	show_menu();
	show_bottom();
}

void menu_register()
{
	show_register();
	char *user_name = (char *)malloc( sizeof(char) );
	char *user_password = (char *)malloc( sizeof(char) );
	input_str( user_name );
	input_str( user_password );
	
	int re = register_user( user_name, user_password );
	if( re )
	{
		show_info( "Registe successed!" );
		menu_user_center( user_name );
	}
	free( user_name );
	free( user_password );
} 

void menu_user_center( char *user_name )
{
	show_user_center( user_name );
	int *menu_select=(int *)malloc(sizeof(int));	
	input( menu_select );
	
	switch( *menu_select )
	{
		case 1:
			menu_user_list_books( user_name ); 
			break;
		case 2:
			menu_user_change_name( user_name );
			break;
		case 3:
			menu_user_change_password( user_name );
			break;
		default:
			break;
	}	
}

void menu_user_list_books( char *user_name )
{
	show_book_list();
	char *book_id_str = file_get_book_id( user_name );
	book_split_by_comma( book_id_str );
	menu_user_list_books_op( user_name );	
}

void menu_user_change_name( char *user_name )
{
		
}

void menu_user_change_password( char *user_name )
{
	
}

void menu_user_list_books_op( char *user_name )
{
	show_book_op();
	int *menu_select=(int *)malloc(sizeof(int));	
	input( menu_select );
	menu_user_list_books_division( menu_select, user_name );
	free( menu_select);
}

void menu_user_list_books_division( int *t, char *user_name )
{
	switch( *t ){
		case 1:
			menu_user_list_books_return( user_name );
			break;
		case 2:
			menu_user_list_books_prolong( user_name );
			break;
		case 3:
			exit(0);
			break;
		default:
			menu_process();
			break;
	}
}

void menu_user_list_books_return( char *user_name )
{
	int book_id = input_r( "Please input a num to choose which book" );
	book_return( book_id, user_name );
	menu_user_center( user_name ); 
}

void menu_user_list_books_prolong( char *user_name )
{
	
}
