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
 * print_percent - Prints strings
 * @list: list of arguments
 * Return: Will return 1.
 */
int print_percent(va_list list)
{
	(void)list;
	_putchar('%');
	return (1);
}
