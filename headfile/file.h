/*
	Name: file.h
	Copyright: HJ
	Author:  hujun
	Date: 24/01/19 16:03
	Description: 文件操作类 
*/

#ifndef FILE_H
#define FILE_H
char *cover_file_name( char *file_name );
int file_exist( char *file_name );
int file_create( char *file_name );
int file_open( char *file_name );
int file_write( char *info );
char *file_get_book_id( char *user_name );
char *file_get_book_info( int book_id ); 
void file_return_book( int book_id, char *user_name );
char *file_replace_book_id( char *book_id_ptr, int book_id );
#endif

 


