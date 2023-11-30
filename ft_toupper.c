/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albcleme <albcleme@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 01:28:54 by albcleme          #+#    #+#             */
/*   Updated: 2023/10/12 01:55:28 by albcleme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		c -= 32;
	return (c);
}
/*
 * int main() {
    char lowercase = 'a';
    char uppercase = 'Z';
    char nonLetter = '3';

    printf("Original lowercase: %c\n", lowercase);
    printf("Uppercase conversion: %c\n", ft_toupper(lowercase));

    printf("Original uppercase: %c\n", uppercase);
    printf("Uppercase conversion: %c\n", ft_toupper(uppercase));

    printf("Original non-letter: %c\n", nonLetter);
    printf("Non-letter remains: %c\n", ft_toupper(nonLetter));

    return 0;
}
*/
