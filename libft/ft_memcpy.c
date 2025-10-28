/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merol <merol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:15:55 by merol             #+#    #+#             */
/*   Updated: 2024/10/25 17:10:01 by merol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*cdst;
	unsigned char	*csrc;

	cdst = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (cdst);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char source[] = "Hello, World!";
// 	char destination[5];

// 	ft_memcpy(destination, source, ft_strlen(source) + 1) ;
// 	printf("Source: %s\nDestination: %s\n", source, destination);
// 	return (0);
// }