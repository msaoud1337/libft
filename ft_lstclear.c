/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaoud <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:32:09 by msaoud            #+#    #+#             */
/*   Updated: 2021/11/18 14:05:05 by msaoud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*head;

	head = *lst;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		del(temp->content);
		free(temp);
		temp = NULL;
	}
	*lst = NULL;
}
