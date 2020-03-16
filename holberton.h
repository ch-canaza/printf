#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct Pf_func - Entry point
 * Desc: Entry
 *@f: pointer
 *@a: int value
 *@b: int value
 *@op: char pointer
 */
typedef struct Pf_func
{
	char *op;
	int (*f)(va_list);
} print_fun;

int _printf(const char *format, ...); /*prototype printf*/
int _strcmp(const char *s1, char *s2);
int (*get_op_func(const char *s, int pos))(va_list);
int _putchar(char c); /*prototype putchar*/

int print_single_char(va_list c);
int print_string_char(va_list s);

/*prototype function that compares two strings.*/
#endif /* HOLBERTON_H */
