/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albcleme <albcleme@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 01:45:04 by albcleme          #+#    #+#             */
/*   Updated: 2023/10/12 02:06:05 by albcleme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		c += 32;
	return (c);
}
/*
 * int main() {
    char lowercase = 'a';
    char uppercase = 'Z';
    char nonLetter = '3';

    printf("Original lowercase: %c\n", lowercase);
    printf("Uppercase conversion: %c\n", ft_tolower(lowercase));

    printf("Original uppercase: %c\n", uppercase);
    printf("Uppercase conversion: %c\n", ft_tolower(uppercase));

    printf("Original non-letter: %c\n", nonLetter);
    printf("Non-letter remains: %c\n", ft_tolower(nonLetter));

    return 0;
}
*/
