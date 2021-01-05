/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 23:37:02 by xzaida            #+#    #+#             */
/*   Updated: 2021/01/05 19:03:50 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int     ft_printf(const char *format, ...);
char	*ft_itoa(int n);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
void	ft_putchar_fd(char c, int fd);
char    *ft_itoa_hex(unsigned long n, int base, char sign);
int		ft_tolower(int c);
char	**ft_split(char const *s, char c);
char	*ft_substr(const char *src, unsigned int start, size_t len);

#endif
