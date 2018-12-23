/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 20:52:18 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/12/23 22:50:10 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_sign_itoa(int num)
{
	if (num < 0)
		return (1);
	return (0);
}

char		*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		num;

	num = n;
	i = ft_sign_itoa(num);
	num *= i * (-1);
	while (num > 0)
	{
		num /= 10;
		i++;
	}
	s = (char *)malloc(i + 1);
	s[i] = 0;
	i--;
	while (i >= 0 && n > 0)
	{
		s[i--] = n % 10;
		n /= 10;
	}
	if (i == 0)
		s[i] = '-';
	return (s);
}
