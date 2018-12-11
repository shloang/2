/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 22:29:21 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/11/30 22:30:25 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	*ft_memcpy(void *destination, const void *source, size_t num)
{
	const char	*s;
	char		*d;
	size_t		i;

	s = source;
	d = destination;
	i = 0;
	while (num > i)
	{
		*d = *(s + i);
		d++;
		i++;
	}
	return (destination);
}
