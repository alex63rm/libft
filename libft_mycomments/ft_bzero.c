/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:12:57 by alejarod          #+#    #+#             */
/*   Updated: 2022/09/28 22:12:33 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The bzero() function writes n zeroed bytes to the string s. Effectively erases
all data by writing zeros (bytes containing '\0').
If n is zero, bzero() does nothing.
---------------------------------------------------------------------------- */

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
