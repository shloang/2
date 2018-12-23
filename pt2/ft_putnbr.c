/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 22:40:06 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/12/23 22:57:29 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int			ft_checkint(int n)
{
	if (n == -2147483648)
	{
		ft_putstr("-2");
		return (147483648);
	}
	if (n < 0)
	{
		ft_putchar('-');
		return (n * -1);
	}
	return (n);
}

void				ft_putnbr(int n)
{
	int	a;
	int	t;

	n = ft_checkint(n);
	a = n;
	t = 1;
	while (a)
	{
		a /= 10;
		t *= 10;
	}
	t /= 10;
	while (t)
	{
		ft_putchar(n / t + '0');
		n %= t;
		t /= 10;
	}
}
