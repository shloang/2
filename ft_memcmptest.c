#include <stdio.h>
#include <string.h>

int main ()
{
		char buffer1[] = "DWgAOTP12DF0";
		char buffer2[] = "DWGaOTP12DF0";

		  int n;
			n=memcmp( buffer1, buffer2, sizeof(buffer1) );

			  if (n>0) printf ("'%s' is greater than '%s'.\n",buffer1,buffer2);
			    else if (n<0) printf ("'%s' is less than '%s'.\n",buffer1,buffer2);
				  else printf ("'%s' is the same as '%s'.\n",buffer1,buffer2);
			printf("\n");
		    n=ft_memcmp( buffer1, buffer2, sizeof(buffer1) );

			  if (n>0) printf ("'%s' is greater than '%s'.\n",buffer1,buffer2);
			    else if (n<0) printf ("'%s' is less than '%s'.\n",buffer1,buffer2);
				  else printf ("'%s' is the same as '%s'.\n",buffer1,buffer2);

				    return 0;
}
