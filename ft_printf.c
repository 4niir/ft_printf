/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:20:03 by aboudoun          #+#    #+#             */
/*   Updated: 2021/12/15 18:49:37 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_printf(const char *data, ... )
{
	int len;
	int position;

	position = 0;
	len = 0;
	va_list args;

	va_start(args, data);

	while(data[position])
	{
		if(data[position] != '%')
			ft_putchar(data[position], &len);
		else
		{
			position++;
			if(data[position] == 'c')
				ft_putchar(va_arg(args, int), &len);
			else if(data[position] == 'd')
		 		ft_putnbr(va_arg(args, int), &len);
			else if(data[position] == 's')
				ft_putstr(va_arg(args, char *), &len);
		}
		position++;
	}
	va_end(args);
	return(len);
}

int main()
{
	int a = -2147483648;
	//char b = 'b';
	//char *str="thisuduhfu";
	ft_printf("%d", a);
}