#include "../ft_printf.h"

static void	put_str(char *str, int *count, int mod, size_t len)
{
	int i;

	i = len - 1;
	if (mod == 0)
		while(len--)
			*count += write(1, str + i--, 1);
	else
		while(mod--)
			*count += write(1, " ", 1);

}

static void hex_point_ft(unsigned int hex, size_t *len, char *hex_str)
{
	char hex_buf[16] = "0123456789abcdef";

	while (1) {
		if (hex < 16) {
			hex_str[(*len)++] = hex_buf[hex];
			return;
		} else
			hex_str[(*len)++] = hex_buf[hex % 16];
		hex /= 16;
	}
}

int	p_upper_hex(va_list arg, t_format *type, int *count)
{
	size_t			wht;
	size_t			len;
	unsigned int	unint;
	char			hex_str[30];

	len = 0;
	wht = type->wight;
	unint = va_arg(arg, unsigned int);
	hex_point_ft(unint, &len, &*hex_str);
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
		return (0);
	}
	return (1);
}

