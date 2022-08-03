/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 20:16:48 by suhkim            #+#    #+#             */
/*   Updated: 2022/08/03 16:36:46 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int put_char(char c);
int put_string(char *str);
int put_nbr(unsigned long num, char mode);
int ft_printf(const char *format, ...);
int check_param(const char **format, va_list ap);

int	ft_putnbr_base(unsigned long nbr, char *base, int len);

#endif
