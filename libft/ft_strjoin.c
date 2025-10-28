/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merol <merol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:26:37 by merol             #+#    #+#             */
/*   Updated: 2024/10/29 16:39:44 by merol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*result;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = (malloc(sizeof(char) * (len1 + len2 + 1)));
	if (result)
	{
		ft_memcpy(result, s1, len1);
		ft_memcpy(result + len1, s2, len2 + 1);
	}
	return (result);
}
// #include <stdio.h>
// int main()
// {
// 	char s1[] = "Hello world ";
// 	char s2[] = "it's me lavinya";
// 	printf("%s", ft_strjoin(s1, s2));
// }
