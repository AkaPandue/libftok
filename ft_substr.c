/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_subtr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albcleme <albcleme@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:04:35 by albcleme          #+#    #+#             */
/*   Updated: 2023/11/24 20:16:10 by albcleme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			k;
	size_t			j;
	char			*str;

	i = -1;
	k = 0;
	j = ft_strlen(s);
	if (start > j)
		len = 0;
	if (len > j - start)
		len = j - start;
	str = malloc(len + 1);
	if (str == 0)
		return (0);
	while (s[++i] != '\0' && k != len)
	{
		if (i >= start && len > k)
		{
			str[k] = s[i];
			k++;
		}
	}
	str[k] = '\0';
	return (str);
}
