#include "../ft_printf.h"

static int	put_str(char *str, int *count, int mod, size_t len)
{
	int i;

	i = len - 1;
	if (mod == 0)
		while(len--)
			*count += write(1, str + i--, 1);
	else 
		while(mod--)
			*count += write(1, " ", 1);
	return (1);
}

static char	*ft_int_wight(int integer, size_t *wight)
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

static int min_int(size_t wht, int *count)
{
	size_t len;

	len = 11;
	if (wht < len)
		*count += write(1, "-2147483648", 11);
	else
	{
		wht = wht - len;
		put_str(NULL, count, wht, len);
		*count += write(1, "-2147483648", 11);;
	}
	return (0);
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
	if (integer == -2147483648)
		return (min_int(wht, count));
	buf = ft_int_wight(integer, &len);
	if (len)
	{
		if (wht < len)
			put_str(buf, count, 0, len);
		else
		{
			wht = wht - len;
			put_str(NULL, count, wht, 0);
			return (!(put_str(buf, count, 0, len)));
		}
	}
	return (0);
}
