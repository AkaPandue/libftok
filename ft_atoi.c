/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albcleme <albcleme@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:45:57 by albcleme          #+#    #+#             */
/*   Updated: 2023/11/24 18:17:40 by albcleme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
//                   "+20"
int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	sign = 1;
	res = 0;
	while ((*str == '\t') || (*str == '\v') || (*str == '\f')
		|| (*str == '\r') || (*str == '\n') || (*str == ' '))
		str++;
	if (*str == '-')
	{
		sign = (-1);
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str != '\0' && ((*str >= 48) && (*str <= 57)))
	{
		res = 10 * res + (*str - 48);
		str++;
	}
	return (res * sign);
}
/*
int main()
{
	int a = ft_atoi("+20");

	printf("%d", a);
	return (0);
}*/
