/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomak <acomak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:19:25 by acomak            #+#    #+#             */
/*   Updated: 2022/02/14 16:19:57 by acomak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dt;
	const unsigned char	*sc;

	dt = (unsigned char *)dest;
	sc = (const unsigned char *)src;
	while (n > 0)
	{
		*dt++ = *sc++;
		n--;
	}
	return (dt);
}

// src'yi dest'e kopyalar fakat çakışmalar olabilir
