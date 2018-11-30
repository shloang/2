#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	const	char	*s;

	i = 0;
	s = str;
	while (n > i)
	{
		if (s[i] == c)
			return ((void *)s + i);
		i++;
	}
	return (0);
}
