/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albcleme <albcleme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:02:24 by albcleme          #+#    #+#             */
/*   Updated: 2023/11/24 18:27:06 by albcleme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	else
		return (0);
}
/*
#include  <stdio.h>
int main() 
{
     char testChar;

    testChar = 'A';
    printf("%c es alfa: %d\n", testChar, ft_isalpha(testChar));

    printf("%c es alfa: %d\n", 'A' , isalpha('A'));


    testChar = 127;
    printf("%c es alfa: %d\n", testChar, ft_isalpha(testChar));

    testChar = 'z';
    printf("%c es alfa: %d\n", testChar, ft_isalpha(testChar));

    testChar = '!';
    printf("%c es alfa: %d\n", testChar, ft_isalpha(testChar));

    testChar = ' ';
    printf("%c es alfa: %d\n", testChar, ft_isalpha(testChar));

	return 0;
}*/
