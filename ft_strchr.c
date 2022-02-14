/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomak <acomak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:20:45 by acomak            #+#    #+#             */
/*   Updated: 2022/02/14 13:03:02 by acomak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *str, int c)
{
    int     i;

    i = 0;
    while (str[i])
    {
        if (str[i] == c)
        {
            return ((char *)str);
        }
        i++;
    }
    return (NULL);
}

// soldan baslayarak bir kelimede istedigimiz kelimeyi bulunca
// devamını döndürür
// '\0' gönderilirse de dizenin sonunu göstereceği için
// hiç bir şey görmeyiz boş gönderirse de null değer döndürür
