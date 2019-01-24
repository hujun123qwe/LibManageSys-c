/*
	Name: admin.h
	Copyright:  HJ
	Author: hujun
	Date: 24/01/19 15:30
	Description: 管理员类 
*/

typedef struct admin
{
	char admin_name[20];
	char admin_password[20];
	char admin_login_name[20];
	int permisson_level;
	int admin_id;
}Admin;

bool admin_login( Admin admin, char *admin_login_name, char *admin_password )
{
	if( admin.admin_login_name != admin_login_name || admin.admin_password != admin_password )
	{
		return false;
	}
	else
	{
		return true;
	}
}


bool check_admin( Admin admin, char *password)
{
	if(  strcmp( admin.admin_password, passowrd ) == 0 )
	{
		return true;
	}
	else
	{
		return false;
	}
} 

bool set_admin_password( Admin admin, char *old_password, char *new_password )
{
	if( check_admin( admin, old_password ) )
	{
		strcpy( admin.admin_password, new_password )
		return true;	
	}
	else
	{
		return false; 
	}
}

bool set_admin_name( Admin admin, char *new_name, char *password )
{
	if( check_admin( admin, password ) )
	{
		strcpy( admin.admin_name, new_name );
		return true;
	}
	else
	{
		return false;
	}
}
