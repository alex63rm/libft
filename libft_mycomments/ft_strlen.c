/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:20:04 by alejarod          #+#    #+#             */
/*   Updated: 2022/09/28 23:21:12 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The strlen() function calculates the length of the string pointed
to by str, excluding the terminating null byte ('\0').The strlen()
function returns the number of bytes.
---------------------------------------------------------------------------- */

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/* int	main (void)
{
	char array1[] = "12345";
	printf("%zu\n", ft_strlen(array1));
	printf("%zu\n", strlen(array1));
	return (0);
} */
