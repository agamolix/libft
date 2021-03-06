/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <atrilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:45:43 by atrilles          #+#    #+#             */
/*   Updated: 2022/04/19 16:05:15 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (s == 0 || f == 0)
		return ;
	i = 0;
	while (s[0])
	{
		f(i, s);
		i++;
		s++;
	}
}
