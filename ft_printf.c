/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:20:03 by aboudoun          #+#    #+#             */
/*   Updated: 2021/12/16 15:44:00 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"
#include<stdlib.h>
#include<stdarg.h>
#include<unistd.h>
#include<stdio.h>


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
			else if(data[position] == 'd')
		 		ft_putnbr(va_arg(args, int), &len);
			else if(data[position] == 'i')
		 		ft_putnbr(va_arg(args, int), &len);
			else if(data[position] == 'u')
		 		ft_putnbr(va_arg(args, unsigned int), &len);
			else if(data[position] == '%')
		 		ft_putchar('%', &len);
			else if(data[position] == 'x' || data[position] == 'X')
				ft_puthex (va_arg(args, unsigned int), &len, data[position]);
		}
		position++;
	}
	va_end(args); 
	return(len);
}


int main()
{
	ft_printf("%x\n", 1970796);
	printf("%x\n", 1970796);
}
