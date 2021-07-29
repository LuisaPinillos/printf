#include "holberton.h"
/**
 * _printf - Main function of printf.
 * @format: Is a character string.
 * Return: What the container keeps.
 */
int _printf(const char *format, ...)
{
    int (*f)(va_list args);
    int count_format = 0;
    va_list args;

    va_start(args, format);
    if (format != NULL && *format != '\0')
    {
        while (*format != '\0')
        {
            if (*format == '%')
            {
                int acumulator;
                acumulator = spaces(++format);
                if (acumulator != 0)
                {
                    format += acumulator;
                    f = get_op_func(format);
                }
                else
                {
                    f = get_op_func(++format);
                }

                if (f != NULL)
                {
                    count_format += f(args);
                }
                else
                {
                    if (acumulator != 0)
                    {
                        write(1, format - (acumulator + 1), 1);
                        write(1, " ", 1);
                        write(1, format, 1);
                    }
                    else
                    {
                        write(1, format - 1, 2);
                        count_format += 2;
                    }
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
