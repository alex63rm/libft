/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:15:14 by alejarod          #+#    #+#             */
/*   Updated: 2022/09/28 22:49:26 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The isascii() function tests checks whether c is a 7-bit unsigned char value 
that fits into the ASCII character set, i.e., from 0 to 127. The function 
returns zero if the character tests false and returns non-zero if the character
tests true.
---------------------------------------------------------------------------- */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	int	c;
	int	ret1;
	int	ret2;

	c = 0;
	ret1 = ft_isascii(c);
	ret2 = isascii(c);
	printf("%d\n", ret1);
	printf("%d\n", ret2);
	return (0);
} */

