#include "ft_printf.h"
/*




**/
void    check_string(va_list arg, int *count, char *str) 
{
	int			i;
	t_format	type;
	
	i = 0;
	while (*str + i)
	{
		if (*str + i == '%')
			return ;
		i = i + write(1, str + i, 1);
	}
	*count = i;
}

int ft_printf(const char *format, ...)
{
    va_list arg;
    int     count;

    count = 0;
    if (!format)
        return (-1);
    va_start(arg, format);
	check_string(arg, &count, (char *)format);
    va_end(arg);
    return (count);
}

int main()
{
	ft_printf("|dhgkvjkghbjsdvblvckghjblifkcktvygh|%");
}
