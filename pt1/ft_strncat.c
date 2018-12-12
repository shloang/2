/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 16:10:45 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/12/12 00:53:10 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	size_t		i;
	size_t		d;

	i = 0;
	d = 0;
	while (dest[d])
		d++;
	while (src[i] && i < nb)
	{
		dest[i + d] = src[i];
		i++;
	}
	dest[i + d] = 0;
	return (dest);
}
