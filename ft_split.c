/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albcleme <albcleme@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:58:30 by albcleme          #+#    #+#             */
/*   Updated: 2023/11/30 22:03:15 by albcleme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

unsigned int	wordcounter(char const *s, char c)
{
	int					i;
	unsigned int		words;	

	words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			words++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (words);
}

int	lencounter(char const *s, char c)
{
	unsigned int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

char	**freememory(char **array)
{
	unsigned int	i;

	i = 0;
	while (array[i] != 0)
	{
		free(array[i]);
		array[i] = NULL;
		i++;
	}
	free(array);
	array = NULL;
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char			**array;
	unsigned int	numw;
	unsigned int	i;

	i = 0;
	numw = wordcounter(s, c);
	array = ft_calloc (sizeof(char *), numw + 1);
	if (!array)
		return (NULL);
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			array[i] = ft_substr(s, 0, lencounter(s, c));
			if (i <= numw && !array[i++])
			{
				return (freememory(array));
			}
			s = s + lencounter(s, c);
		}
	}
	return (array);
}
/*
int main ()
{

	char **s = ft_split(" tripolle            42 ", ' ');
	return 0;
}*/
