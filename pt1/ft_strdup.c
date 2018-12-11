/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 19:29:45 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/12/11 23:34:09 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(const char *str)
{
	size_t	a;

	a = 0;
	while (*str != 0)
	{
		a++;
		str++;
	}
	return (a);
}

static char		*ft_strcpy(char *a, const char *b)
{
	int		i;

	i = 0;
	while (*b != 0)
	{
		*a = *b;
		a++;
		b++;
		i++;
	}
	*a = 0;
	a -= i;
	return (a);
}

char			*ft_strdup(const char *src)
{
	char *str;

	str = (char *)malloc(sizeof(str) * (ft_strlen(src) + 1));
	ft_strcpy(str, src);
	return (str);
}
