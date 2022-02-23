/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomak <acomak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:58:13 by acomak            #+#    #+#             */
/*   Updated: 2022/02/23 16:53:42 by acomak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)(str + i));
	return (NULL);
}

// soldan baslayarak bir kelimede istedigimiz harfi bulunca
// devamını döndürür
// '\0' gönderilirse de dizenin sonunu göstereceği için
// hiç bir şey görmeyiz boş gönderirse de null değer döndürür
