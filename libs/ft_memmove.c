#include <string.h>

void *ft_memmove (void *destination, const void *source, size_t num)
{
	char				*d;
	const char	*s;
	char				buf[num];
	int					i;

	d = destination;
	s = source;
	i = 0;
	while (i < num)
	{
		buf[i] = *(s + i);
		i++;
	}
	i = 0;
	while (i < num)
	{
		*(d + i) = buf[i];
		i++;
	}
	return (destination);
}
