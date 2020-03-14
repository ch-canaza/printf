#include "holberton.h"
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...)
{

















	pffun options []{

		{"%c", print_single_char},
		{"%d", print_decimal},
		{"%e", print_ex_floating_point},
		{"%f", print_floating_point},
		{"%g", print_general_format_float},
		{"%i", print_integer},
		{"%o", print_octal_number},
		{"%s", print_string_char},
		{"%u", print_unsigned_dec},
		{"%x", print_number_hex},
		{"%%", print_percent_sign},

}
