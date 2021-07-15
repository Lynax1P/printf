#include "../ft_printf.h"

static int	put_str(char *str, int *count, int mod)
{
	int	i;

	i = 0;
	if (mod == 0)
		while(str[i] != 0)
			*count += write(1, str + i++, 1);
	else 
		while(mod--)
			*count += write(1, " ", 1);
	return (0);
}

size_t	ft_strlen(char *str1)
{
	size_t	i;

	if (!str1)
		return (0);
	i = 0;
	if (str1)
		while (str1[i] != 0)
			i++;
	return (i);
}

int	p_str(va_list arg, t_format *type, int *count)
START
	char	*str;
	size_t	wht;
	size_t	len;
	

	wht = type->wight;
	str = va_arg(arg, char *);
	if (!str)
		str = "(null)";
	len = ft_strlen(str);
	if (len)
	{
		if (wht < len)
			put_str(str, count, 0);
		else
		{
			wht = wht - len;
			put_str(NULL, count, wht);
			return (put_str(str, count, 0));
		}
	}
	return (0);
END

