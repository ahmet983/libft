/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomak <acomak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:57:03 by acomak            #+#    #+#             */
/*   Updated: 2022/02/16 22:08:00 by acomak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *word, int latter, size_t length)
{
	size_t	index;
	char	*new_word;

	index = 0;
	new_word = (char *) word;
	while (index < length)
	{
		new_word[index] = latter;
		index++;
	}
	return (new_word);
}

// bellekte bir kelimede istenilen bir harfle istenilen uzunluk kadar
// yer degistirir
