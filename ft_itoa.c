/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzaida <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 20:09:47 by xzaida            #+#    #+#             */
/*   Updated: 2020/11/26 20:30:43 by xzaida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			strlen_nb(int n)
{
	int		len;

	len = 0;
	if (n < 0 || n == 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char				*ft_itoa(int n)
{
	char		*dst;
	int			len;

	len = strlen_nb(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(dst = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (n < 0)
	{
		dst[0] = '-';
		n *= -1;
	}
	if (n == 0)
		dst[0] = '0';
	dst[len] = '\0';
	while (n)
	{
		dst[--len] = n % 10 + '0';
		n = n / 10;
	}
	return (dst);
}
