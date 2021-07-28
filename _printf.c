#include "holberton.h"

/**
 * _printf -
 * @format:
 * Return:
 */

int _printf(const char *format, ...)
{
	int count_format = 0;
	va_list args;
	va_start(args, format);

	if (format != NULL && *format != '\0')
	{
		while (*format != '\0')
		{
			if (*format == '%')
			{
				int (*f)(va_list args);

				f = get_op_func(++format);
				if (f != NULL)
				{
					f(args);
				}
				else
				{
					write(1, format - 1, 2);
				}
				format++;
			}
			else
			{
				write(1, format, 1);
				count_format++;
				format++;
			}
		}
	}
	va_end(args);
	return (count_format);
}
