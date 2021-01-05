/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzaida <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 18:08:51 by xzaida            #+#    #+#             */
/*   Updated: 2020/11/26 21:32:15 by xzaida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int				words(const char *s, char c)
{
	int		i;
	int		w;

	i = 0;
	w = 0;
	if (s == NULL || s[0] == '\0')
		return (0);
	if (s[0] == c)
		i = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i - 1] != c)
			w++;
		i++;
	}
	if (s[ft_strlen(s) - 1] != c)
		w++;
	return (w);
}

static int				len_word(const char *s, char c, int i)
{
	int		l;

	l = 0;
	if (s == NULL)
		return (0);
	while (s[i] != c && s[i] != '\0')
	{
		l++;
		i++;
	}
	return (l);
}

void					mem_free(char **s)
{
	while (*s)
		free(*s++);
	free(s);
}

char					**ft_split(char const *s, char c)
{
	char		**dst;
	int			i;
	int			j;
	int			len;

	i = 0;
	j = 0;
	len = 0;
	if (!(dst = (char**)malloc(sizeof(char*) * (words(s, c) + 1))))
		return (NULL);
	while (i < words(s, c) && s[j] != '\0')
	{
		if (s[j] != c)
		{
			len = len_word(s, c, j);
			if (!(dst[i++] = ft_substr(s, j, len)))
				mem_free(dst);
			j = j + len;
		}
		j++;
	}
	dst[i] = NULL;
	return (dst);
}
