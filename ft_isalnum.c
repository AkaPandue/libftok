/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albcleme <albcleme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:32:47 by albcleme          #+#    #+#             */
/*   Updated: 2023/11/24 18:22:12 by albcleme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)

{
	if (((c >= '0') && (c <= '9')) || ((c >= 'A') && (c <= 'Z'))
		|| ((c >= 'a') && (c <= 'z')))
		return (1);
	return (0);
}
/*
int ft_isalnum  (char c);
:
int main() 
{
     char testChar;

    // Prueba de caracteres alfanuméricos
    testChar = 'A';
    printf("%c es alfanumérico: %d\n", testChar, ft_isalnum(testChar));

    testChar = '5';
    printf("%c es alfanumérico: %d\n", testChar, ft_isalnum(testChar));

    testChar = 'z';
    printf("%c es alfanumérico: %d\n", testChar, ft_isalnum(testChar));

    // Prueba de caracteres no alfanuméricos
    testChar = '!';
    printf("%c es alfanumérico: %d\n", testChar, ft_isalnum(testChar));

    testChar = ' ';
    printf("%c es alfanumérico: %d\n", testChar, ft_isalnum(testChar));


}

int ft_isalnum  (char c)
{
    if((((c >= '0') && (c <= '9')) || (c >='A') && (c <= 'Z')) || 
       (c >= 'a') && (c <= 'z'))
        return(1);
    return(0);
} 
*/
