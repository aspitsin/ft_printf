/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzaida <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:07:08 by xzaida            #+#    #+#             */
/*   Updated: 2020/11/26 22:31:20 by xzaida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d;

	d = 0;
	i = 0;
	d = ft_strlen(dst);
	if (dstsize > d)
	{
		if (dstsize > d + 1)
		{
			while (i < dstsize - d - 1 && src[i])
			{
				dst[d + i] = src[i];
				i++;
			}
			dst[d + i] = '\0';
		}
	}
	if (dstsize < d)
	{
		d = dstsize;
	}
	return (d + ft_strlen(src));
}
