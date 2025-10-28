/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merol <merol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 16:16:44 by merol             #+#    #+#             */
/*   Updated: 2024/10/21 14:51:28 by merol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)dest;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	int		array[] = {256, 2, 3, 4};
// 	char	c;

// 	ft_memset(array, 88, 2);
// 	printf("son hali: %d \n", array[0]);
// 	printf("ilk hali: %d \n", array[0]);
// 	ft_memset(&array[0], 255, 2);
// 	printf("son hali: %d \n", array[0]);
// 	printf("ilk hali: %d \n", array[0]);
// 	ft_memset(&array[0], 138, 1);
// 	printf("son hali: %d \n", array[0]);
// 	c = 128;
// 	printf("%d\n", c);
// 	printf("%zu", SIZE_T_MAX + 1);
// }
