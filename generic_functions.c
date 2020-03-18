#include "holberton.h"
/**
 * select_fun_fmt - This functions allows to select the
 * function to format the input
 * Your return is a function pointer
 * @f_type: Char to compare with
 *
 * Return: int
 */
int (*select_fun_fmt(const char f_type))()
{
	identifier_fmt id_fmt[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_string},
		{"i", print_string},
		{NULL, NULL}
	};
	int i = 0;

	while (id_fmt[i].type)
	{
		if (id_fmt[i].type[0] == f_type)
			return (id_fmt[i].func_fmt);
		i++;
	}
	return (NULL);
}
/**
 * free_buffer - This function clean the buffer before set with new data
 * @buffer: Pointer to array to store input from format and arguments variadic
 *
 * Return: void
 */
void free_buffer(char *buffer)
{
	int i;

	for (i = 0; i < SIZE; i++)
	{
		buffer[i] = 0;
	}
}
/**
 * _strlen - returns the length of a string.
 * @s: pointer to String
 * Return: Nothing
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcat - concatenates two strings.
 * @dest: string to destiny
 * @src: string to source
 * Return: Return a concatenate string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, lenght = 0;

	while (*(dest + lenght) != '\0')
		lenght++;
	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + lenght) = *(src + i);
		lenght++;
	}
	*(dest + lenght) = *(src + i);

	return (dest);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
