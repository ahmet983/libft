/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomak <acomak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 22:00:00 by acomak            #+#    #+#             */
/*   Updated: 2022/02/24 17:10:57 by acomak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	res = ft_strdup(s);
	if (!res)
		return (NULL);
	while (res[i])
	{
		res[i] = f(i, res[i]);
		i++;
	}
	return (res);
}

// Dışardan string ve fonksiyon belirtiyoruz sonrasında 
// strdup a gönderip stringimizi açtığımız belleğe yazıyoruz
// sonrasında fonksiyonumuzun gerekliliklerini yerine getirerek resi
// değişime uğratıp ekrana yazdırıyoruz.
