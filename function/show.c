/*
	Name: show.c
	Copyright: HJ
	Author:  hujun
	Date: 26/01/19 20:15
	Description:  show template constant content in console
*/

#include "../headfile/global.h"
#include "../headfile/show.h"

char menu_info[5][20] = {
	"Login in",
	"Registe",
	"Search books",
	"Return books",
	"Exit"	
};

char user_center_menu[4][30] = {
	"List my borrowed books",
	"Change my login name",
	"Change my password",
	"Exit"
};

char user_list_book_menu[3][20] = {
	"Return book",
	"Prolong deadline",
	"Exit"
};

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
	printf( HEAD );
	printf( NEW_LINE );
}

void show_menu()
{
	int i;
	for(i=0; i<5; i++){
		char str[30];
		sprintf( str, "%d.%s", i+1, menu_info[i] );
		//strcat( menu_info[i], str );
		show_info( str );
	}	
	show_op();
}

void show_op()
{
	printf("Please intput a number to choose: \n");
}

void show_error(char *str)
{
	printf( "%s\n", str );
}

void show_login_in()
{
	printf("Please input your login name and password, divid by space:\n");
}

void show_register()
{
	printf("Please input your login name and password, divid by space:\n");
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

void show_user_center( char *user_name )
{
	show_head();
	printf( "\t\tWelcome %s\n", user_name );
	
	int i;
	for( i=0; i<4; i++ )
	{
		char str[40];
		sprintf( str, "%d.%s", i+1, user_center_menu[i] );
		show_info( str );
	}
	
	show_bottom();	
	show_op();
}

void show_book_list()
{
	show_head();
	printf( "BOOK NAME\tBOOK AUTHOR\tBORROW DATE\tRETURN DATE\n" );
}

void show_book_op()
{
	int i;
	for(i=0; i<3; i++){
		char str[20];
		sprintf( str, "%d.%s", i+1, user_list_book_menu[i] );
		//strcat( menu_info[i], str );
		show_info( str );
	}	
	show_bottom();
	show_op();
//	show_info( "Please input two numbers,first to choose what you want to do, second to which book: ");	
}
