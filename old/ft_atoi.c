/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 13:56:15 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/08/28 11:33:16 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	long long	num;
	int			i;

	i = 0;
	num = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	while (*str == '0')
		str++;
	if (*str == 0)
		return (0);
	if (*str == '-' || *str == '+')
		i++;
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		num = (num * 10) + (*(str + i) - '0');
		i++;
	}
	if (*(str) == '-')
		num = -num;
	return (num);
}
