/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:10:41 by alejarod          #+#    #+#             */
/*   Updated: 2022/09/28 23:16:17 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
Allocates (with malloc(3)) and returns a new string ending with ’\0’, result of
the concatenation of s1 and s2. If the allocation fails returns NULL.
---------------------------------------------------------------------------- */

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	n;
	size_t	i;
	size_t	j;
	char	*ptr;

	n = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)malloc(sizeof(char) * n + 1);
	if (!ptr)
		return (0);
	i = 0;
	while (*(s1 + i))
	{
		*(ptr + i) = *(s1 + i);
		i++;
	}
	j = 0;
	while (*(s2 + j))
	{
		*(ptr + i + j) = *(s2 + j);
		j++;
	}
	*(ptr + i + j) = '\0';
	return (ptr);
}

/* 
int    main(void)
{
    char s1[] = "Hello";
    char s2[] = "World";
    
    printf("%s\n", ft_strjoin(s1, s2));

    return(0);
} */
