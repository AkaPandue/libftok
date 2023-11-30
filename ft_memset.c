/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albcleme <albcleme@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:07:12 by albcleme          #+#    #+#             */
/*   Updated: 2023/11/02 17:59:22 by albcleme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	int				i;
	unsigned char	*j;

	j = (unsigned char *)str;
	i = 0;
	while (n > 0)
	{
		j[i] = (unsigned char)c;
		i++;
		n--;
	}
	return (str);
}
