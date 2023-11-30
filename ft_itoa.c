/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albcleme <albcleme@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:57:54 by albcleme          #+#    #+#             */
/*   Updated: 2023/11/30 22:08:07 by albcleme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*checkspecial(int n)
{
	if (n == 0)
		return (ft_strdup("0"));
	else if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	return (ft_strdup("2147483647"));
}

int	lengdigit(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*numb( int sign, char *s, int n, int i)
{
	if (sign == 1)
		s[0] = '-';
	s[i - 1] = '\0';
	i -= 2;
	while (n > 0)
	{
		s[i--] = n % 10 + 48;
		n = n / 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		leng;
	int		sign;
	int		i;

	sign = 0;
	if (n < 0)
	{
		n = -n;
		sign = 1 ;
	}
	leng = lengdigit(n);
	if (n == 0 || n == 2147483647 || n == -2147483648)
		return (checkspecial(n));
	i = leng + sign + 1 ;
	s = malloc(i);
	if (s == 0)
		return (0);
	s = numb(sign, s, n, i);
	return (s);
}
