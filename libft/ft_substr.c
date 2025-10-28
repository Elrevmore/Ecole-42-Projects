/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merol <merol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:29:58 by merol             #+#    #+#             */
/*   Updated: 2024/10/29 16:26:21 by merol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subset;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	else if (len > slen - start)
		len = slen - start;
	subset = malloc(sizeof(char) * (len + 1));
	if (!subset)
		return (NULL);
	ft_memcpy(subset, s + start, len);
	subset[len] = '\0';
	return (subset);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "Hello world it's me Lavinya";
// 	printf("%s", ft_substr(str, 10, -10));
// }
