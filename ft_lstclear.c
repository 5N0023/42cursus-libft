/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:22:38 by mlektaib          #+#    #+#             */
/*   Updated: 2022/10/27 02:17:54 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*temp;

	if (!lst || !*lst)
		return ;
	if (lst)
	{
		while (*lst)
		{
			temp = (*lst)->next;
			free((*lst)->content);
			free(*lst);
			*lst = temp;
		}
	}
	*lst = NULL;
}
