/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 13:59:39 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/12/12 03:37:38 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int to_find)
{
	if (to_find == 0)
	{	
		while (*str)
			str++;
		return (char *)(str);
	}
	while (*(str))
	{
		if (*str == to_find)
			return (char *)(str);
		str++;
	}
	return (0);
}
