/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaoud <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 13:38:19 by msaoud            #+#    #+#             */
/*   Updated: 2021/11/14 13:39:39 by msaoud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)haystack;
	if (str[0] == '\0' && needle[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (needle[j] && i + j < len)
		{
			if (needle[j] == str[i + j])
				j++;
			else
				break ;
		}
		if (needle[j] == '\0')
			return (str + i);
		i++;
	}
	return (NULL);
}
