/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merol <merol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:08:20 by merol             #+#    #+#             */
/*   Updated: 2024/11/13 19:13:07 by merol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    if (!needle[0])
        return ((char *)haystack);
    while (haystack[i] && i < len)
    {
        while (haystack[i + j] && haystack[i + j] == needle[j] && i + j < len)
        {
            j++;
            if (needle[j] == '\0') 
                return ((char *)haystack + i);
        }
        i++;
        j = 0;
    }
    return NULL;
}
// 	while (i < len && (haystack[i] != '\0' ))
// 	{
// 		while (needle[j] != '\0' && (i + j) < len)
// 		{
//             if (haystack[i + j] != needle[j]) break ;
//             j++;
//         }
// 		if (needle[j] == '\0')
// 				{
//             return (char *)(haystack + i);
// Bulunduğunda haystack'ın adresini döner
//         	}

//         i++;  // Haystack içinde bir sonraki karaktere geç
//     }

//     return (NULL);  // Eğer needle bulunamazsa NULL döner
// }
// #include <stdio.h>

// int	main(void)
// {
// 	const char *haystack = "Hello, world!";
// 	const char *needle = "wo";

// 	char *result = ft_strnstr(haystack, needle, 13);
// 	if (result)
// 	{
// 		printf("Bulundu: %s\n", result);
// 	}
// 	else
// 	{
// 		printf("Bulunamadı.\n");
// 	}

// 	return (0);
// }