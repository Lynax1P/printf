#include "ft_printf.h"

int main()
{
	char a[] = "chiugjhjhjghvc";
	char f = '1';
	void *d = a;
	int i = 5;
	unsigned int un = 3002342000;

	printf("\n|%10d| - >\n", printf("%x, %X, %x, %X,%s, %u, %c, %%", i,i,un,un,a,un,f));
}