/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albcleme <albcleme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:27:11 by albcleme          #+#    #+#             */
/*   Updated: 2023/11/24 18:59:48 by albcleme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	lens(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t		i;
	int			len;

	len = lens(src);
	i = 0;
	if (dstsize == 0)
		return (len);
	while (src[i] != '\0' && i < (dstsize -1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/*int main(void)
{
	int p = 0;
	int q = 0;
    char s[50] = "hola que tal";
    char y[50] =  "";


    printf("origen: %s- \n", s);
    printf("destino: %s- \n", y);

	//p = strlcpy(y,s,5);
	q  = ft_strlcpy(y,s,5);
	printf("resulado: %s- \n", y);
	printf("%d-", q);

    return 0;
}
*/
