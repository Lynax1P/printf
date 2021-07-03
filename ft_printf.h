#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

typedef struct s_type_flags
{
        int     minus;
        int     sero;
        char    type;
}               t_format;

int     ft_printf(const char *format, ...);

#endif