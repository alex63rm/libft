/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 12:39:01 by alejarod          #+#    #+#             */
/*   Updated: 2022/09/28 23:30:16 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
Allocates (with malloc) and returns a new substring from the string s. The
substring begins at index start and is of size len. If start and len aren’t
refering to a valid substring, the behavior is undefined.
If the allocation fails, the function returns NULL.
---------------------------------------------------------------------------- */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned long	i;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s); // string lenght will be copied at most
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (0);
	i = 0;
	while (s[start] && (i < len))
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/* int main(void)
{
	char	s[] = "HelloWorld";
	unsigned int start = 4;
	size_t	len = 8;
	char *ret1;

	ret1 = ft_substr(s, start, len);
	printf("%s\n", ret1);

	return(0);
} */
