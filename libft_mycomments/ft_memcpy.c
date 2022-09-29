/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:19:54 by alejarod          #+#    #+#             */
/*   Updated: 2022/09/28 22:58:06 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
**--Better use memmove()--**
The memccpy() function copies bytes from string "src" to string "dst".
If the character "c" (as converted to an unsigned char) occurs in the
string "src", the copy stops and a pointer to the byte after the copy
of "c" in the string dst is returned.  Otherwise, n bytes are copied,
and a NULL pointer is returned.
The source and destination strings should not overlap, as the
behavior is undefined.
---------------------------------------------------------------------------- */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*auxdst;
	const char	*auxsrc;

	auxdst = dst;
	auxsrc = src;
	if (!dst && !src)
		return (dst);
	i = 0;
	while (i < n)	// we can also use n--, the loop will end at 0 since size_t is of type unsigned long int
	{
		auxdst[i] = auxsrc[i];
		i++;
	}
	return (dst);
}

/* int	main(void)
{
	char	dest[100]; 
	char	src[] = "tomorrow I am going to 42 bbq";
	size_t	n;
	char	*ret1;
	char	*ret2;

	n = sizeof(src); // con esto copio todo
	// n = 20, con estoy copio los 20 primeros bytes
	
	ret1 = ft_memcpy(dest, src, n);
	ret2 = memcpy(dest, src, n);
	printf("%s\n", ret1);
	printf("%s\n", ret2);
	return (0);	
} */
