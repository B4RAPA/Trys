/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfabel <lfabel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:57:30 by lfabel            #+#    #+#             */
/*   Updated: 2024/08/06 11:25:54 by lfabel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/lfabel/Documents/Projects/libftprintf/includes/libft.h"

void	*ft_memset( void *ptr, int value, size_t num )
{
	size_t	i;

	i = 0;
	while (i < num)
	{
		((unsigned char *)ptr)[i] = ((unsigned char )value);
		i++;
	}
	return (ptr);
}
