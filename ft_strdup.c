/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzaida <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 15:21:16 by xzaida            #+#    #+#             */
/*   Updated: 2020/11/26 15:25:24 by xzaida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *src)
{
	char		*s;
	char		*dup;
	size_t		c;
	size_t		i;

	s = (char*)src;
	c = ft_strlen(s);
	i = 0;
	dup = (char *)malloc(sizeof(char) * (c + 1));
	if (dup == NULL)
		return (NULL);
	while (i < c)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
