#include <stdio.h>

void __attribute__((constructor)) hare_and_tortoise(void);

/**
 * hare_and_tortoise - Prints a string before executing the main function
 */
void hare_and_tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
