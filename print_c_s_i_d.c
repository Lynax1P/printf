#include "ft_printf.h"

int	p_char(va_list arg, int *count)
{
	char	c;

	c = va_arg(arg, int);
	*count += write(1, &c, 1);
	return (0);
}

int	p_str(va_list arg, int *count)
{
	char	*str;

	str = (char *)va_arg(arg, void *);
	if (!str)
		str = "(null)";
	input_flags(str, count, 0, 0);
	return (0);
}

int	p_int(va_list arg, int *count)
{
	char	buf[30];
	size_t	len;
	int		integer;
	int		flag;

	len = 0;
	flag = len;
	integer = va_arg(arg, int);
	if (integer == -2147483648)
		*count += write(1, "-2147483648", 11);
	else
	{
		if (integer < 0)
			integer *= -1 * !(flag == 0 && flag++);
		nbr_base(integer, &len, &*buf, "0123456789");
		if (len)
		{
			if (flag == 1)
				buf[(len)++] = '-';
			input_flags(buf, count, 1, len);
		}
	}
	return (0);
}

int	p_unsigned(va_list arg, int *count)
{
	char			buf[30];
	size_t			len;
	unsigned int	unint;

	len = 0;
	unint = va_arg(arg, unsigned int);
	nbr_base(unint, &len, &*buf, "0123456789");
	if (len)
		input_flags(buf, count, 1, len);
	return (0);
}

int	input_flags(char *str, int *count, int mod, size_t len)
{
	int	i;

	i = 0;
	if (mod == 0)
		while (str[i] != 0)
			*count += write(1, str + i++, 1);
	else
	{	
		i = len - 1;
		while (len--)
			*count += write(1, str + i--, 1);
	}
	return (0);
}
