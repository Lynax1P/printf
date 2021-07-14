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

static void *ft_unint_wight(unsigned int integer, size_t *wight, char *buf)
{
	size_t i;
	
	i = 0;
	while (1)
	{
		buf[i] = integer % 10 + 48;
		integer /= 10;
		i++;
		if ((int)integer - 1 < 0)
			break ;
	}
	buf[i] = 0;
	*wight = i;
}

int	p_unsigned(va_list arg, t_format *type, int *count)
{
	char buf[30];
	size_t wht;
	size_t len;
	unsigned int unint;

	len = 0;
	wht = type->wight;
	unint = va_arg(arg, unsigned int);
	ft_unint_wight(unint, &len, &*buf);
	if (len) {
		if (wht < len)
			put_str(buf, count, 0, len);
		else {
			wht = wht - len;
			put_str(NULL, count, wht, 0);
			put_str(buf, count, 0, len);
		}
		return (0);
	}
	return (1);
}

