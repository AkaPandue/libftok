/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albcleme <albcleme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:21:58 by albcleme          #+#    #+#             */
/*   Updated: 2023/11/04 19:49:49 by albcleme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}
/*
int ft_isdigit(char c);

int main() 
{
     char testChar;

    testChar = '5';
    printf("%c es num: %d\n", testChar, ft_isdigit(testChar));

    testChar = '6';
    printf("%c es num: %d\n", testChar, ft_isdigit(testChar));

    testChar = 'z';
    printf("%c es num: %d\n", testChar, ft_isdigit(testChar));

    testChar = '!';
    printf("%c es num: %d\n", testChar, ft_isdigit(testChar));

    testChar = ' ';
    printf("%c es num: %d\n", testChar, ft_isdigit(testChar));


}

int ft_isdigit(char c)
{
    if((c >= '0') && (c <= '9'))
        return(0);
    return(1);
}
*/
