/**
 * print_decimal - Entry function
 * @d: operator
 * Return: function
 */
int print_decimal(va_list d)
{
	int dstring, num;
	int negative = 0;

	dstring = va_arg(d, int)
	if (dstring < 0)
	{
		_putchar('-');
		num = (dstring * -1);
		negative = 1;
	}
	else
	{
		num = dstring;
	}

	if (num > 9)
		return (negative + the_range(num));
	_putchar(num + '0');
	return (1 + negative);
}

/**
 * the_range - function to find n
 *@n: number of members
 * Return:0
 */
int the_range(unsigned int n)
{
	unsigned int number, charnum;
	int count = 0;

	if (n != 0)
	{
		number = (n / 10);
		charnum = (n % 10);
		count += the_range(number);
		count++;
		_putchar(charnum + '0');
		return (count);
	}
	return (0);
}
