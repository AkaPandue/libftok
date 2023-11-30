/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albcleme <albcleme@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:45:19 by albcleme          #+#    #+#             */
/*   Updated: 2023/11/24 18:54:49 by albcleme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	len;

	len = ((ft_strlen(s1)) + 1);
	copy = malloc(len);
	if (copy == 0)
		return (0);
	ft_memcpy(copy, s1, len);
	return (copy);
}
