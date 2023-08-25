#include<stdio.h>
void printer(void) __attribute__((constructor));
void printer(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
