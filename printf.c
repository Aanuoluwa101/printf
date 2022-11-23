#include "main.h"

/**
* _printf - prints a formatted string
* @format: the format for printing
*
* Return: number of characters printed
*/

int _printf(const char *format, ...)
{	va_list args;
	int i, count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{	i++;
			while (format[i] == ' ')
				i++;
			if (is_in(format[i]))
			{
				if (format[i] == 'c')
					count += write_character(va_arg(args, int));
				else if (format[i] == 's')
					count += write_string(va_arg(args, char *));
				else if (format[i] == 'd' || format[i] == 'i')
					count += print_number(va_arg(args, int));
				else if (format[i] == 'b')
					count += print_binary(va_arg(args, int));
				else if (format[i] == 'R')
					count += print_reverse(va_arg(args, char *));
				else if (format[i] == '%')
					count += write_character('%');
			}
			else
			{
				count += write_character(format[i - 1]);
				count += write_character(format[i]);
			}
			i++;
		}
		else
		{
			count += write_character(format[i]);
			i++;
		}
	}
	return (count);
}
