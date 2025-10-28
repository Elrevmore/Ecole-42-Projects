<<<<<<< HEAD
#include "ft_printf.h"

int ft_putchar(int c)
{
    write(1, &c, 1);
    return(1);
}

int ft_putstr(char *str)
{
    int i;
    i = 0;
    if(!str)
    {
        write(1,"(nill)", 6);
        return(6);
    }
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return(i);
}

static void ft_printf_checker( va_list arg, const char format)
{
    int char_printed;
    char_printed = 0;
    if(format == 'c')
        char_printed += ft_putchar(va_arg(arg, int));
    else if(format == 's')
        char_printed += ft_putstr(va_arg(arg, char *));
    else if( format == 'd' || formst == 'i')
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


int ft_printf(const char *, ...)
{
    int i;
    va_list arg;
    int char_printed;
    va_start(arg, format);
    while(format[i])
    {
        if(format[i] == '%')
        {
            char_printed += ft_printf_checker(arg, format[i + 1]);
        }
        else
            char_printed += ft_putchar(format[i]);
        i++;
    }
    va_end(arg);
    return(char_printed);
=======
#include "ft_printf.h"

int ft_putchar(int c)
{
    write(1, &c, 1);
    return(1);
}

int ft_putstr(char *str)
{
    int i;
    i = 0;
    if(!str)
    {
        write(1,"(nill)", 6);
        return(6);
    }
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return(i);
}

static void ft_printf_checker( va_list arg, const char format)
{
    int char_printed;
    char_printed = 0;
    if(format == 'c')
        char_printed += ft_putchar(va_arg(arg, int));
    else if(format == 's')
        char_printed += ft_putstr(va_arg(arg, char *));
    else if( format == 'd' || formst == 'i')
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


int ft_printf(const char *, ...)
{
    int i;
    va_list arg;
    int char_printed;
    va_start(arg, format);
    while(format[i])
    {
        if(format[i] == '%')
        {
            char_printed += ft_printf_checker(arg, format[i + 1]);
        }
        else
            char_printed += ft_putchar(format[i]);
        i++;
    }
    va_end(arg);
    return(char_printed);
>>>>>>> 3f8de7ea0e3413c7adfddff3037a782e9b74b310
}