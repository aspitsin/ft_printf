/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzaida <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:06:53 by xzaida            #+#    #+#             */
/*   Updated: 2020/11/26 20:03:38 by xzaida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *str1, char const *str2)
{
	char	*jnt;
	int		c;
	int		i;
	int		len;

	c = 0;
	i = 0;
	if (str1 == NULL && str2 == NULL)
		return (NULL);
	if (!str1 || !str2)
		return (NULL);
	len = ft_strlen(str1) + ft_strlen(str2) + 1;
	if (!(jnt = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	while (str1[i])
		jnt[c++] = str1[i++];
	i = 0;
	while (str2[i])
		jnt[c++] = str2[i++];
	jnt[c] = '\0';
	return (jnt);
}
