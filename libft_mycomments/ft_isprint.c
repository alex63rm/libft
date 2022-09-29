/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:19:45 by alejarod          #+#    #+#             */
/*   Updated: 2022/09/28 22:49:43 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The isprint() function tests for any printing character, including space (‘ ’).
The value of the argument must be representable as an unsigned char or the
value of EOF.
Function returns zero if the character tests false and returns non-zero if
tests true.
---------------------------------------------------------------------------- */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (c);
	else
		return (0);
}

/* int	main(void)
{
	int	c;
	int	ret1;
	int	ret2;

	c = 26;
	ret1 = ft_isprint(c);
	ret2 = isprint(c);
	printf("%d\n", ret1);
	printf("%d\n", ret2);
} */

