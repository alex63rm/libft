/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:57:17 by alejarod          #+#    #+#             */
/*   Updated: 2022/09/28 23:27:37 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The strnstr() function locates the first occurrence of null-terminated string
needle in the null-terminated string haystack, where not more than n characters
are searched.
If needle is an empty string, haystack is returned;
if needle occurs nowhere in haystack, NULL is returned;
otherwise a pointer to the first character of the first occurrence of needle is
returned.
---------------------------------------------------------------------------- */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	//len is confusing. In this function it means how many chars from haystack we want to search
	i = 0;
	if (*(needle + i) == '\0')	// check return values in MAN
		return ((char *)haystack);	// MAN: if needle is NUL, return Haystack
	while (*(haystack + i) != '\0' && i < len)
	{
		j = 0;
		while (*(haystack + i + j) == *(needle + j) && i + j < len) // I need to check the whole string, it must be the same ALL the time
		{
			if (*(needle + j + 1) == '\0')	// check if it reached the end of the needle
				return ((char *)(haystack + i));	// it returns the part of the haystack that is found
			j++;
		}
	i++;
	}
	return (0);
}

/* int main(void)
{
    const char haystack[] = "foo bar baz";
    const char needle[] = "bar";
    size_t  n;

    char *ret1;
    char *ret2;

    n = 40;
    ret1 = ft_strnstr(haystack, needle, n);
    ret2 = strnstr(haystack, needle, n);
    
    printf("%s\n", ret1);
    printf("%s\n", ret2);
    return (0);
} */
