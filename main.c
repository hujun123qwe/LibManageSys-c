
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headfile/global.h"
#include "headfile/books.h"

int main(int argc, char *argv[]) {
	
	FILE *file;
	file = fopen( "file\\sys.log", "w+" );
	fprintf( file, "sys.log" );
	fclose( file );
	//file_close( file );
	
	return 0;
}
