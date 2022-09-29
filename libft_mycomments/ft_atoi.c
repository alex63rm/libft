/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:12:46 by alejarod          #+#    #+#             */
/*   Updated: 2022/09/28 22:13:21 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The atoi() function converts the initial portion of the string pointed by str
to int representation.
------------------------------------------------------------------------------*/

int	ft_atoi(const char *str)
{
	// 3 steps: 1. check spaces 2. check sign 3. Recursive numbers
	int	i;
	int	sign;
	int	num;	//counter of 100, 10 etc. It starts when it finds a digit

	sign = 1;
	num = 0;
	i = 0;
	// "man isspace" to check:
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;						// check the sign and move forward
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - '0';	// convert the individual char number into int
		i++;
	}
	return (num * sign);
}

/* int	main(void)
{
	char	str[] = "87a654";
	int	ret1;
	int	ret2;

	ret1 = ft_atoi(str);
	ret2 = atoi(str);
	printf("%d\n", ret1);
	printf("%d\n", ret2);
	return(0);
} */
