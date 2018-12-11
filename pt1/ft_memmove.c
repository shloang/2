/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 22:29:30 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/12/12 02:29:52 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t num)
{
	char				*d;
	const char			*s;
	size_t				i;

	d = destination;
	s = source;
	i = 0;
	if (d >= s && d <= s + num)
		while (num > 0)
		{
			*(d + num - 1) = *(s + num - 1);
			num--;
		}
	else
		while (i < num)
		{
			*(d + i) = *(s + i);
			i++;
		}
	return (destination);
}
