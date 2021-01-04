/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzaida <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 14:36:07 by xzaida            #+#    #+#             */
/*   Updated: 2020/11/26 14:36:34 by xzaida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (d < s)
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	else
	{
		while (len--)
		{
			d[len] = s[len];
		}
	}
	return (dst);
}
