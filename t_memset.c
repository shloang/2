#include <stdio.h>
#include <string.h>
void *ft_memset(void *ptr, int value, unsigned int num);
int	main(void)
{
	char str[] = "almost every";
	ft_memset(str, '-', 6);
	puts (str);
	return (0);
}
