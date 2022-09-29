/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 17:01:55 by alejarod          #+#    #+#             */
/*   Updated: 2022/09/28 23:25:07 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The strncmp() function lexicographically compares not more than n characters
in the null-terminated strings s1 and s2. Characters that appear after a ‘\0’
character are not compared.
It return an integer greater than, equal to, or less than 0, according as the
string s1 is greater than, equal to, or less than the string s2.
The comparison is done using unsigned characters.
---------------------------------------------------------------------------- */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i] && i < n))
	{
		if (s1[i] != s2[i])
			return ((unsigned const char)s1[i] - (unsigned const char)s2[i]);
	i++;
	}
	return (0);
}

/* int	main(void)
{
	char	s1[] = "soy mas largo que s2";
	char	s2[] = "somosiguales";
	size_t	n;
	int	ret1;
	int	ret2;

	n = 5;
	ret1 = ft_strncmp(s1, s2, n);
	ret2 = strncmp(s1, s2, n);
	printf("%d\n", ret1);
	printf("%d\n", ret2);
	return (0);	
} */
