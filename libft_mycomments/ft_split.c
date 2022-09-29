/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:06:25 by alejarod          #+#    #+#             */
/*   Updated: 2022/09/28 23:04:57 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
Allocates (with malloc(3)) and returns an array of strings obtained by spliting
s using the character c as a delimiter. The array must be ended by a NULL
pointer. If the allocation fails the function returns NULL.
---------------------------------------------------------------------------- */

static int	count_words(char const *s, char c)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != '\0' && s[i] != c)
				i++;
			count++;
			continue ;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char			**new;
	unsigned int	i;
	unsigned int	word_start;
	unsigned int	word_nb;

	new = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!new)
		return (0);
	i = 0;
	word_nb = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			word_start = i;
			while (s[i] != '\0' && s[i] != c)	//this is a different loop so I must check = '\0' condition again
				i++;
			new[word_nb] = ft_substr(s, word_start, i - word_start);
			word_nb++;
			continue ;
		}
		i++;
	}
	new[word_nb] = 0;	// end the pointer string with a null string
	return (new);
}

/* int main(void)
{
	char const s[] = "is this really a first project function???";
	char c;
	char **result;
	c = ' ';
	result = ft_split(s, c);
	int check = -1;
	while (result[++check])
		printf("line [%d] -> %s\n", check, result[check]);
	//printf("%s", ft_split(s, c));
	return (0);
} */
