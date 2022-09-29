/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 21:53:38 by alejarod          #+#    #+#             */
/*   Updated: 2022/09/28 23:22:40 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
Applies the function f to each character of the string s passed as argument by
giving its index as first argument to create a “fresh” new string (with malloc)
resulting from the successive applications of f.
If the allocation fails the function returns NULL.
---------------------------------------------------------------------------- */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	size_t	i;

	ptr = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!ptr)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/* char	f(unsigned int i, char c)
{
	return (i + c);
}

int    main(void)
{
    char c;

    c = 'a';
    char const *s = "ABCDE";
    printf("%s\n", ft_strmapi(s, f));
    return(0);
    
} */
