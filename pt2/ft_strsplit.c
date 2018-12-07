/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 20:36:19 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/12/07 21:54:21 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int static	ft_skip(char const *s, char c)
{
	int		i;

	i = 0;
	while (*(s + i) == c)
		i++;
	return (i);
}

char const static	*ft_word(char const *s, char c)
{
	while (*s != c && *s != 0)
		s++;
	return (s);
}

int static	ft_count(char const *s, char c)
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
			s = ft_word(s, c);
		}
	}
	return (i);
}

int static	ft_wlen(char const *s, char c)
{
	int		i;

	i = 0;
	while (*(s + i) != c && *(s + i) != 0)
		i++;
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**ss;
	int		i;
	int		j;
	int		k;

	s += ft_skip(s, c);
	i = ft_count(s, c);
	j = 0;
	if ((ss = (char**)malloc(i + 1)))
	{
		ss[i] = 0;
		while (j < i)
		{
			if ((ss[j] = (char*)malloc(ft_wlen(s, c) + 1)))
			{
				k = 0;
				while (k < ft_wlen(s, c))
				{
					ss[j][k] = *(s + k);
					k++;
				}
				s = ft_word(s, c);
				s += ft_skip(s, c);
			}
			else return (0);
			j++;
		}
	}
	else return (0);
	return (ss);
}
