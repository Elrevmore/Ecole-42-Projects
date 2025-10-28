/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merol <merol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:24:23 by merol             #+#    #+#             */
/*   Updated: 2024/10/30 15:21:50 by merol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	count_char(long num)
{
	int	count;

	count = 0;
	if (num != 0)
	{
		if (num < 0)
		{
			num = num * (-1);
			count++;
		}
		while (num != 0)
		{
			num = num / 10;
			count++;
		}
	}
	else
		count = 1;
	return (count);
}
char	*ft_itoa(int n)
{
	int			len;
	char		*str;
	long int	number;

	len = count_char(n);
	number = n;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (number < 0)
	{
		str[0] = '-';
		number = -number;
	}
	if (number == 0)
		str[0] = '0';
	str[len--] = '\0';
	while (number)
	{
		str[len] = ((number % 10) + '0');
		number /= 10;
		len--;
	}
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%s", ft_itoa(2134567));
// }