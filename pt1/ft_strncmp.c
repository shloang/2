/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 13:21:43 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/12/12 06:10:47 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	n--;
	while ((unsigned char)*(s1 + i) == (unsigned char)*(s2 + i) &&
			*(s1 + i) != 0 && *(s2 + i) != 0 && i < n)
		i++;
	return (int)((unsigned char)*(s1 + i) - (unsigned char)*(s2 + i));
}
