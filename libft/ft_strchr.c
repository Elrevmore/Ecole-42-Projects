/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merol <merol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:49:08 by merol             #+#    #+#             */
/*   Updated: 2024/11/13 18:51:32 by merol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char) c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}
// #include <stdio.h>

// // int main()
// // {
// //     const char *dizi = "elam";
// // 	printf("%s", ft_strchr(dizi,'s'));
// // }

// int	main(void)
// {
// 	const char *str = "Hello, World!, it's Merve";
// 	char *result = strchr(str, 'e');

// 	if (result)
// 	{
// 		printf("%s\n", result);
// 		// } else {
// 		//     printf("Karakter bulunamadı.\n");
// 		// }
// 	}
// }