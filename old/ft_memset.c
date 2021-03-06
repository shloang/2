/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 12:56:18 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/11/25 13:23:00 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *ptr, int value, unsigned int num)
{
	while (num > 0)
	{
		ptr[num - 1] = value;
		num--;
	}
	return (ptr);
}
