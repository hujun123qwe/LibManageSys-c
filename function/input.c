/*
	Name: input.c
	Copyright:  HJ
	Author:  hujun
	Date: 26/01/19 20:41
	Description:  input to scanf user input values
*/


#include "../headfile/global.h"

void input(int *t)
{
	int n;
	scanf("%d", &n);
	*t = n;
}

void input_str( char *str )
{
	scanf("%s", str);
}

int input_r( char *str )
{
	printf( "%s\n", str);
	int n;
	scanf("%d", &n);
	return( n );
}
