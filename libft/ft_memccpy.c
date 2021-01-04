/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzaida <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:58:53 by xzaida            #+#    #+#             */
/*   Updated: 2020/11/23 13:57:44 by xzaida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*d;
	unsigned char		*s;
	unsigned char		smb;

	i = 0;
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	smb = (unsigned char)c;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == smb)
			return (d + i + 1);
		i++;
	}
	return (NULL);
}
