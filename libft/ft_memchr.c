/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzaida <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:04:01 by xzaida            #+#    #+#             */
/*   Updated: 2020/11/23 15:04:07 by xzaida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *src, int c, size_t len)
{
	unsigned char		*s;
	unsigned char		smb;

	smb = (unsigned char)c;
	s = (unsigned char*)src;
	while (len--)
	{
		if (*s == smb)
			return ((void*)(s));
		s++;
	}
	return (NULL);
}
