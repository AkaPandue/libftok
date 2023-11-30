/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albcleme <albcleme@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 20:58:20 by albcleme          #+#    #+#             */
/*   Updated: 2023/11/30 22:09:13 by albcleme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = ft_strdup(s);
	if (str == 0)
		return (0);
	while (str[i] != '\0')
	{
		str[i] = (*f)(i, (str[i]));
		i++;
	}
	return (str);
}
