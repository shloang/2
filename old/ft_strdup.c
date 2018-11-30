/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 19:29:45 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/11/19 20:08:25 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		a;

	a = 0;
	while (*str != 0)
	{
		a++;
		str++;
	}
	return (a);
}

void	ft_strcpy(char *a, char *b)
{
	while (*b != 0)
	{
		*a = *b;
		a++;
		b++;
	}
	*a = 0;
}

char	*ft_strdup(char *src)
{
	char *str;

	str = (char *)malloc(sizeof(str) * (ft_strlen(src) + 1));
	ft_strcpy(str, src);
	return (str);
}
