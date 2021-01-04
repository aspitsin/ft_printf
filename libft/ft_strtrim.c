/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzaida <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:09:07 by xzaida            #+#    #+#             */
/*   Updated: 2020/11/26 18:18:07 by xzaida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int				ft_strtrim_left(char const *src, char const *set)
{
	int			i;
	int			j;

	i = 0;
	j = 0;
	if (!src)
		return (0);
	while (src[i] != '\0')
	{
		while (set[j] != '\0')
		{
			while (src[i] == set[j])
			{
				i++;
				j = 0;
			}
			j++;
		}
		break ;
	}
	return (i);
}

static int				ft_strtrim_right(char const *src, char const *set)
{
	int		i;
	int		j;
	int		l;

	l = 0;
	j = 0;
	if (!src)
		return (0);
	i = ft_strlen(src) - 1;
	while (i > 0)
	{
		while (set[j])
		{
			while (src[i] == set[j] && i > 0)
			{
				l++;
				i--;
				j = 0;
			}
			j++;
		}
		break ;
	}
	return (l);
}

char					*ft_strtrim(char const *s1, char const *set)
{
	int		left;
	int		right;
	int		len;
	int		diff;
	char	*res;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return ((char*)s1);
	left = ft_strtrim_left(s1, set);
	right = ft_strtrim_right(s1, set);
	len = ft_strlen(s1);
	diff = len - left - right;
	if (diff < 0)
		diff = 0;
	res = ft_substr(s1, left, diff);
	return (res);
}
