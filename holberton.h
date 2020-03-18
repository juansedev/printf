#ifndef HOLBERTON_H
#define HOLBERTON_H

/* Include libraries */
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

/* Define Macros*/
#define SIZE 1024

/* Define structs */
/**
 * struct fmt - Structs to define format of printf
 *
 * @type: Type of specifier format to prints
 * @func_fmt: The function associed
 */
typedef struct fmt
{
	char *type;
	int (*func_fmt)();
} identifier_fmt;

/* Define prototypes */
/* Functions of generic use.*/
int _putchar(char c);
int _strlen(char *s);

/* This functions allows to select the function to format the input.*/
/* Your return is a function pointer */
int (*select_fun_fmt(const char type))();
/* This function clean the buffer before set with new data*/
void free_buffer(char *buffer);

/* This function implement a printf function of C*/
int _printf(const char *format, ...);

/*Function  */
int print_char(va_list list);
int print_string(va_list list);
int print_percent(va_list list);
int print_int(va_list list);
int print_double(va_list list);
//void print_percent(va_list list, char *buf)
#endif
