/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:02:12 by lemarino          #+#    #+#             */
/*   Updated: 2025/01/21 12:40:52 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	chr;

	chr = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == chr)
			return ((char *)&s[i + 1]);// i + 1 returns the string starting AFTER 'chr'
		i++;
	}
	if (chr == 0)
		return ((char *)(s));
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t			i;
	size_t			j;
	char			*new;

	i = 0;
	j = 0;
	new = malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new)
		return (NULL);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new[i] = s2[j];
		j++;
		i++;
	}
	new[i] = '\0';
	free(s1);
	return (new);
}

size_t	ft_strlen(const char *s)
{
	size_t	l;

	l = 0;
	if (!s)
		return (0);
	while (s[l])
		l++;
	return (l);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*str;
	size_t			i;
	unsigned char	*c;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	str = malloc((nmemb * size));
	if (!str)
		return (NULL);
	i = 0;
	c = (unsigned char *)str;
	while (i < (nmemb * size))
		c[i++] = '\0';
	return (str);
}

char	*ft_strdup(const char *s)
{
	char		*src;
	char		*dst;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	src = (char *)s;
	while (src[j])
		j++;
	dst = malloc(j + 1);
	if (!(dst))
		return (NULL);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
