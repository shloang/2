/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 15:14:24 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/12/12 03:50:42 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	hp;
	size_t	np;

	hp = 0;
	np = 0;
	if (*to_find == 0)
		return (char *)(str);
	while (*(str + hp))
	{
		np = 0;
		while (*(str + hp + np) == *(to_find + np) && hp + np < len)
		{
			np++;
			if (*(to_find + np) == 0)
				return (char *)(str + hp);
		}
		hp++;
	}
	return (0);
}
