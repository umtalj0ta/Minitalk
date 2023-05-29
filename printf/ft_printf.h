#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_formats(va_list args, char c);
char	ft_printchar(int c);
int		ft_putpercent(void);
void	ft_putstr(char *s);
int		ft_printstr(char *s);
int		ft_printnbr(int n);
int   ft_printuns(int n);
int   ft_printadress(unsigned long long n);
#endif
