#include <limits.h>
#include <stdio.h>
#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
        _printf("%d\n", 1024);
        _printf("%d\n", -1024);
        _printf("%d\n", 0);
        _printf("%d\n", INT_MAX);
        _printf("%d\n", INT_MIN);

        _printf("There is %d bytes in %d KB\n", 1024, 1);
        _printf("%d - %d = %d\n", 1024, 2048, -1024);
        _printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
        _printf("%i\n", 1024);
        _printf("%i\n", -1024);
        _printf("%i\n", 0);
        _printf("%i\n", INT_MAX);
        _printf("%i\n", INT_MIN);


        _printf("There is %i bytes in %i KB\n", 1024, 1);
        _printf("%i - %i = %i\n", 1024, 2048, -1024);
        _printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
        _printf("%d == %i\n", 1024, 1024);
        _printf("iddi%diddiiddi\n", 1024);
        _printf("%d\n", 10000);       
        _printf("%i\n", 10000);
        return (0);
}