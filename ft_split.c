/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaoud <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 20:37:49 by msaoud            #+#    #+#             */
/*   Updated: 2021/11/17 15:03:39 by msaoud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(char const *str, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
			count++;
		while (str[i] != c && str[i])
			i++;
		while (str[i] == c && str[i])
			i++;
	}
	return (count);
}

static void	free_table(char **str, int i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
}

static char	**besplit(char const *s, char c)
{
	int		i;
	int		j;
	int		cn;
	char	**split;

	i = 0;
	j = 0;
	cn = 0;
	split = malloc(sizeof(char *) * (count(s, c) + 1));
	while (split && i < count(s, c))
	{
		while (s[j] != c && s[j])
			j++;
		split[i++] = ft_substr(s, cn, j - cn);
		if (!split[i - 1])
		{
			free_table(split, i - 1);
			return (NULL);
		}
		while (s[j++] == c)
			cn = j;
	}
	if (split)
		split[i] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	char	*str;

	if (!s)
		return (NULL);
	str = ft_strtrim(s, &c);
	if (!str)
		return (NULL);
	split = besplit(str, c);
	if (str)
		free(str);
	if (!split)
		return (NULL);
	return (split);
}
