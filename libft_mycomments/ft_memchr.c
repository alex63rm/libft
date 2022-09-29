/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:56:35 by alejarod          #+#    #+#             */
/*   Updated: 2022/09/28 22:56:16 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The memchr() function scans the initial n bytes of the memory area pointed to
by s for the first instance of c. Both c and the bytes of the memory area
pointed to by s are interpreted as unsigned char.
The functions return a pointer to the matching byte or NULL if the character
does not occur in the given memory area.
---------------------------------------------------------------------------- */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*aux;

	aux = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (aux[i] == (unsigned char)c)	// cast int c as a char
			return ((void *)aux[i]);	// cast it back to (void *)
		i++;
	}
	return (0);
}

/* int main(void)
{
    const char array1[] = "hello.myhome.back";
    int c;
    size_t n;
    const char    *ret1;
    const char    *ret2;
    
    c = '.';
    n = 8;
    ret1 = ft_memchr(array1, c, n);
    ret2 = memchr(array1, c, n);
    printf("%s\n", ret1);
    printf("%s\n", ret2);
    return 0;
} */
