#include "ft_printf.h"
# define START {
# define END }


void	find_function(va_list arg, t_format *type,  int *count)
START
	char	flag;

	flag = type->type;
	if (flag == 'c')
		p_char(arg, type, count);
	else if (flag == 's')
		p_str(arg, type, count);
	else if (flag == 'd' || flag == 'i')
		p_int(arg, type, count);
	else if (flag == 'p')
		p_pointer(arg, type, count);
	else if (flag == 'u')
		p_unsigned(arg, type, count);
	else if (flag == 'x')
		p_hex(arg, type, count);
	else if (flag == 'X')
		p_upper_hex(arg, type, count);
	else if (flag == 'n')
		p_nvalues(arg, count);
END

int check_flag(char *str, int *count, t_format *type)
START
	if (*str == 'i' || *str == 'd' ||  *str == 'c' || *str == 's' || *str == 'p' || \
		*str == 'x' || *str == 'X' || *str == 'n' || *str == 'u')
	{
		type->type = *str;
		return (1);
	}
	return (0);
END

int	check_wight(char *str, int *count, t_format *type)
START
	int 	i;
	int		flag;

	i = 0;
	flag = 0;
	type->wight = 0;
	while (str[i] == '%' || (str[i] >= '0' && str[i] >= '9'))
	START
		if (str[i] == '%')
			flag++;
		if (flag == 2)
		{
			write(1, "%", 1);
			*count += 1;
			return (1) ;
		}
		if (flag == 1)
			type->wight = type->wight * 10 + str[i] + 48;
		i++;
	END
	return (i);
END

void    check_string(va_list arg, int *count, char *str) 
START
	int			i;
	int			chk_exc;
	t_format	*type;
	
	i = 0;
	chk_exc = 0;
	while (str[i] != 0)
	START
		if (*str + i == '%')
		{
			chk_exc = *count;
			i += check_wight(str[i], count, type);
			if (chk_exc != *count)
				continue ;
			if (!check_flag(str[i], count, type))
				return ;
			find_function(arg, type, *count);
		}
		i += write(1, str + i, 1);
		(*count)++;
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
	ft_printf("|dhgkvjkghbjsdvblvckghjblifkcktvygh|");
}
