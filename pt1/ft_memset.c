/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 22:29:40 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/11/30 22:29:47 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	char	*c;

	c = ptr;
	while (num > 0)
	{
		*c = value;
		c++;
		num--;
	}
	return (ptr);
}