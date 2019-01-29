/*
	Name: book.h
	Copyright:  HJ
	Author:      hujun
	Date: 28/01/19 20:21
	Description:    book head file
*/

#ifndef BOOK_H
#define BOOK_H
void book_get_info_by_id( int id );
void book_split_by_comma( char *book_id );
void book_return( int book_id, char *user_name );
#endif

