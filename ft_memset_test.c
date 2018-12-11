/* memset example */
#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] = "almost every programmer should know memset!";
  ft_memset(str,'-',6);
  puts(str);
  return 0;
}
