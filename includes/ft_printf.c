#include "ft_printf.h"

static int	find_function(va_list arg, t_format *type, int *count)
{
	char	flag;

	flag = type->type;
	if (flag == 'c')
		return (p_char(arg, count));
	else if (flag == 's')
		return (p_str(arg, count));
	else if (flag == 'd' || flag == 'i')
		return (p_int(arg, count));
	else if (flag == 'p')
		return (p_pointer(arg, count));
	else if (flag == 'u')
		return (p_unsigned(arg, count));
	else if (flag == 'x')
		return (p_hex(arg, count));
	else if (flag == 'X')
		return (p_upper_hex(arg, count));
	return (0);
}

static int	check_flag(char *str, t_format *type)
{
	if (*str == 'i' || *str == 'd' || *str == 'c' || *str == 's' || \
		*str == 'p' || *str == 'x' || *str == 'X' || *str == 'u')
	{
		type->type = *str;
		return (1);
	}
	return (0);
}

int	start_print(va_list arg, int *count, char *str, t_format *type)
{
	if (*str == '%')
	{
		if (*(str + 1) == '%')
		{	
			*count += write(1, "%", 1);	
			return (2);
		}
		if (!check_flag(str + 1, type))
			return (0);
		find_function(arg, type, count);
	}
	return (2);
}

static void	check_string(va_list arg, int *count, char *str)
{
	int			i;
	int			chk_exc;
	t_format	type;

	i = 0;
	chk_exc = 0;
	while (str[i] != 0)
	{
		chk_exc = i;
		type.type = 0;
		if (str[i] == '%')
		{	
			i += start_print(arg, count, str + i, &type);
			if (chk_exc == i)
				return ;
			continue;
		}
		if (str[i] != 0)
			*count +=  write(1, str + i++, 1);
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		count;

	count = 0;
	if (!format)
		return (-1);
	va_start(arg, format);
	check_string(arg, &count, (char *)format);
	va_end(arg);
	return (count);
}
