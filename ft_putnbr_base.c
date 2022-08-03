/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:37:19 by suhkim            #+#    #+#             */
/*   Updated: 2022/08/03 16:25:17 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putnbr_base(unsigned long nbr, char *base, int len)
{
	if (nbr / len)
		ft_putnbr_base(nbr / len, base, len);
	write (1, (base + nbr % len), 1);
	return (0);
}
