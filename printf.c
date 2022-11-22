#include "main.h"

/**
* _printf - prints a formatted string
* @format: the format for printing
*
* Return: number of characters printed
*/

int _printf(const char *format, ...)
{
	va_list args;
	int i;
	int count;

	i = 0;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			while (format[i] == ' ')
				i++;
			if (format[i] == 'c')
				count += write_character(va_arg(args, char *));
			else
				count += write_character(format[i]);
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
