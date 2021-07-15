#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

# define START {
# define END }

typedef struct s_type_flags
{
		char    type;
		size_t	wight;
}               t_format;

int			p_hex(va_list arg, t_format *type, int *count);
int			p_upper_hex(va_list arg, t_format *type, int *count);
int			ft_printf(const char *format, ...);
int			p_char(va_list arg, t_format *type, int *count);
int			p_str(va_list arg, t_format *type, int *count);
int			p_int(va_list arg, t_format *type, int *count);
int			p_unsigned(va_list arg, t_format *type, int *count);
size_t		ft_strlen(char *str1);
int			fill_str_hex(size_t hex, int *len, char *hex_str, char *hex_buf);
int			p_pointer(va_list arg, t_format *type, int *count);

#endif