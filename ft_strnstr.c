/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albcleme <albcleme@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:25:37 by albcleme          #+#    #+#             */
/*   Updated: 2023/11/24 19:04:53 by albcleme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	char		*h;
	char		*n;

	i = 0;
	h = (char *)haystack;
	n = (char *)needle;
	if (ft_strlen(h) < 0 || ft_strlen(n) == 0)
		return (h);
	while (len >= (i + ft_strlen(n)) && h[i] != '\0')
	{
		if (ft_strncmp(h + i, n, ft_strlen(n)) == 0)
			return (h + i);
		i++;
	}
	return (0);
}
