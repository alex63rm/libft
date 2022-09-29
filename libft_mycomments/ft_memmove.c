/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:55:21 by alejarod          #+#    #+#             */
/*   Updated: 2022/09/28 22:58:28 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The memmove() function copies "len" bytes from "src" to "dst". The two strings
may overlap; the copy is always done in a non-destructive manner. It returns a
pointer to dst.
---------------------------------------------------------------------------- */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*auxsrc;
	char	*auxdst;

	auxsrc = (char *)src;
	auxdst = (char *)dst;
	if (!src && !dst)
		return (dst);
	if (dst > src)
	{
		while (len--)
		{
			auxdst[len] = auxsrc[len];
		}
		return (dst);
	}
	i = 0;
	while (len--)
	{
		*(auxdst + i) = *(auxsrc + i);
		i++;
	}
	return (dst);
}

/* int main(void)
{
    char src[] = "hello";
    char dst[20];
    size_t  len;
    char *ret1;
    char *ret2;
    
    len = 5;

    ret1 = ft_memmove(dst, src, len);
    ret2 = memmove(dst, src, len);

    printf("mi función ft_memmove es: %s\n", ret1);
    printf("la original memmove es: %s\n", ret2);
    return(0);
} */
