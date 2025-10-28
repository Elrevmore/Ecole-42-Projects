#include <stdlib.h>
#include "get_next_line.h"

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

char	*ft_strdup(const char *s1)
{
	size_t len = ft_strlen(s1);
	char *copy = (char *)malloc((len + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	size_t i;
	i = 0;
	while (i < len)
	{
		copy[i] = s1[i];
		i++;
	}
	copy[len] = '\0';
	return (copy);
}


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

