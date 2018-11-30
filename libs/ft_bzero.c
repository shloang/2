#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	char	*c;

	c = s;
	while (n > 0)
	{
		*c = 0;
		c++;
		n--;
	}
}
