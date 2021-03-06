/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 20:36:19 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/12/10 17:57:45 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int			ft_skip(char const *s, char c)
{
	int		i;

	i = 0;
	while (*(s + i) == c)
		i++;
	return (i);
}

static int			ft_count(char const *s, char c)
{
	int		i;

	i = 0;
	while (*s != 0)
	{
		if (*s == c)
			s += ft_skip(s, c);
		if (*s != 0)
		{
			i++;
			while (*s != c && *s != 0)
				s++;
		}
	}
	return (i);
}

static int			ft_wlen(char const *s, char c)
{
	int		i;

	i = 0;
	while (*(s + i) != c && *(s + i) != 0)
		i++;
	return (i);
}

static void			ft_fill(char **ss, int j, char const **s, char c)
{
	int		k;

	k = 0;
	*s += ft_skip(*s, c);
	while (k < ft_wlen(*s, c))
	{
		ss[j][k] = *(*s + k);
		k++;
	}
	while (**s != c && **s != 0)
		(*s)++;
}

char				**ft_strsplit(char const *s, char c)
{
	char	**ss;
	int		i;
	int		j;

	i = ft_count(s, c);
	j = 0;
	if ((ss = (char**)malloc(i + 1)))
	{
		ss[i] = 0;
		while (j < i)
		{
			if ((ss[j] = (char*)malloc(ft_wlen(s, c) + 1)))
				ft_fill(ss, j, &s, c);
			else
				return (0);
			j++;
		}
	}
	else
		return (0);
	return (ss);
}
