/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albcleme <albcleme@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:50:52 by albcleme          #+#    #+#             */
/*   Updated: 2023/11/24 18:32:38 by albcleme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n--)
	{
		if ((*(unsigned char *)(s1 + i)) != (*(unsigned char *)(s2 + i)))
			return ((*(unsigned char *)(s1 + i))
					- (*(unsigned char *)(s2 + i)));
		i++;
	}
	return (0);
}
