/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merol <merol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:09:12 by merol             #+#    #+#             */
/*   Updated: 2024/10/26 16:22:52 by merol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1 = s1;
	const unsigned char	*ptr2 = s2;
	size_t				i;

	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}
// #include <stdio.h>
// int main()
// {
// 	char str[] = "Je m'apelle Merve!";
// 	char str2[] = "Bonjour!";
// 	printf("%d", ft_memcmp(str, str2, 2));
// }