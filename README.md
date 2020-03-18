# _printf

This project is built in Holberton school, it is about to creting the most similar function to the original PRINTF fucntion presetned in the standard library of progammming laguage C

# Table of contents

1. [Authors](#Authors)
2. [Features](#Features)
3. [How Use](#How-Use)
4. [Tasks](#Tasks)

# Authors

**Juan Llano Gallego**

- Twitter: [@llanoJS] <https://twitter.com/llanoJS>
- Github: [@EckoJuan] <https://github.com/EckoJuan>

**Luis Enrique Sanjuan Melo**

- Twitter: [@lsanjuan92] <https://twitter.com/lsanjuan92>
- Github: [@luiscode92] <https://github.com/luiscode92>

# Features

- The main function uses a structure to switch among the different functions

- The function uses a buffer to store temporary  and print the string

- The function returns the number of characters printed

# How Use

## How to compile

### Requirements

- compile on Ubuntu 14.04 LTS
- compile with gcc 4.8.4

### Flags to compile

- `$ gcc -Wall -Werror -Wextra -pedantic *.c`

#### Main Exampple

```c
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
int len;
int len2;
unsigned int ui;
void *addr;

len = _printf("Let's try to printf a simple sentence.\n");
len2 = printf("Let's try to printf a simple sentence.\n");
ui = (unsigned int)INT_MAX + 1024;
addr = (void *)0x7ffe637541f0;
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
_printf("Negative:[%d]\n", -762534);
printf("Negative:[%d]\n", -762534);
_printf("Unsigned:[%u]\n", ui);
printf("Unsigned:[%u]\n", ui);
_printf("Unsigned octal:[%o]\n", ui);
printf("Unsigned octal:[%o]\n", ui);
_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
_printf("Character:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');
_printf("String:[%s]\n", "I am a string !");
printf("String:[%s]\n", "I am a string !");
_printf("Address:[%p]\n", addr);
printf("Address:[%p]\n", addr);
len = _printf("Percent:[%%]\n");
len2 = printf("Percent:[%%]\n");
_printf("Len:[%d]\n", len);
printf("Len:[%d]\n", len2);
_printf("Unknown:[%r]\n");
printf("Unknown:[%r]\n");
return (0);
}
```

##

# Tasks

## Task 0

| Specifier | Function name                    |
|:-------------:|:------------------------------:|
| %c   | `print_char()`       |
| %s   | `print_string()`     |
| %%   | `print_percen()`     |

## %c

- %c Prints a characters that were passed as a parameter to the function.

## %s

- %s Prints strings, which are received as parameters to eh function.

## %%

- %% Print the the char % because being the indefinifier of printf specifiers could generate conflicts at the time of printing

