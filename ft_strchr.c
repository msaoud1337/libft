/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaoud <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:59:02 by msaoud            #+#    #+#             */
/*   Updated: 2021/11/09 12:43:15 by msaoud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	nc;

	i = 0;
	nc = (char)c;
	str = (char *)s;
	while (str[i])
	{
		if (str[i] == nc)
			return (str + i);
		i++;
	}
	if (str[i] == '\0' && nc == '\0')
		return (str + i);
	return (NULL);
}
