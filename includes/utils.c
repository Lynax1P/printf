#include "ft_printf.h"

int	input_flags(char *str, int *count, int mod, size_t len)
{
	int	i;

	i = 0;
	if (mod == 0)
		while (str[i] != 0)
			*count += write(1, str + i++, 1);
	if (mod != 0)
		while (len--)
			*count += write(1, str + i--, 1);
	return (0);
}

void	ft_unint_wight(unsigned int integer, size_t *wight, char *buf)
{
	size_t	i;

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

char	*ft_int_wight(int integer, size_t *wight)
{
	size_t	i;
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

static void	hex_point_ft(unsigned int hex, size_t *len, char *hex_str, char *hex_buf)
{
	while (1)
	{
		if (hex < 16)
		{
			hex_str[(*len)++] = hex_buf[hex];
			return ;
		}
		else
			hex_str[(*len)++] = hex_buf[hex % 16];
		hex /= 16;
	}
}
