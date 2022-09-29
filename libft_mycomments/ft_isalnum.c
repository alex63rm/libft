/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:13:02 by alejarod          #+#    #+#             */
/*   Updated: 2022/09/28 22:49:07 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The isalnum() function tests for any character for which isalpha or isdigit is
true. The value of the argument must be representable as an unsigned char or
the value of EOF.
The isalnum() function returns zero if the character tests false and returns
non-zero if the character tests true.
---------------------------------------------------------------------------- */

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (c);
	else
		return (0);
}

/* int	main(void)
{
	int	c;
	int	ret1;
	int	ret2;

	c = '9';
	ret1 = ft_isalnum(c);
	ret2 = isalnum(c);
	printf("%d\n", ret1);
	printf("%d\n", ret2);
	return (0);
} */
