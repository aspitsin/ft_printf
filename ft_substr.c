/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:09:42 by xzaida            #+#    #+#             */
/*   Updated: 2021/01/05 19:02:59 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char			*ft_substr(const char *src, unsigned int start, size_t len)
{
	char		*sub;
	size_t		i;

	i = 0;
	/*if (len < 0)
		return (NULL);*/
	if (src == NULL)
		return (NULL);
	if (start >= ft_strlen(src))
		len = 0;
	if (!(sub = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < len && src[start + i] != '\0')
	{
		sub[i] = src[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
