/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 21:28:28 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/12/12 07:14:53 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*t;
	int		n;

	n = 0;
	if (s)
	{
		while (*(s + n) != 0)
			n++;
		if ((t = (char *)(malloc(n + 1))))
		{
			*(t + n) = 0;
			n--;
			while (n >= 0)
			{
				*(t + n) = f(n, *(s + n));
				n--;
			}
			return (t);
		}
	}
	return (0);
}
