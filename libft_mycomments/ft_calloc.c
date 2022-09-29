/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:58:27 by alejarod          #+#    #+#             */
/*   Updated: 2022/09/28 22:48:56 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The calloc() function contiguously allocates enough space for "count" objects
that are "size" bytes of memory each and returns a pointer to the allocated
memory. The allocated memory is filled with bytes of value zero.
If there is an error, they return a NULL  pointer.
---------------------------------------------------------------------------- */

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(size * count);
	if (!ptr)
		return (0);
	ft_memset(ptr, 0, size * count);
	return (ptr);
}

/* int main(void)
{
    size_t count = 40;  //elementos
    size_t size = 1;   // son chars
    
    char *ret1;
    char *ret2;
    
    ret1 = ft_calloc(count, size);
    ret2 = calloc(count, size);

    printf("%s\n", ret1);
    printf("%s\n", ret2);
    return (0);
    
} */

