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

void menu_division(int *t)
{
	switch( *t ){
		case 1:
			menu_login_in();
			break;
		case 2:
			menu_search_books();
			break;
		case 3:
			menu_return_books();
			break;
		case 4:
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
	}
	else if( re == 1 )
	{
		show_info( "user name can not find !" );
	}
	else
	{
		show_info( "password error !" );
	}
	
	//show_info( user_name );
	//show_info( user_password );			
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
