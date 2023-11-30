/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albcleme <albcleme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:04:06 by albcleme          #+#    #+#             */
/*   Updated: 2023/11/04 19:57:00 by albcleme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if ((c >= 32) && (c <= 126))
		return (1);
	else
		return (0);
}
/*
int ft_isprint(char c);

int main() {
    char Prueba;

    Prueba = 24;
    printf("%d is printable: %d\n", Prueba, ft_isprint(Prueba));

    Prueba = 100;
    printf("%d is printable: %d\n", Prueba, ft_isprint(Prueba));

    Prueba = 111;
    printf("%d is printable: %d\n", Prueba, ft_isprint(Prueba));

    return 0;
}

int ft_isprint(char c) {
    if ((c >= 32) && (c <= 126))
        return (1);
		else
    	return (0);
}
*/
