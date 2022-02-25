/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomak <acomak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:53:59 by acomak            #+#    #+#             */
/*   Updated: 2022/02/25 14:28:27 by acomak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst && !new)
		return ;
	new->next = *lst;
	*lst = new;
}
// new ve lst diye iki adet t_list türünde yapı oluşturuyoruz
// ve new imizin next ini lsat ye bağlıyoruz sonrada ilk st mize newi
// göstertiyoruz ve artık new imiz lst oldu