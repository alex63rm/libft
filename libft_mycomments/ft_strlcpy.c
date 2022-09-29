/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:55:58 by alejarod          #+#    #+#             */
/*   Updated: 2022/09/28 23:21:01 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The strlcpy() function copies the src string to the dest string and then adds
a terminating null byte.
Unlike strncpy (), it takes the full size of the buffer (not just the length)
and guarantee to NUL-terminate the result (as long as there is at least one
byte free in dest).
Note that a byte for the NULL should be included in size.
---------------------------------------------------------------------------- */

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!dst && !src)
		return (ft_strlen(src));
	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
	dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/* int main (void)
{
    const char arraySrc[] = "thisIsTheSource";
    char arrayDest[100];
    size_t  dstsize;
    size_t  ret1;
    size_t  ret2;

    dstsize = 7;
    ret1 = ft_strlcpy(arrayDest, arraySrc, 7);
    ret2 = strlcpy(arrayDest, arraySrc, 7);
    
    printf("my function: %lu\n", ret1);
    printf("original: %lu\n", ret2);
    return (0);    
} */
