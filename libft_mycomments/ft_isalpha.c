/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:13:06 by alejarod          #+#    #+#             */
/*   Updated: 2022/09/28 22:49:17 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The isalpha() function tests for any character for which isupper or islower is
 true. The value of the argument must be representable as an unsigned char or
 the value of EOF.
 The isalpha() function returns zero if the character tests false and returns
 non-zero if the character tests true.
---------------------------------------------------------------------------- */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (c);
	else
		return (0);
}

/* int	main(void)
{
	int	c;
	int	ret1;
	int	ret2;
	c = 'B';

	ret1 = ft_isalpha(c);
	ret2 = isalpha(c);
	printf("%d\n", ret1);
	printf("%d\n", ret2);
	
	return (0);
}
 */
