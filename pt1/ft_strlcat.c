/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 16:41:45 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/12/12 00:52:21 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	d;
	size_t	c;

	c = 0;
	i = 0;
	d = 0;
	while (dest[d])
		d++;
	while (src[c])
		c++;
	while (src[i] && i + d + 1 < size)
	{
		dest[i + d] = src[i];
		i++;
	}
	dest[i + d] = 0;
	if (size < d)
		return (c + size);
	return (c + d);
}
