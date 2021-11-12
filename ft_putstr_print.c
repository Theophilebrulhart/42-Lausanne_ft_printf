/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theophilebrulhart <theophilebrulhart@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:18:11 by theophilebr       #+#    #+#             */
/*   Updated: 2021/11/12 19:39:19 by theophilebr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_print(char *s, int *count)
{
	if (s != 0)
	{
		while (*s)
		{
			ft_putchar_print(*s, count);
			s++;
		}
	}	
}
