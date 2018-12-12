/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 22:28:37 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/12/12 00:49:41 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	const	char	*s;

	i = 0;
	s = str;
	while (n > i)
	{
		if (s[i] == c)
			return ((void *)s + i);
		i++;
	}
	return (0);
}
