/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomak <acomak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:57:15 by acomak            #+#    #+#             */
/*   Updated: 2022/02/17 11:12:09 by acomak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main()
{
	int fd = open(“hello”,1);
	ft_putchar_fd(‘c’,fd);
}
*/
//fd ile yazdırıyoruz write 1 ile yazmamızın nedeni fd de 1 
//writeO anlamına geliyor 0 koyarsak sadece readO 2 hata kodu yazdırıyor
