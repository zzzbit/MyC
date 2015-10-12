/*
 ============================================================================
 Name        : MyC.c
 Author      : zhangzhizhi
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num[3]={1,2,3};
	printf("%d\n",&num+1);
	printf("%d\n",(int*)(&num+1));
	printf("%d",*((int*)(&num+1)-1));
	return EXIT_SUCCESS;
}
