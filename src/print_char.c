#include "../ft_printf.h"

int	p_char(va_list arg, t_format *type, int *count)
START
	char	c;
	int		i;

	i = type->wight;
	c = va_arg(arg, int);
	if (!type->wight)
		*count += write(1, &c, 1);
	else
	{
		while(i)
		{
			*count += 1;
			if (i - 1 == 0)
				write(1, &c, 1);
			else
				write(1, " ", 1);
			i--;
		}
	}
	return (0);
END