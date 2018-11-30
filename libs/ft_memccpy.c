/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 22:19:02 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/11/30 22:30:43 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char			*d;
	const char		*s;
	size_t			i;

	d = s1;
	s = s2;
	i = 0;
	if (n >= 1)
	{
		*d = *s;
		i++;
		d++;
	}
	while (n > i && *(s + i - 1) != c)
	{
		*d = *(s + i);
		d++;
		i++;
	}
	if (*(s + i - 1) == c)
		return (d);
	return (0);
}
