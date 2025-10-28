
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

int ft_putnbr(int c)
{
    int i;
    i = 0;
    if(c == -2147483648)
        i += ft_putstr("-2147483648");
    else if(c < 0)
    {
        i += ft_putchar('-');
        i += ft_putnbr(c *(-1));
    }
    else if(c > 9)
    {
        i += ft_putnbr(c / 10);
        i += ft_putnbr(c % 10);
    } 
    else if (c <= 9)
    {
        i += ft_putchar(c + '0');
    }
    return(i);
}

