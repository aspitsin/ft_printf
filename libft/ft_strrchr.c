/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzaida <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:08:47 by xzaida            #+#    #+#             */
/*   Updated: 2020/11/26 16:34:20 by xzaida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *src, int c)
{
	char			*p;
	size_t			i;
	size_t			len;

	p = (char *)src;
	len = ft_strlen(src);
	i = 0;
	if (c == '\0')
	{
		return (p + len);
	}
	else
	{
		while (p[i] != '\0')
		{
			i++;
		}
		while (p[i] != c && i > 0)
		{
			i--;
		}
		if (p[i] == c)
			return (p + i);
		return (0);
	}
}
