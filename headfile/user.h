/*
	Name: user.h
	Copyright:  HJ
	Author: hujun
	Date: 24/01/19 15:48
	Description: 会员管理类 
*/

typedef struct user
{
	char user_name[20];
	char user_login_name[20];
	char user_password[20];
	int user_id[10];
	int user_card[18];
	int totoal_books;
	int user_phone[11];
}User;


bool user_login( User user, char *user_login_name, char *user_password )
{
	if( User.user_login_name != user_login_name || User.user_password != user_password )
	{
		return false;
	}
	else
	{
		return true;
	}
}


bool check_user( User user, char *password)
{
	if(  strcmp( User.user_password, passowrd ) == 0 )
	{
		return true;
	}
	else
	{
		return false;
	}
} 

bool set_user_password( User user, char *old_password, char *new_password )
{
	if( check_user( user, old_password ) )
	{
		strcpy( User.user_password, new_password )
		return true;	
	}
	else
	{
		return false; 
	}
}

bool set_user_name( User user, char *new_name, char *password )
{
	if( check_user( user, password ) )
	{
		strcpy( User.user_name, new_name );
		return true;
	}
	else
	{
		return false;
	}
} 
