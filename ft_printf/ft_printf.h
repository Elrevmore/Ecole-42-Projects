#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int ft_printf_checker( va_list arg, const char format);
int ft_printf(const char *format, ...);
int ft_putchar(int c);
int ft_putstr(char *str);
int ft_putnbr(int c);
int ft_hexlen(unsigned int num);
int ft_printhex(unsigned int num, const char format);
int ft_puthexadecimal(unsigned int num, const char type);
int ft_ptr_len(unsigned lon long ptr);
int ft_printptr(unsigned long long ptr);
int ft_putptr(unsigned long long ptr);
int ft_len_num(unsigned int num);
char    *ft_utoa(unsigned int n);
int ft_putunsigned(unsigned int n);

#endif
