/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomak <acomak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:41:36 by acomak            #+#    #+#             */
/*   Updated: 2022/02/16 21:42:00 by acomak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	num;
	int			n;

	n = 1;
	num = 0;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			n = n * -1;
	str++;
	}
	while (*str != 0 && *str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0') * n;
		if (num > 21474483647)
			return (-1);
		if (num < -2147483648)
			return (0);
		str++;
	}
	return (num);
}
/*
Atoi char olarak girilen sayı dizinini intager bir dizine çeviri
satır 22: 0 nul 9 ht 10 nl 11 vt 12 np 13 cr 32 spacear boşluklar atlanır
satır 24: Artılar esgeçilir eksiler ise artıya çevrilir
satır 32: Tüt dönüşümü ve basamaklandırma sağlıyor
*/
