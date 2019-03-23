/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olboothe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 18:40:05 by olboothe          #+#    #+#             */
/*   Updated: 2019/03/20 20:03:14 by olboothe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*cd;
	const unsigned char	*cs;
	size_t				i;

	cd = dest;
	cs = src;
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			cd[i] = cs[i];
			i++;
		}
	}
	else if (dest > src)
	{
		while (n--)
			cd[n] = cs[n];
	}
	return (dest);
}
