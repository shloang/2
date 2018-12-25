/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/25 02:33:21 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/12/25 03:37:43 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int		ft_getlen(int n)
{
	int		i;

	i = n ? 0 : 1;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	int			i;
	int			sig;
	char		*s;

	i = ft_getlen(n);
	sig = (n < 0) ? -1 : 1;
	i = (n < 0) ? i + 1 : i;
	if ((s = (char *)malloc(i + 1)))
	{
		s[i--] = 0;
		if (!n)
			s[i--] = '0';
		while (n)
		{
			s[i--] = sig * (n % 10) + '0';
			n /= 10;
		}
		if (!i)
			s[i] = '-';
		return (s);
	}
	return (0);
}
