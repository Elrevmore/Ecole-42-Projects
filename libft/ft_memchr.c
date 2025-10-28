/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merol <merol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:24:00 by merol             #+#    #+#             */
/*   Updated: 2024/10/26 16:06:31 by merol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"
 void *ft_memchr(const void *s, int c, size_t n)
 {
	size_t i;
	i = 0;
	const unsigned char *ptr = s;
	unsigned char ch = (unsigned char )c;
	while( i < n)
	{
		if(ptr[i] == ch)
			return(void *)(ptr + i);
		i++;
	}
	return (NULL);
 }


// #include <stdio.h>
//  int main()
//  {
// 	char str[] = "Hey, it's me Merve!";
// 	printf("%s",ft_memchr(str, 'i', 20));
//  }