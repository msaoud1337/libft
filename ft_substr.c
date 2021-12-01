/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaoud <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:39:25 by msaoud            #+#    #+#             */
/*   Updated: 2021/11/12 17:46:44 by msaoud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*buff;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	str = (char *)s;
	if (len >= ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	buff = malloc(len + 1);
	if (buff == NULL)
		return (NULL);
	while (str[start] && i < len)
	{
		buff[i] = str[start];
		i++;
		start++;
	}
	buff[i] = '\0';
	return (buff);
}
