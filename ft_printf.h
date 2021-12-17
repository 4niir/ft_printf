/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:20:12 by aboudoun          #+#    #+#             */
/*   Updated: 2021/12/17 18:44:30 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include<stdlib.h>
#include<stdarg.h>
#include<unistd.h>
#include<stdio.h>

int		ft_printf(const char *s, ... );
void	ft_putchar(int c, int *len);
void	ft_putstr(char *str, int *len);
void	ft_putnbr(long nb , int *len);
void    ft_puthex(long nbr, int *len, char flag);
void ft_putptr(unsigned long long ptr, int *len);

#endif