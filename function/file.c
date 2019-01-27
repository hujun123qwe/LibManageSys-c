/*
	Name:  file.c
	Copyright:  HJ
	Author:       hujun
	Date: 27/01/19 19:35
	Description:       file opereate model
*/

#include "../headfile/global.h"
#include <io.h>

char *cover_file_name( char *file_name )
{
	char dirctory[80] = "./file/";
	strcat( dirctory, file_name );
	return dirctory;
}

/*
@return 0 is not exist
		1 is exist
*/
int file_exist( char *file_name )
{
	if( !access( cover_file_name( file_name ), 0 ) )
	{
		return 1;	
	}
	else
	{
		return 0;
	}
}

/*
@return 0  file has already existed
		1 create sucess
*/
int file_create( char *file_name )
{
	FILE *file;
	if( file_exist( file_name ) )
	{
		return 0;
	}
	else
	{
		file = fopen( cover_file_name( file_name ), 'w+');
		fclose( file );
		return 1;	
	}
}

int file_open( char *file_name )
{
	FILE *file;
	file = fopen( cover_file_name( file_name ), 'w+' );	
}

int file_search( char *file_name, char *search_content )
{
 	FILE *file;
	file = fopen( cover_file_name( file_name ), 'w+' );	
	
	char name[50], password[50];
	while( fscanf("%s,%s", name, password) != EOF )
	{
		if( strcmp( file_name, name ) == 0 )
		{
		
		}
	}
}
