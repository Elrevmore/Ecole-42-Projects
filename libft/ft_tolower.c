/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merol <merol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:51:48 by merol             #+#    #+#             */
/*   Updated: 2024/10/21 16:08:39 by merol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c += 32);
	}
	else
		return (c);
}

// int	main(void)
// {
// 	int i = 0;
// 	char str[] = "MERVE";
// 	char wr;
// 	while (str[i])
// 	{
// 		wr = str[i];
// 		printf("%c", ft_tolower(wr));
// 		i++;
// 	}
// 	return (0);
// }