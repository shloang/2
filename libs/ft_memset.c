#include <string.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	char	*c;

	c = ptr;
	while (num > 0)
	{
		*c = value;
		c++;
		num--;
	}
	return (ptr);
}
