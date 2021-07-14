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

void	find_hex(size_t hex, int *len, char *hex_str)
{
	char	buf[16] = "0123456789abcdef";
	int		digit;
	int		i;

	digit = 0;
	i = 0;
	while (hex > 16 * i)
		i += 1;
	digit = hex - 16 * --i;
	hex_str[*len] = buf[digit];
	*len += 1;
	if (i > 16)
		find_hex(i, len, hex_str);
	else
		hex_str[(*len)++] = buf[i];
	return ;
}

int	p_hex(va_list arg, t_format *type, int *count)
START
	size_t			wht;
	size_t			len;
	unsigned int	unint;
	char			hex_str[30];

    len = 0;
	wht = type->wight;
	unint = va_arg(arg, int);
	find_hex(unint, &len, &hex_str);
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
END

