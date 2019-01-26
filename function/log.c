/*
	Name: log.c
	Copyright: HJ
	Author:  hujun
	Date: 24/01/19 19:45
	Description: 日志记录文件 
*/

#include <stdio.h>
#include <time.h>

void log( char *str )
{
    FILE *file;
	file = fopen( "file\\sys.log", "a+" );
	struct tm *tm_info;
	time_t curtime;
	char format_time[80];
	 
	time( &curtime );
	tm_info = localtime( &curtime );

	strftime(format_time, 80, "%Y-%m-%d %H:%M:%S", tm_info);
	fprintf( file, "|%s| %s\n", format_time, str ); 
	fclose( file );
}
