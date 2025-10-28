#include "ft_printf.h"


int ft_printptr(unsigned long long ptr)
{
	int count;
	count = 0;
	if(ptr > 15)
	{
		count += ft_printptr(ptr / 16);
		count += ft_printptr(ptr % 16);
	}
	else
	{
		if(ptr <= 9)
			count += ft_putchar( ptr + 48);
		else
			count += ft_putchar(ptr- 10 + 'a');
	}
	return(count);
}

int ft_putptr(unsigned long long ptr)
{
	int len;
	len = 0;
	if(ptr == 0)
	{
		len += write(1,"(nil)",5);
		return(len);
	}
	len += write(1, "0x", 2);
	len += ft_printptr(ptr);
	return(len); 
}