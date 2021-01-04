/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzaida <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:08:06 by xzaida            #+#    #+#             */
/*   Updated: 2020/11/26 23:23:53 by xzaida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char		*str1;
	char		*str2;
	size_t		i;

	str1 = (char*)s1;
	str2 = (char*)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		}
		if (str1[i] != '\0' && str2[i] != '\0')
			i++;
		if (str1[i] == '\0' && str2[i] == '\0')
			break ;
	}
	return (0);
}
