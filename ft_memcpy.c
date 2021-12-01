/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaoud <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:16:27 by msaoud            #+#    #+#             */
/*   Updated: 2021/11/04 20:54:03 by msaoud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ndst;
	unsigned char	*nsrc;

	i = 0;
	ndst = (unsigned char *)dst;
	nsrc = (unsigned char *)src;
	if (nsrc == NULL && ndst == NULL)
		return (NULL);
	while (i < n)
	{
		ndst[i] = nsrc[i];
		i++;
	}
	return (ndst);
}
