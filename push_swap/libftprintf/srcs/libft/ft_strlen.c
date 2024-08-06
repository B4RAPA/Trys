/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfabel <lfabel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:05:37 by lfabel            #+#    #+#             */
/*   Updated: 2024/08/06 11:25:09 by lfabel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/lfabel/Documents/Projects/libftprintf/includes/libft.h"

size_t	ft_strlen(char const *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
