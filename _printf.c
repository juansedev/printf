#include "holberton.h"
/**
 * _printf - This function implement a printf function of C
 * allows to format string according your format specifier
 * @format: This is the input to print in standard output
 *
 * Return: length  of output string printed
 */
int _printf(const char *format, ...)
{
	/* char buffer[SIZE]; */
	/* const char *posc_act, *posc_next; */
	int (*p)();
	int len_print = 0;
	int i;
	va_list list;
	
	if ((!format) || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	va_start(list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			p = select_fun_fmt(format[i + 1]);
			if (p)
			{
				len_print += p(list);
			}
			i++;
		} else
		{
			_putchar(format[i]);
			len_print++;
		}
	}
	va_end(list);
	return (len_print);
}


