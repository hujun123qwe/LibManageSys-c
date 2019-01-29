/*
	Name: book.c
	Copyright:  HJ
	Author:       hujun
	Date: 28/01/19 20:20
	Description:   book model
*/
#include "../headfile/global.h"
#include "../headfile/book.h"
#include "../headfile/file.h" 

void book_get_info_by_id( int id )
{
	show_info( file_get_book_info( id ) );
}

void book_split_by_comma( char *book_id )
{
	int book_id_arr[10];
	int i = 0, j = 0;
	char *temp[6];
	char *tmp = &temp;
	while( *book_id != '\0' )
	{
		//printf("%c\n", *book_id);
		if( *book_id != ',' )
		{
			*tmp++ = *book_id++;
		}
		else
		{
			*tmp = '\0';
			book_id_arr[i++] = atoi( temp );
			//printf("\t%s\t\t\t%d\n", temp, book_id_arr[i-1]);
			tmp = temp;
			book_id++;	
		}
	}
	
	
	for( j=0; j<i; j++)
	{
		int t = book_id_arr[ j ];
		book_get_info_by_id( t );
	}
} 

void book_return( int book_id, char *user_name )
{
	file_return_book( book_id, user_name );	
	show_info( "Return book sccessed !" );
}
