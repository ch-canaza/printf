#include "holberton.h"

/**
 * print_single_char - Entry function
 * @c: operator
 * Return: function
 */
int print_single_char(va_list c)
{
	char var = (char) va_arg(c, int);

	_putchar(var);
	return (1);
}

/**
 * print_string_char - Entry function
 * @s: operator
 * Return: function
 */
int print_string_char(va_list s)
{
	char *string;
	int k;

	string = va_arg(s, char*);
	if (string == NULL)
	{
		string = "(null)";
	}
	for (k = 0 ; string[k] != '\0' ; k++)
	{
	_putchar (string[k]);
	}
	return (k);
}
