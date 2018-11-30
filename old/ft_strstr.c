/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 11:40:15 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/08/28 12:14:01 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		hp;
	int		np;

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
