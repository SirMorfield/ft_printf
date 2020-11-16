/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 02:19:33 by jkoers        #+#    #+#                 */
/*   Updated: 2020/11/16 15:56:13 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdbool.h>
# include <stddef.h>
# include "../libft/include/libft.h"

typedef	struct		s_special
{
	// bool			flag_error;
	// size_t		special_len;
	unsigned long	flags[127];
	// char			*conversion;
	long			field_width;	// -1 if unknown
	long			precision;		// -1 if unknown
	long			precision0;		// -1 if unknown
}					t_special;

void	ft_exit_error(char *error_msg);

int		ft_printf(const char *format, ...);

size_t	do_special(t_list **list, char *percent, va_list ap);
char	*c_tostr(int c);
char	*s_tostr(t_special *sp, va_list ap);
char	*p_tostr(void *p);
char	*p_tostr(void *p);
char	*i_tostr(t_special *sp, va_list ap);
char	*u_tostr(t_special *sp, va_list ap);
char	*x_tostr(t_special *sp, va_list ap);


#endif