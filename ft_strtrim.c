/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaoud <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:30:02 by msaoud            #+#    #+#             */
/*   Updated: 2021/11/23 11:26:28 by msaoud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*charremove(char *trim, char const *trimer)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (trimer[j])
	{
		if (trim[i] == trimer[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (trim + i);
}

static int	lastchar(char const *trim, char const *trimer)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(trim) - 1;
	while (trimer[i])
	{
		if (trim[j] == trimer[i])
		{
			i = 0;
			j--;
		}
		else
			i++;
	}
	j++;
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;
	char	*trim;

	i = -1;
	if (s1 == NULL || set == NULL)
		return (NULL);
	trim = (char *)s1;
	trim = charremove(trim, set);
	j = lastchar(trim, set);
	if (j <= 0)
		return (ft_strdup(""));
	str = malloc(j + 1);
	if (str == NULL)
		return (NULL);
	while (str && ++i < j)
		str[i] = trim[i];
	str[i] = '\0';
	return (str);
}
