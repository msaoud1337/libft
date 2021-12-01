/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaoud <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:52:15 by msaoud            #+#    #+#             */
/*   Updated: 2021/11/04 20:18:16 by msaoud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	char	*nsrc;

	i = 0;
	j = ft_strlen(src);
	nsrc = (char *)src;
	if (dstsize != 0)
	{
		while (nsrc[i] && i + 1 < dstsize)
		{
			dst[i] = nsrc[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (j);
}
