#include "../ft_printf.h"

static int	put_str(char *str, int *count, int mod, size_t len)
{
	int	i;

	i = len - 1;
	if (mod == 0)
		while (len--)
			*count += write(1, str + i--, 1);
	else
		while (mod--)
			*count += write(1, " ", 1);
	return (1);
}

static void	hex_point_ft(unsigned long long hex, unsigned int *len, \
								char *hex_str)
{
	char	*hex_buf;

	hex_buf = "0123456789abcdef";
	while (1)
	{
		if (hex < 16)
		{
			hex_str[(*len)++] = hex_buf[hex];
			hex_str[(*len)++] = 'x';
			hex_str[(*len)++] = '0';
			return ;
		}
		else
			hex_str[(*len)++] = hex_buf[hex % 16];
		hex /= 16;
	}
}

int	p_pointer(va_list arg, int *count)
{
	long long			wht;
	unsigned int		len;
	unsigned long long	point;
	char				hex_str[30];

	len = 0;
	wht = type->wight;
	point = (unsigned long long)va_arg(arg, void *);
	hex_point_ft(point, &len, &*hex_str);
	if (len)
	{
		if (wht < len)
			put_str(hex_str, count, 0, len);
		else
		{
			wht = wht - len;
			put_str(NULL, count, wht, 0);
			put_str(hex_str, count, 0, len);
		}
	}
	return (0);
}
