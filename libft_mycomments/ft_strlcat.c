/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 13:41:45 by alejarod          #+#    #+#             */
/*   Updated: 2022/09/28 23:17:09 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The strlcat() function appends the src string to the dest string, overwriting
the terminating null byte at the end of dest, and then adds a terminating null
byte. It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the
result.
Unlike strncat (), it takes the full size of the buffer (not just the length)
and guarantee to NUL-terminate the result (as long as there is at least one
byte free in dst).
Note that a byte for the NULL should be included in size.
Note however, that if strlcat() traverses n characters in dest without finding
a NUL, the length of the string is considered to be n and the destination
string will not be NUL-terminated (since there was no space for the NUL).
This keeps strlcat() from running off the end of a string. In practice this
should not happen (as it means that either size is incorrect or that dst is
not a proper "C" string). The check exists to prevent potential security
problems in incorrect code.
---------------------------------------------------------------------------- */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;

	dst_len = ft_strlen(dst);
	if (dstsize < dst_len)
		dst_len = dstsize;
	i = 0;
	while (src[i] && dst_len + i + 1 < dstsize)
	{
		*(dst + dst_len + i) = *(src + i);
		i++;
	}
	if (i != 0)
		*(dst + dst_len + i) = '\0';
	return (dst_len + ft_strlen(src));
}

/* int main(void)
{
    char arraySrc[] = "length is 12";
    char arrayDst[] = "four";
    size_t  n;
    size_t  ret1;
    size_t  ret2;

    n = 2;

    ret1 = ft_strlcat(arrayDst, arraySrc, n);
    ret2 = strlcat(arrayDst, arraySrc, n);
    printf("%lu\n", ret1);
    printf("%lu\n", ret2);
    return(0);
} */
