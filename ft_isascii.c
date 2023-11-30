/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albcleme <albcleme@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 20:12:16 by albcleme          #+#    #+#             */
/*   Updated: 2023/11/04 19:56:15 by albcleme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if ((c >= 0) && (c <= 127))
		return (1);
	return (0);
}
/*
int ft_isascii (char c);

int main() 
{
    char testChar;

    // Prueba de caracteres ASCII
    testChar = 'A';
    printf("%c está en el rango ASCII: %d\n", testChar, ft_isascii(testChar));

    testChar = 32; // Espacio
    printf("%c está en el rango ASCII: %d\n", testChar, ft_isascii(testChar));

    testChar = 127; // Último carácter ASCII
    printf("%c está en el rango ASCII: %d\n", testChar, ft_isascii(testChar));

    // Prueba de caracteres no ASCII
    testChar = 128;
    printf("%c está en el rango ASCII: %d\n", testChar, ft_isascii(testChar));

    testChar = 'ñ'; // Carácter especial
    printf("%c está en el rango ASCII: %d\n", testChar, ft_isascii(testChar));

    return 0;
}

int ft_isascii (char c)
{
    if((c >= 0) && (c <= 127))
        return(1);
    return(0);
}

*/
