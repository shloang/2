#include <strings.h>

void	*ft_memcpy(void *destination, const void *source, size_t num)
{
	const char	*s;
	char				*d;
	size_t			i;

	s = source;
	d = destination;
	i = 0;
	while (num > i)
	{
		*d = *(s + i);
		d++;
		i++;
	}
	return (destination);
}
