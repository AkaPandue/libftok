/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albcleme <albcleme@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:55:16 by albcleme          #+#    #+#             */
/*   Updated: 2023/11/02 19:48:12 by albcleme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	d = (char *) dst;
	s = (char *) src;
	i = 0;
	if (s == 0 && d == 0)
		return (dst);
	while (i++ < n)
	{
		*d++ = *s++;
	}
	return (dst);
}
