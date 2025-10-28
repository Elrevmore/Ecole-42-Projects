#include "ft_printf.h"

int ft_printf_checker( va_list arg, const char format)
{
    int char_printed;
    char_printed = 0;
    if(format == 'c')
        char_printed += ft_putchar(va_arg(arg, int));
    else if(format == 's')
        char_printed += ft_putstr(va_arg(arg, char *));
    else if(( format == 'd') ||(format == 'i'))
        char_printed += ft_putnbr(va_arg(arg, int));
    else if(format == 'p')
        char_printed += ft_putptr(va_arg(arg, size_t));
    else if(format =='u')
        char_printed += ft_putunsigned(va_arg(arg,unsigned int));
    else if(format == 'x' || 'X')
        char_printed += ft_puthexadecimal(va_arg(arg, unsigned int), format);
    else if(format == '%')
        char_printed += ft_putchar('%');
    return(char_printed);
}


int ft_printf(const char *format, ...)
{
    int i;
    va_list arg;
    int char_printed;

    if(!format)
        return(-1);

    va_start(arg, format);
    while(format[i])
    {
        if(format[i] == '%')
        {
            char_printed += ft_printf_checker(arg, format[i + 1]);
            i++;
        }
        else
            char_printed += ft_putchar(format[i]);
        i++;
    }
    va_end(arg);
    return(char_printed);
}