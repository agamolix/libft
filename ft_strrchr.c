/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <atrilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:01:02 by atrilles          #+#    #+#             */
/*   Updated: 2022/04/19 16:01:19 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s2;

	if (s == 0)
		return (0);
	s2 = (char *)s;
	while (s2[0])
		s2++;
	while (s < s2 && s2[0] != (char)c)
		s2--;
	if (s2[0] == (char)c)
		return (s2);
	return (0);
}
