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

int ft_memcmp(const void *s1, const void *s2, size_t n)

{
	if (n == 0)
		return 0;
	while ((((char *)s1)[0] || ((char *)s2)[0]) && n && ((char *)s1)[0] == ((char *)s2)[0])
	{
		s1++;
        s2++;
		n--;
	}
	if (((char *)s1)[0] != ((char *)s2)[0])
		return (((char *)s1)[0] - ((char *)s2)[0]);
	return (0);
}
