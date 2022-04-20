/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <atrilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:37:01 by atrilles          #+#    #+#             */
/*   Updated: 2022/04/20 13:25:37 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*s2;
	int		i;

	if (b == 0)
		return (0);
	s2 = b;
	i = 0;
	while (len)
	{
		s2[i] = c;
		i++;
		len--;
	}
	return (b);
}
