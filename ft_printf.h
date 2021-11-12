/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theophilebrulhart <theophilebrulhart@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:57:06 by tbrulhar          #+#    #+#             */
/*   Updated: 2021/11/12 19:19:18 by theophilebr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
	int	ft_printf(const char *str, ...);
	va_list	ft_sort_out(char c, va_list args, int *count);
	void	ft_itoa_print(int nb, int *count);
	void	ft_putchar_print(int c, int *count);
	void	ft_putstr_print(char *s, int *count);
	void	ft_unitoa_print(unsigned int nb, int *count);
	void	ft_itoa_base_print(int nbr, int *count, char x);
#endif