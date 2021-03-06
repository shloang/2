/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 14:26:22 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/11/25 15:11:54 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char *str, char to_find)
{
	int		*a;

	a = str;
	while (*(str))
	{
		if (*str == to_find)
			a = str;
		str++;
	}
	if (a != to_find)
		return (0);
	return (a);
}
