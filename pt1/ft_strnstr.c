/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 15:14:24 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/12/11 23:58:50 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	hp;
	size_t	np;

	hp = 0;
	np = 0;
	if (*to_find == 0)
		return (str);
	while (*(str + hp))
	{
		np = 0;
		while (*(str + hp + np) == *(to_find + np))
		{
			np++;
			if (*(to_find + np) == 0)
				return (str + hp);
		}
		hp++;
	}
	return (0);
}
