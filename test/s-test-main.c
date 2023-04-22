#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int count;
	char extra[] = "we are live";
    _printf("Let's try to printf a simple sentence.\n");
    _printf("String:[%s] \n", extra);
    _printf("String:[%s] \n", "is finally working!");
     _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    count =    _printf("count is ");
    printf("%d \n", count);
    return (0);
}
