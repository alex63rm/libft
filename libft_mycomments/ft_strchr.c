/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:20:01 by alejarod          #+#    #+#             */
/*   Updated: 2022/09/28 23:06:32 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The strchr() function locates the first occurrence of c (converted to a char)
in the string pointed to by s. The terminating null character is considered to
be part of the string;
therefore if c is ‘\0’, the functions locate the terminating ‘\0’.
The function returns a pointer to the located character, or NULL if the char
does not appear in the string.
---------------------------------------------------------------------------- */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')		
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s + i);
	return (0);
}

/* int	main(void)
{
	int		c;
	char	array1[] = "wwww.tutorial.com";
	char	*ret1;
	char	*ret2;

	c = '.';

	ret1 = ft_strchr(array1, c);
	ret2 = strchr(array1, c);
	
	printf("%s\n", ret1);
	printf("%s\n", ret2);
	return(0);
}
 */
