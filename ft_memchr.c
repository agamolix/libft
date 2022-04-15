/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/02 11:06:29 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	c2;
	unsigned char	*s2;

	if (s == 0 || n == 0)
		return 0;
	c2 = (unsigned char)c;
	s2 = (unsigned char *)s;
	n--;
	while (n && s2[0] != c2)
//	while (s2[0] && n && s2[0] != c2)
	{
		s2++;
		n--;
	}
	if (s2[0] == c2)
		return ((void *)s2);
	return (0);
}
