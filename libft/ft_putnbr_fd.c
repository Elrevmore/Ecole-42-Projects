/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merol <merol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:11:43 by merol             #+#    #+#             */
/*   Updated: 2024/11/06 18:29:24 by merol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_putnbr_fd(int n, int fd)
{
	if(n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(214,fd);
		ft_putnbr_fd(7483648, fd);
	}
	else if( n < 0)
	{
		ft_putchar_fd('-',fd);
		ft_putnbr_fd(-n,fd);
	}
	else if(n > 9)
	{
		ft_putnbr_fd(n/10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}