/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaoud <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 13:44:29 by msaoud            #+#    #+#             */
/*   Updated: 2021/11/14 13:44:34 by msaoud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*ns1;

	i = 0;
	if (s1[0] == '\0')
	{
		ns1 = malloc(1);
		ns1[0] = '\0';
		return (ns1);
	}
	ns1 = malloc(ft_strlen(s1) + 1);
	if (ns1 == NULL)
		return (NULL);
	ft_memmove(ns1, s1, ft_strlen(s1) + 1);
	return (ns1);
}
