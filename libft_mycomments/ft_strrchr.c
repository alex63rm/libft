/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 11:29:55 by alejarod          #+#    #+#             */
/*   Updated: 2022/09/28 23:29:16 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The strchr() function locates the last occurrence of c (converted to a char) in
the string pointed to by s. The terminating null character is considered to be
part of the string;
therefore if c is ‘\0’, the functions locate the terminating ‘\0’.
The function returns a pointer to the located character, or NULL if the char
does not appear in the string.
---------------------------------------------------------------------------- */

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	while (i >= 0)		// we start from end to start, cannot use s[i] != '\0' as end condition
	{
		if (*(s + i) == (char)c)	// MAN: int is read as char
			return ((char *)s + i);
		i--;
	}
	if (c == '\0')
		return ((char *)s + i);
	return (0);
}

/* int	main(void)
{
	int		c;
	char	array1[] = "hello.how.are.you";
	char	*ret1;
	char	*ret2;

	c = '.';

	ret1 = ft_strrchr(array1, c);
	ret2 = strrchr(array1, c);
	
	printf("%s\n", ret1);
	printf("%s\n", ret2);
	return(0);
} */
