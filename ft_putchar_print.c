/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_print.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theophilebrulhart <theophilebrulhart@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 10:18:26 by theophilebr       #+#    #+#             */
/*   Updated: 2021/11/12 11:42:17 by theophilebr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_print(int ascii, int *count)
{
	char	c;

	c = ascii;	
	write(1, &c, 1);
	*count += 1;
}