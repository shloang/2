/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 19:29:45 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/12/12 00:59:21 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdup(const char *src)
{
	char *str;

	str = (char *)malloc(sizeof(str) * (ft_strlen(src) + 1));
	ft_strcpy(str, src);
	return (str);
}
