/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:09:00 by alejarod          #+#    #+#             */
/*   Updated: 2022/09/28 22:54:16 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
Allocates (with malloc(3)) and returns a new element. The variable content is
initialized with the value of the parameter content. The variable next is
initialized to NULL.
If the allocation fails, the function returns NULL.
---------------------------------------------------------------------------- */

t_list	*ft_lstnew(void *content)			// this functioncreats a new node
{
	t_list	*new;	// first we define a node of type t_list (see libft.h)

	new = (t_list *)malloc(sizeof(t_list));		// allocate empty memory for the node
	if (new == 0)
		return (0);
	new->content = content;		// fill the data area of the node. Same as (*new).content = content
	new->next = 0;				// point to the next node. Same as (*new).next = 0
	return (new);
}
