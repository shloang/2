/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 22:19:02 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/12/12 02:38:13 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned char			*d;
	const unsigned char		*s;
	size_t					i;

	d = s1;
	s = s2;
	i = 0;
	if (n >= 1)
	{
		*d = *s;
		i++;
		d++;
	}
	while (n > i && *(s + i - 1) != (unsigned char)c)
	{
		*d = *(s + i);
		d++;
		i++;
	}
	if (*(s + i - 1) == (unsigned char)c)
		return (d);
	return (0);
}
