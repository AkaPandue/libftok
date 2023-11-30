/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albcleme <albcleme@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:02:15 by albcleme          #+#    #+#             */
/*   Updated: 2023/11/24 18:57:18 by albcleme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;
	size_t	j;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	j = dstlen;
	i = 0;
	if (dstsize == 0)
		return (srclen);
	if (dstlen > dstsize)
		return (srclen + dstsize);
	while (src[i] != '\0' && j < (dstsize - 1))
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dstlen + srclen);
}
