/*
	Name:  file_operate.c
	Copyright: HJ
	Author: hujun
	Date: 24/01/19 16:07
	Description: 文件操作类 
*/

#include "../headfile/file.h"

bool file_opens( FILE *file, char *file_name )
{
	if ( ( file = fopen( file_name, "w+") ) == NULL )
	{
		printf("Can not open file!\n");
		return false;
	}
	else
	{
		return true;
	}	
}

bool file_closes( FILE *file )
{
	if( fclose( file ) )
	{
		return true;
	}
	else
	{
		printf("Close file failed !\n");
		return false;
	}
}


