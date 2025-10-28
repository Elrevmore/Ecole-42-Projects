/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merol <merol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 15:30:11 by merol             #+#    #+#             */
/*   Updated: 2024/10/21 16:08:46 by merol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c -= 32);
	}
	else
		return (c);
}

// int	main(void)
// {
// 	int i = 0;
// 	char str[] = "merve";
// 	while (str[i])
// 	{
// 		printf("%c", ft_toupper(str[i]));
// 		i++;
// 	}
// 	return (0);
// }