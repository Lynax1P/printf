#include "ft_printf.h"

void	null_struct(t_format *type)
{
	type->wight = 0;
	type->zero = 0;
	type->type = 0;
	type->minus = 0;
}

int		find_function(va_list arg, t_format *type,  int *count)
START
	char	flag;

	flag = type->type;
	if (flag == 'c')
		return (!(p_char(arg, type, count)));
	else if (flag == 's')
		return(!(p_str(arg, type, count)));
	else if (flag == 'd' || flag == 'i')
		return (!(p_int(arg, type, count)));
//	else if (flag == 'p')
//		p_pointer(arg, type, count);
	else if (flag == 'u')
		p_unsigned(arg, type, count);
	else if (flag == 'x')
		p_hex(arg, type, count);
//	else if (flag == 'X')
//		p_upper_hex(arg, type, count);
END

int check_flag(char *str, int *count, t_format *type)
{
	if (*str == 'i' || *str == 'd' || *str == 'c' || *str == 's' ||
		*str == 'p' || \
        *str == 'x' || *str == 'X' || *str == 'n' || *str == 'u') {
		type->type = *str;
		return (1);
	}
	return (0);
}

int	check_wight(char *str, int *count, t_format *type)
START
	int 	i;
	int		flag;

	i = 0;
	flag = 0;
	null_struct(type);
	while (str[i] == '%' || (str[i] >= '0' && str[i] <= '9'))
	START
		if (str[i] == '%')
			++flag && ++i;
		if (flag == 1 && str[i] == '%')
		{
			*count += write(1, "%", 1);
			return (i + 1);
		}
		if (flag == 1 && str[i] >= '0' && str[i] <= '9')
			type->wight = type->wight * 10 + str[i++] - 48;
	END
	return (i);
END

void    check_string(va_list arg, int *count, char *str) 
START
	int			i;
	int			chk_exc;
	t_format	type;
	
	i = 0;
	chk_exc = 0;
	while (str[i] != 0)
	START
		if (str[i] == '%')
		{
			chk_exc = *count;
			i += check_wight(&str[i], count, &type);
			if (chk_exc != *count)
				continue ;
			if (!check_flag(&str[i], count, &type))
				return ;
			i += find_function(arg, &type, count);
		}
		if (str[i] != 0)
		{
			i += write(1, str + i, 1);
			*count += 1;
		}
	END
END

int ft_printf(const char *format, ...)
START
    va_list arg;
    int     count;

    count = 0;
    if (!format)
        return (-1);
    va_start(arg, format);
	check_string(arg, &count, (char *)format);
    va_end(arg);
    return (count);
END

int main()
{
	unsigned int i = 111111111;
	printf("%d", ft_printf("|%1x|\n", i));
}
