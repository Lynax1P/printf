#include "../ft_printf.h"

static void	put_str(char *str, int *count, int mod)
{
	int	i;

	i = 0;
	if (mod == 0)
		while(str[i] != 0)
			*count += write(1, str + i++, 1);
	else 
		while(mod--)
			*count += write(1, " ", 1);

}

int	p_str(va_list arg, t_format *type, int *count)
START
	char	*str;
	size_t	wht;
	size_t	len;
	

	wht = type->wight;
	str = va_arg(arg, char *);
	len = ft_strlen(str);
	if (len)
	{
		if (wht < len)
			put_str(str, count, 0);
		else
		{
			wht = wht - len;
			put_str(NULL, count, wht);
			put_str(str, count, 0);
		}
		return (0);
	}
	return (1);
END

