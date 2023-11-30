/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albcleme <albcleme@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:01:10 by albcleme          #+#    #+#             */
/*   Updated: 2023/11/05 13:30:12 by albcleme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*dst_ptr;

	dst_ptr = dst;
	if (!dst && !src)
		return (dst);
	if (dst == src)
		return (dst);
	if (dst > src)
	{
		while (len --)
			((char *)dst)[len] = ((char *)src)[len];
	}
	else
	{
		while (len--)
			*(char *)dst++ = *(char *)src++;
	}
	return (dst_ptr);
}
