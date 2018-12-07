char **ft_strsplit(char const *s, char c);
int main(void)
{
	char **s;
	s = ft_strsplit("*hello*fellow***students*", '*');
	while (*s != 0)
	{
		while (**s != 0)  
		{
			printf("%c", **s);
			(*s)++;
		}
		s++;
	}
}
