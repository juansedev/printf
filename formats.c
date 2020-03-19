#include "holberton.h"
/**
 * print_char - Prints character
 * @list: list of arguments
 * Return: Will return 1.
 */
int print_char(va_list list)
{
	char str;

	str = va_arg(list, int);
	_putchar(str);
	return (1);
}
/**
 * print_string - Prints strings
 * @list: list of arguments
 * Return: Will return leght of string stored.
 */
int print_string(va_list list)
{
	char *str;
	int char_add;

	str = va_arg(list, char *);
	if (str == NULL)
	{
		str = "(null)";
	}

	for (char_add = 0; str[char_add] != '\0'; char_add++)
	{
		_putchar(str[char_add]);
	}
	return (char_add);
}

/**
 * set_mult - funcion that return acount of digit of string in 10 base
 * @lenght: actual leght to print
 * Return: Will return leght of string stored.
 */
int set_mult(int lenght)
{
	int i = 1;

	while (lenght)
	{
		i *= 10;
		lenght--;
	}
	return (i);
}

/**
 * print_int - Prints strings
 * @list: list of arguments
 * Return: Will return leght of string stored.
 */
int print_int(va_list list)
{
	int number = va_arg(list, int);
	int lenght = 0, i, stop = 0, copy = 0, unit = 0;
	int thounsand = 0, muliple = 0, sing = 1;

	copy = number;

	if (copy < 0)
	{
		putchar('-');
		sing = -1;
	}

	for (i = 0; stop != 1; i++)
	{
		copy = copy / 10;
		if ((copy * sing) < 10)
			stop = 1;
	}

	lenght = i;
	thounsand = lenght;

	for (i = 0; i < thounsand; i++)
	{
		muliple = set_mult(lenght);
		unit = number / muliple;
		number = number - (muliple * unit);
		printf("%d", unit * sing);
		if (i == (thounsand - 1))
		{
			unit = number % 10;
			printf("%d", unit * sing);
		}
		lenght--;
	}

	return (thounsand + 1)

}

