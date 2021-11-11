/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrulhar <tbrulhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:56:02 by tbrulhar          #+#    #+#             */
/*   Updated: 2021/11/11 19:22:57 by tbrulhar         ###   ########.fr       */
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
			ft_sort_out(str[i++ + 1], args, &count);
		i++;
	}
	return (count);
}

int main(void)
{
	printf("\n%d\n", ft_printf("1234 %d 789", -2147483648));
}