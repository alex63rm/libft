/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:20:18 by alejarod          #+#    #+#             */
/*   Updated: 2022/09/28 23:30:37 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The toupper() function converts a lower-case letter to the corresponding upper-
case letter.  The argument must be representable as an unsigned char or the
value of EOF.
If the argument is a lower-case letter, the toupper() function returns the
corresponding upper-case letter if there is one; otherwise, the argument is
returned unchanged.
---------------------------------------------------------------------------- */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{	
		c = c - 32;
		return (c);
	}
	else
		return (c);
}

/* int	main(void)
{
	int	c;
	int	ret1;
	int	ret2;

	c = 111;
	ret1 = ft_toupper(c);
	ret2 = toupper(c);
	printf("%d\n", ret1);
	printf("%d\n", ret2);
	return (0);
}
 */
