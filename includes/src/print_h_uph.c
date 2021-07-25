#include "../ft_printf.h"

int	p_hex(va_list arg, int *count)
{

	size_t			len;
	unsigned int	unint;
	char			hex_str[30];
	char			*hex_buf;

	len = 0;
	hex_buf = "0123456789abcdef";
	unint = va_arg(arg, unsigned int);
	hex_point_ft(unint, &len, &*hex_str, hex_buf);
	if (len)
		input_flags(hex_str, count, 1, len);
	return (0);
}

int	p_upper_hex(va_list arg, int *count)
{
	size_t			len;
	unsigned int	unint;
	char			hex_str[30];
	char			*hex_buf;

	len = 0;
	hex_buf = "0123456789ABCDEF";
	unint = va_arg(arg, unsigned int);
	hex_point_ft(unint, &len, &*hex_str, hex_buf);
	if (len)
		input_flags(hex_str, count, 1, len);
	return (0);
}