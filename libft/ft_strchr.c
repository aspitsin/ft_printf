/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzaida <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:06:22 by xzaida            #+#    #+#             */
/*   Updated: 2020/11/26 16:15:27 by xzaida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *src, int c)
{
	char		*p;
	size_t		i;

	p = (char*)src;
	i = 0;
	if (c == '\0')
	{
		return (p + ft_strlen(src));
	}
	else
	{
		while (p[i] != '\0' && p[i] != c)
		{
			i++;
		}
		if (p[i] != '\0' && p[i] == c)
		{
			return (p + i);
		}
		return (0);
	}
}
