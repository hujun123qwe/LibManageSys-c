/*
	Name: login.c
	Copyright:    HJ
	Author:       hujun
	Date: 27/01/19 19:27
	Description:   login.c user login function
*/

#include "../headfile/global.h"
#include "../headfile/file.h"
/*
@info: user login in, check user info
@return:  0 ok, check pass, user validate
		  1 error, user not exsit
		  2 error, password wrong
*/
int user_login_in(char *user_name, char *user_password)
{
	char *file_name = "user.txt";
	//show_info( cover_file_name( file_name ));
	
	FILE *file_ptr;
	file_ptr = fopen( "./file/user.txt", "r" );	

	char name[50];
	char password[50];

	while( fscanf( file_ptr, "%s %s", name, password ) != EOF )
	{
		//show_info( name );
		//show_info( password );
		if( strcmp( user_name, name ) == 0 )
		{
			if( strcmp( user_password, password ) == 0 )
			{
				fclose( file_ptr );
				return 0;
			}
			else
			{
				fclose( file_ptr );
				return 2;
			}
		}
	}
	fclose( file_ptr );
	return 1; 
}

