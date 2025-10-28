/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merol <merol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:40:41 by merol             #+#    #+#             */
/*   Updated: 2024/11/13 18:22:37 by merol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	get_free(char **str, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (str[i])
			free(str[i]);
		i++;
	}
	free(str);
}
static int count_word(char const *s, char c)
{
    int i;
    i = 0;
    int word_count;
    word_count = 0;
    while(s[i])
    {
        if(s[i] != c && (i == 0 || s[i-1] == c))
        {
            word_count ++;
        }
        i++;
    }
    return(word_count);
}

static char* word_dup(char **str, char c)
{
    char    *s;
    int     last;
    int     i;
    
    s = *str;
    i = 0;
    while( s[i] && s[i] == c)
        i++;
    if(!s[i])
        return(NULL);
    last = i;
    while(s[last] && s[last] != c)
        last++;
    *str += last;
    return(ft_substr(s, i,last - i));   
}
char **ft_split(char const *s, char c)
{
    char	**strs;
	char	*str;
	int		strs_size;
	int		i;

	str = (char *) s;
	strs_size = count_word((char *) s, c) + 1;
	strs = (char **) ft_calloc(sizeof(char *) , strs_size);
	if (!strs)
		return (0);
	i = 0;
	while (i < strs_size)
	{
		strs[i] = word_dup(&str, c);
		if (!strs[i] && i != strs_size - 1)
		{
			get_free(strs, i);
			return (0);
		}
		i++;
	}
	return (strs);
}


