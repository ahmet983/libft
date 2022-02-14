/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomak <acomak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:21:29 by acomak            #+#    #+#             */
/*   Updated: 2022/02/14 13:04:21 by acomak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dest, char *src, size_t n)
{
    size_t  c;
    size_t  i;

    c = 0;
    i = 0;
    while (src[c] != '\0')
            c++;
    if (n != 0)
    {
        while (src[i] != '\0' && i < (n - 1))
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (c);
}

// src den dest'e kadar n kadar kopyalar
// src nin uzunluğunu döndürür
//strlcpy'nin özelligi bir eksik alması
// bu yüzden - 1 yaptık null karakteri de almak için
