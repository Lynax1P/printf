#include "../ft_printf.h"

size_t	ft_strlen(char *str1)
{
	size_t	i;

	if (!str1)
		return (0);
	i = 0;
	if (str1)
		while (str1[i] != 0)
			i++;
	return (i);
}
