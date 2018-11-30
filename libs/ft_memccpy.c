#include <string.h>

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char				*d;
	const char	*s;
	size_t			i;

	d = s1;
	s = s2;
	i = 0;
	if (n >= 1)
	{
		*d = *s;
		i++;
		d++;
	}
	while (n > i && *(s + i - 1) != c)
	{
		*d = *(s + i);
		d++;
		i++;
	}
	if (*(s + i - 1) == c)
		return (d);
	return (0);
}
