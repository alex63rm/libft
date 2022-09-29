/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:19:58 by alejarod          #+#    #+#             */
/*   Updated: 2022/09/28 22:58:54 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The memset() function writes "len" bytes of value "c" (converted to an unsigned
char) to the string "b". The memset() function returns its first argument.
It fills the string b with int c as a char n bytes.
---------------------------------------------------------------------------- */

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*aux;

	aux = b;
	i = 0;
	while (i < len)
	{
		*(aux + i) = (unsigned char) c;
		i++;
	}
	return ((void *)aux);
}

/* int	main(void)
{
	size_t n;
	int	c;
	char tab[100];
	char *ret1;
	char *ret2;

	n = 42;
	c = 'A';
	memset(tab, 0, 100);
	
	ret1 = ft_memset(tab, c, n); 
	ret2 = memset(tab, c, n);

	printf("ft %c\n", ret1[42]);
	printf("or %c\n", ret2[42]);
	return (0);
} */
