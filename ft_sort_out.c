/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_out.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrulhar <tbrulhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:50:51 by tbrulhar          #+#    #+#             */
/*   Updated: 2021/11/11 19:24:32 by tbrulhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_sort_out(char c, va_list args, int *count)
{
	if (c == 'd')
		ft_itoa_print(va_arg(args, int), count);
	if (c == 'c')
		ft_putchar_print(va_arg(args, char), count);
		
}