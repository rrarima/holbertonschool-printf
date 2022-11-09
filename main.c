#include <limits.h>
#include <stdio.h>
#include <limits.h>
#include "main.h"
/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
	int len;
        int len2;

        len = _printf("Let's try to printf a simple sentence.\n");
        len2 = printf("Let's try to printf a simple sentence.\n");
        len = len2;
        len2 = len;

        _printf("Result got Character:\t\t[%%%%%%c]\n", 'H');
        printf("Result expected Character:\t[%%%%%%c]\n", 'H');
        _printf("String:[%s]\n", "I am a string !");
        printf("String:[%s]\n", "I am a string !");
        _printf("Length:[%d, %i]\n", len, len);
        printf("Length:[%d, %i]\n", len2, len2);
        printf("%i %i\n",INT_MAX,INT_MIN);
        _printf("%i %i\n",INT_MAX,INT_MIN);
        return (0);
}
