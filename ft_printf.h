#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# define START {
# define END }
typedef struct s_type_flags
{
        int     minus;
        int     zero;
        char    type;
        int     wight;
}               t_format;

int     ft_printf(const char *format, ...);

#endif