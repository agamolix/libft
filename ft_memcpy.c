/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <atrilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:18:25 by atrilles          #+#    #+#             */
/*   Updated: 2022/04/21 15:04:35 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*s1;
	size_t			i;

	s1 = (unsigned char *)dest;
	if (dest == 0 && src == 0)
		return (NULL);
	i = 0;
	while (i < n)
	{
		s1[i] = *(unsigned char *)src;
		src++;
		i++;
	}
	return (dest);
}
