/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merol <merol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:24:38 by merol             #+#    #+#             */
/*   Updated: 2024/10/21 17:17:56 by merol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}
// char	*ft_strrchr(const char *s, int c)
// {
// 	int	i;

// 	i = ft_strlen(s) - 1;
// 	while (i >= 0)
// 	{
// 		if (s[i] == (char)c)
// 			return ((char *)&s[i]);
// 		i--;
// 	}
// 	return (0);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	const char *str = "it's Merve";
// 	char *result = ft_strrchr(str, 'e');

// 	if (result)
// 	{
// 		printf("%s\n", result);
// 	}
// }