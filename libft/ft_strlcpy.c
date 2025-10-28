/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merol <merol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 14:55:37 by merol             #+#    #+#             */
/*   Updated: 2024/10/21 17:35:20 by merol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_size;

	i = 0;
	src_size = ft_strlen(src);
	if (dstsize == 0)
	{
		return (src_size);
	}
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > i)
	{
		dst[i] = 0;
	}
	return (src_size);
}
// #include <stdio.h>
// int main()
// {
// 	printf("%zu", ft_strlcpy("Merhaba", "hel", 5));
// }