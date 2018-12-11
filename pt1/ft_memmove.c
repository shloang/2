/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 22:29:30 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/12/12 00:50:55 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t num)
{
	char				*d;
	const char			*s;
	char				buf[num];
	size_t				i;

	d = destination;
	s = source;
	i = 0;
	while (i < num)
	{
		buf[i] = *(s + i);
		i++;
	}
	i = 0;
	while (i < num)
	{
		*(d + i) = buf[i];
		i++;
	}
	return (destination);
}
