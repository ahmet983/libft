/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomak <acomak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:19:47 by acomak            #+#    #+#             */
/*   Updated: 2022/02/14 13:02:33 by acomak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *str, int c, size_t n)
{
    unsigned char   *ptr;

    ptr = str;
    while (n-- > 0)
    {
    	*ptr++ = c;
    }
    return (str);
}

// bellekte bir kelimede istenilen bir harfle istenilen uzunluk kadar
// yer degistirir
