/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 19:25:22 by alejarod          #+#    #+#             */
/*   Updated: 2022/09/29 19:51:35 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
Allocate (with malloc(3)) and returns a new string (ending with ’\0’)
representing the integer n given as argument. Negative numbers must be
supported. If the allocation fails, the function returns NULL.
---------------------------------------------------------------------------- */

static int	ft_intlen(long n)
{
	//it is important to use "unsigned" to use n_len-- that stops at 0.
	unsigned long	n_len;	

	n_len = 0;
	if (n == 0)
		n_len++;
	if (n < 0)
	{
		n = n * -1;
		n_len++;
	}
	while (n > 0)
	{
		n = n / 10;
		n_len++;
	}
	return (n_len);
}

static char	*ft_write_number(char *ptr, unsigned long n_len, long n)
{
	if (n == 0)
		*ptr = '0';
	if (n < 0)
	{
		*ptr = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		*(ptr + --n_len) = (n % 10) + '0';	//assign remainder (module) of n to a position
		n = n / 10;							//divide n / 10 and continue
	}
	return (ptr);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		n_len;

	n_len = ft_intlen(n);
	ptr = (char *)malloc(sizeof(char) * n_len + 1);	// always add +1 for the '\0' char.
	if (!ptr)
		return (0);
	ptr = ft_write_number(ptr, n_len, n);
	*(ptr + n_len) = '\0';	//assign '\0' to the end of the string
	return (ptr);
}

/* int main(void)
{
    int n;
    char *ret;

    n = -123;
    ret = ft_itoa(n);
    printf("%s\n", ret);
} */
