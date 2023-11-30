/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albcleme <albcleme@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:25:03 by albcleme          #+#    #+#             */
/*   Updated: 2023/10/26 20:26:51 by albcleme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;
	int		p;

	i = 0;
	p = 0;
	str = (char *)s;
	if ((char)c == '\0')
		p = 1;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return (str + i);
		i++;
	}
	if (p == 1)
	{
		return (str + i);
	}
	return (0);
}
//               b     a  r   c   e   l   ona\0       r (114)
//              s[0]s[1]s[2]s[3]s[4]s[5] 
//           *s  =    barcelona
//           s =   0x0242524     
//           s  + 1 = 0x0242525
//        (char)   s  + 4= 0x0...28 
//           *c =  {  12 , 1 ,3 }
//       (int)    c = 0x00p2
//           c +1 = 0x00p6
//           	  hola\0adios      "" 
