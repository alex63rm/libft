/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:19:51 by alejarod          #+#    #+#             */
/*   Updated: 2022/09/28 22:56:30 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The memcmp() function compares the first n bytes (each interpreted as unsigned
char) of the memory areas s1 and s2.
The function returns an integer less than, equal to, or greater than zero if
the first n bytes of s1 is found, respectively, to be less than, to match, or
be greater than the first n bytes of s2.
For a nonzero return, the sign is determined by the sign of the difference
between the first pair of bytes (interpreted as unsigned char) that differ in
s1 and s2. If n is zero, the return value is zero.
---------------------------------------------------------------------------- */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*aux1;
	unsigned char	*aux2;

	aux1 = (unsigned char *)s1;
	aux2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (*(aux1 + i) != *(aux2 + i))
			return (*(aux1 + i) - *(aux2 + i));
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char	*s1;
	char	*s2;
	size_t	n;
	int	ret1;
	int	ret2;

	s1 = "abc\0\0";
	s2 = "abc\0a";
	n = 10;
	ret1 = ft_memcmp(s1, s2, n);
	ret2 = memcmp(s1, s2, n);
	printf("%d\n", ret1);
	printf("%d\n", ret2);
	return (0);
} */
