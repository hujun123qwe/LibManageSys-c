/*
	Name:  file.c
	Copyright:  HJ
	Author:       hujun
	Date: 27/01/19 19:35
	Description:       file opereate model
*/

#include "../headfile/global.h"

char *cover_file_name( char *file_name )
{
	char *dirctory = "./file/";
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
	FILE *file_ptr;
	if( file_exist( file_name ) )
	{
		fclose( file_ptr );
		return 0;
	}
	else
	{
		char *file_path =  cover_file_name( file_name );
		show_info( file_path );
		file_ptr = fopen( file_path, "w+");
		fclose( file_ptr );
		return 1;	
	}
}

int file_open( char *file_name )
{
	FILE *file_ptr;
	file_ptr = fopen( cover_file_name( file_name ), "w+" );	
	
	fclose( file_ptr );
}

int file_search( char *file_name, char *search_content )
{
 	FILE *file;
	file = fopen( cover_file_name( file_name ), "w+" );	
	
	char name[50], password[50];
//	while( fscanf("%s %s", name, password) != EOF )
//	{
//		if( strcmp( file_name, name ) == 0 )
//		{
//			return 1;
//		}
//	}   
	return 1;  
}

int file_write( char *info )
{
	FILE *file_ptr;
	file_ptr = fopen( "./file/user.txt", "a+" );
	
	fprintf( file_ptr, "%s\n", info );
	
	fclose( file_ptr );
	return 1;
}

char *file_get_book_id( char *user_name )
{
	FILE *file_ptr;
	file_ptr = fopen( "./file/user-book.txt", "r" );
	char name[30];
	char *book_id = ( char * )malloc( sizeof( char ) );
	while( fscanf(file_ptr, "%s %s", name, book_id) != EOF )
	{
		if( strcmp( name, user_name ) == 0 )
		{
			fclose( file_ptr );
			return book_id;
		}
	}
	fclose( file_ptr );
	return "null";
}

char *file_get_book_info( int book_id )
{
	FILE *file_ptr;
	file_ptr = fopen( "./file/books.txt", "r" );
	char *book_info = ( char * )malloc( sizeof( char )*128 ); 
	if( file_ptr == NULL)
	{
		return(-1);
	}

	//fscanf( file_ptr, "%s", book_info );
	//show_info( book_info );
//	if( fgets( book_info, 24, file_ptr ) != NULL ){
//		show_info( book_info );
//		fclose( file_ptr );
//	}
	while( fgets(book_info, 127, file_ptr) != NULL )
	{
		char *tmp = book_info;
		char *id = book_info;
		while( *tmp != ' '){
			tmp++;
		}
		*tmp = '\0';
		book_info = ++tmp;
		
		int tmp_id = atoi( id );	
		if( tmp_id == book_id )
		{
			fclose( file_ptr );
			return( book_info );		
		}	
	}

	fclose( file_ptr );	
	return( "Null" );
}

char *file_replace_book_id( char *book, int book_id )
{
	char tmp[60];
	tmp[0] = '\0';
	char *ret;
	char *book_id_ptr = book;
	char needle[6];
	char token[2] = ","; 
	itoa( book_id, needle, 10 );
	//show_info( needle );
	ret = strtok( book_id_ptr, token);
	while( ret != NULL )
	{		
		if( strcmp( ret, needle ) != 0 )
		{    
			//show_info( tmp );
			strcat( tmp, ret );
			strcat( tmp, "," );
		}
		ret = strtok( NULL, token );	
	} 
	//show_info( tmp );
 	return tmp;
}

void file_return_book( int book_id, char *user_name )
{
	FILE *file_ptr;
	file_ptr = fopen( "./file/user-book.txt", "r+" );
	char name[30];
	char book[129];
	char tmp[60];
	while( fscanf( file_ptr, "%s %s", name, book) != EOF )
	{
 		//printf("%d\n", ftell( file_ptr ));
		if( strcmp( name, user_name ) == 0 )
		{	
			int index_start = strlen( book );		 
			strcpy( tmp, file_replace_book_id( book, book_id ) );
			//show_info( tmp );			
			int tmp_len = strlen(tmp);
			tmp[ tmp_len ] = ' ';
			tmp[ index_start ] = '\0';
			fseek( file_ptr, -index_start, SEEK_CUR );
			//printf("\t%d,%d\n", index_start, ftell( file_ptr ));
			fprintf( file_ptr, "%s", tmp);
			char ch;
//			printf("%d\n", ftell( file_ptr ));
//			while( (ch = fgetc( file_ptr) )!='\n')
//			{
//				printf("%d\n", ftell( file_ptr ));
//				if( ch != ','){
//					//fseek( file_ptr, -1, SEEK_CUR );
//					fputc(',', file_ptr);	
//				}
//				
//			}
			break;			
		}
	}
	fclose( file_ptr );		 
} 

