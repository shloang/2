/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 22:28:53 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/12/12 03:01:20 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int					i;
	const unsigned char	*t1;
	const unsigned char	*t2;

	i = 0;
	t1 = s1;
	t2 = s2;
	while (n > 0 && *t1 == *t2)
	{
		t1++;
		t2++;
		n--;
	}
	if (n <= 0)
		return (0);
	i = *t1 - *t2;
	return (i);
}
