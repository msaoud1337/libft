/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaoud <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:55:30 by msaoud            #+#    #+#             */
/*   Updated: 2021/11/11 20:35:45 by msaoud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ns1;
	unsigned char	*ns2;
	size_t			i;

	ns1 = (unsigned char *)s1;
	ns2 = (unsigned char *)s2;
	i = 0;
	if (n <= 0)
		return (0);
	while ((ns1[i] && ns2[i]) && (ns1[i] == ns2[i]) && i < n - 1)
		i++;
	return (ns1[i] - ns2[i]);
}
