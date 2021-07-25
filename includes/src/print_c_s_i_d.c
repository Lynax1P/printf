#include "../ft_printf.h"

int	p_char(va_list arg, int *count)
{
	char	c;

	c = va_arg(arg, int);
	count += write(1, &c, 1);
	return (0);
}

int	p_str(va_list arg, int *count)
{
	char	*str;
	size_t	len;

	str = (char *)va_arg(arg, void *);
	if (!str)
		str = "(null)";
	input_flags(str, count, 0, 0);
	return (0);
}

int	p_int(va_list arg, int *count)
{
	char	*buf;
	size_t	len;
	int		integer;

	len = 0;
	integer = va_arg(arg, int);
	if (integer == -2147483648)
	{
		*count += write(1, "-2147483648", 11);
		return (0);
	}
	buf = ft_int_wight(integer, &len);
	input_flags(buf, count, 1, len);
	return (0);
}

int	p_unsigned(va_list arg, int *count)
{
	char			buf[30];
	size_t			len;
	unsigned int	unint;

	len = 0;
	unint = va_arg(arg, unsigned int);
	ft_unint_wight(unint, &len, &*buf);
	if (len)
		input_flags(buf, count, 1, len);	
	return (0);
}

