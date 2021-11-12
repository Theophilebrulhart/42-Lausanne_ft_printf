/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_print.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theophilebrulhart <theophilebrulhart@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:44:17 by theophilebr       #+#    #+#             */
/*   Updated: 2021/11/12 19:25:28 by theophilebr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_itoa_base_print(int nb, int *count, char x)
{
	char	*base_min;
	char	*base_maj;
	char	c;

	base_min = "0123456789abcdef";
	base_maj = "0123456789ABCDEF";
	if (nb == -2147483648)
	{
		write(1, "80000000", 8);
		*count += 8;
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 15)
		ft_itoa_base_print(nb / 16, count, x);
	if(x == 'x')
		c = base_min[nb % 16];
	if (x == 'X')
		c =base_maj[nb % 16];
	write(1, &c, 1);
	*count += 1;
}