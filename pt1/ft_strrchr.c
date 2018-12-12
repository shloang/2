/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 14:26:22 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/12/12 03:41:37 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int to_find)
{
	const char	*a;

	a = str;
	if (to_find == 0)
	{	
		while (*str)
			str++;
		return (char *)(str);
	}
	while (*(str))
	{
		if (*str == to_find)
			a = str;
		str++;
	}
	if (*a != to_find)
		return (0);
	return (char *)(a);
}
