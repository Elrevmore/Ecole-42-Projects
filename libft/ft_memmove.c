/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merol <merol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:02:20 by merol             #+#    #+#             */
/*   Updated: 2024/10/25 18:13:06 by merol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 void *ft_memmove(void *dst, const void *src, size_t len)
 {
	size_t			i;
	unsigned char	*cdst;
	unsigned char	*csrc;

	cdst = (unsigned char *)dst;
	csrc = (unsigned char *)src;;
	if(cdst < csrc || cdst >= csrc + len)
	{
		i = 0;
		while(i < len)
		{
			cdst[i] = csrc[i];
			i++;
		}
	}
	else
	{
		i = len;
		while(i > 0)
		{
			cdst[i - 1] = csrc[i - 1];
			i--;
		}
	}
	return(cdst);
 }

// #include <stdio.h>

//  int main()
// {
// 	char a ;
// 	char b;
// 	char c;
// 	char d;
// 	printf("a'nın adresi: %p\n", &a);
// 	printf("b'nın adresi: %p\n", &b);
// 	printf("c'nın adresi: %p\n", &c);
// 	printf("d'nın adresi: %p\n", &d);


// }
//  {
// 	char str[] = "Merhaba, ben Merve";
// 	char dst[] = ""