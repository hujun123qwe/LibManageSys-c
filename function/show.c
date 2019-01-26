/*
	Name: show.c
	Copyright: HJ
	Author:  hujun
	Date: 26/01/19 20:15
	Description:  show template constant content in console
*/

#include "../headfile/global.h"
#include "../headfile/show.h"

void show_head()
{
	printf( HEAD );
	printf( SOFTWARE );
	printf( HEAD );
	printf( NEW_LINE );	
}

void show_bottom()
{
	printf( HEAD );
	printf( HEAD );
	printf( HEAD );
	printf("===");
	printf( NEW_LINE );
}

void show_menu()
{
	printf("\t1. Login in\n");
	printf("\t2. Search books\n");
	printf("\t3. Return books\n");
	printf("\t4. Exit\n");
	printf("\tPlease intput a number to choose: \n");	
}

void show_error(char *str)
{
	printf( "%s\n", str );
}

void show_login_in()
{
	printf("\tPlease input your login name and password, divid with space:\n");
}

void show_info( char *str )
{
	printf( "%s\n", str );
}

void show_search_books()
{
	printf("\t test page\n");
}

void show_return_books()
{
	printf("\t test page \n");
}

void show_exit()
{
	printf("\t test page \n");
}
