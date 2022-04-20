/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <atrilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:57:26 by atrilles          #+#    #+#             */
/*   Updated: 2022/04/19 16:34:26 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	if (size && nmemb > (size_t)-1 / size)
		return (0);
	str = malloc(size * nmemb);
	if (str == 0)
		return (0);
	ft_memset(str, 0, size * nmemb);
	return (str);
}
