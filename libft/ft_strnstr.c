/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzaida <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:08:27 by xzaida            #+#    #+#             */
/*   Updated: 2020/11/26 23:18:41 by xzaida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	h;
	size_t	str_len;
	size_t	j;

	str_len = ft_strlen(little);
	h = 0;
	if (str_len == 0)
		return ((char *)big);
	while (big[h] && h < len)
	{
		j = 0;
		while (big[h + j] && little[j] && big[h + j] == little[j]
		&& h + j < len)
			j++;
		if (j == str_len)
			return ((char *)big + h);
		h++;
	}
	return (0);
}
