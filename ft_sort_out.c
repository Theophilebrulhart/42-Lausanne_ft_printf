/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_out.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theophilebrulhart <theophilebrulhart@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:50:51 by tbrulhar          #+#    #+#             */
/*   Updated: 2021/11/12 19:34:24 by theophilebr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

va_list	ft_sort_out(char c, va_list args, int *count)
{
	if (c == 'd'|| c == 'i')
		ft_itoa_print(va_arg(args, int), count);
	if (c == 'u')
		ft_unitoa_print(va_arg(args ,unsigned int), count);
	if (c == 'c')
		ft_putchar_print(va_arg(args, int), count);
	if (c == 's')
		ft_putstr_print(va_arg(args, char *), count);
	if (c == 'x')
		ft_itoa_base_print(va_arg(args, int), count, c);
	if (c == 'X')
		ft_itoa_base_print(va_arg(args, int), count, c);
	if (c == '%')
	{
		*count += 1;
		write (1, "%", 1);
	}
	return (args);
}