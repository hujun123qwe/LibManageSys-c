/*
	Name:  main.c
	Copyright: HJ
	Author:  hujun
	Date: 26/01/19 17:30
	Description:  main file
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headfile/global.h"
#include "headfile/log.h"
#include "headfile/books.h"
#include "headfile/show.h"
#include "headfile/input.h"
#include "headfile/menu.h"

int main(int argc, char *argv[]) {

	menu_show();
	
	menu_process();
		
	log("test menu, divid into two parts, menu and show "); 
	return 0;
}
