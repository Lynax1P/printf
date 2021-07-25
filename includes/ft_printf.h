#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_type_flags
{
	char	type;
}				t_format;

int			ft_printf(const char *format, ...);
/** logic flags*/
int			p_hex(va_list arg, int *count);
int			p_upper_hex(va_list arg, int *count);
int			p_pointer(va_list arg, int *count);
int			p_char(va_list arg, int *count);
int			p_str(va_list arg, int *count);
int			p_int(va_list arg, int *count);
int			p_unsigned(va_list arg, int *count);
/** UTILS */
int			input_flags(char *str, int *count, int mod, size_t len);
int			full_str_hex(size_t hex, int *len, char *hex_str, char *hex_buf);
void		ft_unint_wight(unsigned int integer, size_t *wight, char *buf);
char		*ft_int_wight(int integer, size_t *wight);

#endif