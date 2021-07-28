#include "ft_printf.h"

void	nbr_base(unsigned long long hex, size_t *len, \
			char *hex_str, char *hex_buf)
{
	unsigned long long	i;

	i = 0;
	while (*(hex_buf + i) != 0)
		i++;
	while (1)
	{
		if (hex < i)
		{
			hex_str[(*len)++] = *(hex_buf + hex);
			break ;
		}
		else
			hex_str[(*len)++] = *(hex_buf + (hex % i));
		hex /= i;
	}
}

int	p_hex(va_list arg, int *count)
{
	size_t			len;
	unsigned int	unint;
	char			hex_str[30];

	len = 0;
	unint = va_arg(arg, unsigned int);
	nbr_base(unint, &len, &*hex_str, "0123456789abcdef");
	if (len)
		input_flags(hex_str, count, 1, len);
	return (0);
}

int	p_upper_hex(va_list arg, int *count)
{
	size_t			len;
	unsigned int	unint;
	char			hex_str[30];

	len = 0;
	unint = va_arg(arg, unsigned int);
	nbr_base(unint, &len, &*hex_str, "0123456789ABCDEF");
	if (len)
		input_flags(hex_str, count, 1, len);
	return (0);
}

int	p_pointer(va_list arg, int *count)
{
	unsigned long		len;
	unsigned long long	point;
	char				hex_str[30];

	len = 0;
	point = (unsigned long long)va_arg(arg, void *);
	nbr_base(point, &len, &*hex_str, "0123456789abcdef");
	if (len)
	{
		hex_str[len++] = 'x';
		hex_str[len++] = '0';
		input_flags(hex_str, count, 1, len);
	}
	return (0);
}
