/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaoud <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:30:30 by msaoud            #+#    #+#             */
/*   Updated: 2021/11/04 21:52:05 by msaoud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*nsrc;
	char	*ndst;

	nsrc = (char *)src;
	ndst = (char *)dst;
	i = len - 1;
	if (nsrc > ndst)
		ndst = ft_memcpy(ndst, nsrc, len);
	if (nsrc < ndst)
	{
		while (i >= 0)
		{
			ndst[i] = nsrc[i];
			i--;
		}
	}
	return (ndst);
}
