/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaoud <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:35:51 by msaoud            #+#    #+#             */
/*   Updated: 2021/11/06 12:16:01 by msaoud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	d;

	d = (char)c;
	str = (char *)s;
	i = ft_strlen(str);
	if (d == '\0')
		return (str + i);
	i--;
	while (i >= 0)
	{
		if (str[i] == d)
			return (str + i);
		i--;
	}
	return (NULL);
}
