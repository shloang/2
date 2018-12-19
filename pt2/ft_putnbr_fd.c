#include "../libft.a"

static int	ft_checkint(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2", fd);
		return (147483648);
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		return (n * -1);
	}
	return (n);
}
void				ft_putnbr_fd(int n, int fd)
{
	int	a;
	int	t;

	n = ft_checkint(n, fd);
	a = n;
	t = 1;
	while (a)
	{
		a /= 10;
		t *= 10;
	}
	t /= 10;
	while (t)
	{
		ft_putchar_fd(n / t + '0', fd);
		n %= t;
		t /= 10;
	}
}
