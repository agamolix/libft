/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <atrilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:44:22 by atrilles          #+#    #+#             */
/*   Updated: 2022/04/19 16:05:32 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (s == 0)
		return (0);
	while (s[0] && s[0] != (char)c)
		s++;
	if (s[0] == (char)c)
		return ((char *)s);
	return (0);
}
