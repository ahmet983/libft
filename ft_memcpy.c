/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomak <acomak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:19:25 by acomak            #+#    #+#             */
/*   Updated: 2022/02/14 13:03:21 by acomak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char           *dt;
    const unsigned char     *sc;

    dt = (char *)dest;
    sc = (char *)src;
    while (n > 0)
    {
        *dt++ = *sc++;
        n--;
    }
    return (dt);
}

// src'yi dest'e kopyalar fakat çakışmalar olabilir
