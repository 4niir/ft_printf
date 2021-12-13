/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:20:03 by aboudoun          #+#    #+#             */
/*   Updated: 2021/12/13 18:58:01 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_printf(const char *data, ... )
{
	int i;

	i = 0;
	va_list arg;

	va_start (arg, data);

	while(*data && *data != '%')
	{

	}
	va_end(arg);
}