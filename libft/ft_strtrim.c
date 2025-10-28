/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merol <merol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:41:49 by merol             #+#    #+#             */
/*   Updated: 2024/10/30 15:22:47 by merol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t start;
	start = 0;
	size_t end;
	size_t len;
	char *trimmed;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	len = end - start;
	trimmed = (char *)malloc(len + 1);
	if (!trimmed)
		return (NULL);
 	ft_memcpy(trimmed, s1 + start, len);
    trimmed[len] = '\0'; 
	return(trimmed);
}
// #include <stdio.h>
// int main()
// {
// 	char str[] = "eeeehelloeeeee";
// 	char str2[] = "e";
// 	printf("%s", ft_strtrim(str, str2));
// }