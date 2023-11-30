/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albcleme <albcleme@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:58:28 by albcleme          #+#    #+#             */
/*   Updated: 2023/11/25 13:21:53 by albcleme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	k;
	size_t	j;

	k = ft_strlen(s1);
	j = ft_strlen(s2);
	str = malloc(k + j + 1);
	if (str == 0)
		return (0);
	ft_memcpy(str, s1, k);
	ft_memcpy(str + k, s2, j + 1);
	return (str);
}
