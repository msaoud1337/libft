/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaoud <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:05:08 by msaoud            #+#    #+#             */
/*   Updated: 2021/11/19 21:37:07 by msaoud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*tempo;

	tempo = *alst;
	while (tempo && tempo->next != NULL)
	{
		tempo = tempo->next;
	}
	if (tempo)
		tempo->next = new;
	else
		*alst = new;
}
