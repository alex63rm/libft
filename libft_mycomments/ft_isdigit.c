/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:16:49 by alejarod          #+#    #+#             */
/*   Updated: 2022/09/28 22:49:35 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The isdigit() function tests for a decimal digit character. Regardless of
locale, this includes the following characters only: '0' through'9'. The
function returns zero if the character tests false and returns non-zero if the
character tests true.
The value of the argument must be representable as an unsigned char or the
value of EOF.
The isnumber() function behaves similarly to isdigit(), but may recognize
additional characters, depending on the current locale setting.
---------------------------------------------------------------------------- */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (c);
	else
		return (0);
}

/* int	main(void)
{
	int	c;
	int	ret1;
	int	ret2;

	c = '0';
	ret1 = ft_isdigit(c);
	ret2 = isdigit(c);
	printf("%d\n", ret1);
	printf("%d\n", ret2);
	return (0);
} */

