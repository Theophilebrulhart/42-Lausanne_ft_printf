/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theophilebrulhart <theophilebrulhart@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:56:02 by tbrulhar          #+#    #+#             */
/*   Updated: 2021/11/12 19:43:58 by theophilebr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int i;
	int	count;

	i = 0;
	count = 0;
	va_list	args;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] != '%' && ++count)
			write(1, str + i, 1);
		if (str[i] == '%')
			args = ft_sort_out(str[i++ + 1], args, &count);
		i++;
	}
	return (count);
}

// int main(void)
// {
// 	//char str[] = "b";
// 	unsigned int	d = -2147483648;
// 	//unsigned int u = 0;
// 	// int *p = &d;
// 	printf("officiel %%x : %X\n", d);
// 	ft_printf("moi %%x : %X\n", d);
// // 	printf("%d\n\n", (ft_printf("officiel :\n1%d%i%c%s%%%u\n", d, 3, 'a', str, u) - 12));
// // 	printf("\n%d\n", (ft_printf("moi :\n1%d%i%c%s%%%u\n", d, 3, 'a', str, u) - 7));
//  }