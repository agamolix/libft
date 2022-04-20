/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <atrilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:37:01 by atrilles          #+#    #+#             */
/*   Updated: 2022/04/19 14:37:27 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*s2;
	int		i;

	if (s == 0)
		return (0);
	s2 = s;
	i = 0;
	while (n)
	{
		s2[i] = c;
		i++;
		n--;
	}
	return (s);
}
