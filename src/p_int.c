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

char	*ft_int_wight(int integer, size_t *wight)
{
	size_t i;
	char	buf[30];
	char	*point;
	int		flag;

	i = 0;
	flag = 0;
	point = &(*buf);
	if (integer < 0)
		integer *= -1 * !(flag == 0 && flag++);
	while (1)
	{
		buf[i] = integer % 10 + 48;
		integer /= 10;
		i++;
		if (integer - 1 < 0)
			break ;
	}
	if (flag == 1)
		buf[i++] = '-';
	buf[i] = 0;
	*wight = i;
	return (point);
}

int	p_int(va_list arg, t_format *type, int *count)
{
	char	*buf;
	size_t	wht;
	size_t	len;
	int     integer;

    len = 0;
	wht = type->wight;
	integer = va_arg(arg, int);
	buf = ft_int_wight(integer, &len);
	if (len)
	{
		if (wht < len)
			put_str(buf, count, 0, len);
		else
		{
			wht = wht - len;
			put_str(NULL, count, wht, 0);
			put_str(buf, count, 0, len);
		}
		return (0);
	}
	return (1);
}
