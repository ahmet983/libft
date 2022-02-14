/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomak <acomak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:21:52 by acomak            #+#    #+#             */
/*   Updated: 2022/02/14 13:04:47 by acomak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t	idx;

    if (n == 0)
		return (0);
    idx = 0;
    while (idx < n)
    {
    	if (s1[idx] && s1[idx] == s2[idx])
        {
            while (s1[idx] && s1[idx] == s2[idx] && idx < n)
                idx++;
        }
        else
            return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
    }
    return (0);
}

// 2 stringi karşılaştırır aynıysa 0
// farklıysa 0 dan farklı bir değer döndürür
