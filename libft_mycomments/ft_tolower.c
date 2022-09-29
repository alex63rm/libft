/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:20:15 by alejarod          #+#    #+#             */
/*   Updated: 2022/09/28 23:30:28 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The tolower() function converts an upper-case letter to thecorresponding lower-
case letter.  The argument must be representable as an unsigned char or the
value of EOF.
If the argument is an upper-case letter, the tolower() function returns the
corresponding lower-case letter if there is one; otherwise, the argument is
returned unchanged.
---------------------------------------------------------------------------- */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{	
		c = c + 32;
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

	c = 86;
	ret1 = ft_tolower(c);
	ret2 = tolower(c);
	printf("%d\n", ret1);
	printf("%d\n", ret2);
	return (0);
} */
