/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 20:13:01 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/12/04 20:34:20 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(char const *s)
{
	char	*sn;
	int		l;

	l = 0;
	while (*s != 0 && (*s == ' ' || *s == '\n' || *s == '\t'))
		s++;
	while (*(s + l) != 0)
		l++;
	while (l >= 0 && (*(s + l) == ' ' || *(s + l) == '\n' || *(s + l) == '\t'))
		l--;
	if ((sn = (char *)malloc(l + 1)))
	{
		*(sn + l) = 0;
		while (--l >= 0)
			*(sn + l) = *(s + l);
		return (sn);
	}
	return (0);
}
