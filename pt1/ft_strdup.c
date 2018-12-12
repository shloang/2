/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 19:29:45 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/12/12 03:13:27 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdup(const char *src)
{
	char	*str;
	int		i;

	i = ft_strlen(src);
	if ((str = (char *)malloc(sizeof(char) * (i + 1))))
	{
		*(str + i) = 0;
		ft_strcpy(str, src);
		return (str);
	}
	return (0);
}
