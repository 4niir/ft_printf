/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:20:03 by aboudoun          #+#    #+#             */
/*   Updated: 2021/12/15 18:50:38 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"
#include<stdlib.h>
#include<stdarg.h>
#include<unistd.h>
#include<stdio.h>

void	ft_putchar(int c, int *len)
{
	write(1, &c, 1);
	(*len)++;
}

void	ft_putstr(char *str, int *len)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i], len);
		i++;
	}
}

void	ft_putnbr(int nb , int *len)
{
    if ( nb == -2147483648)
	{
	   write(1, "-2147483648", 11);
	   *len = 11;
		return ;
    }
	else if (nb < 0)
	{
		ft_putchar('-', len);
		ft_putnbr(-nb, len);
	}
	else if (nb <= 9)
	{
		ft_putchar(nb + 48, len);
	}
	else
	{
		ft_putnbr(nb / 10, len);
		ft_putnbr(nb % 10, len);
	}
}

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