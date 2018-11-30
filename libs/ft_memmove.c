/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 22:29:30 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/11/30 22:32:13 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *destination, const void *source, size_t num)
{
	char				*d;
	const char			*s;
	char				buf[num];
	int					i;

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
