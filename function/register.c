/*
	Name: register.c
	Copyright:      HJ
	Author:           hujun
	Date: 28/01/19 11:32
	Description:           register file model
*/

#include "../headfile/global.h"
#include "../headfile/file.h"

int register_user( char *user_name, char *user_password)
{
	strcat( user_name, " ");
	strcat( user_name, user_password );
	file_write( user_name );
	return 1;	
}
