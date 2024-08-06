/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helpers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfabel <lfabel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 09:53:04 by lfabel            #+#    #+#             */
/*   Updated: 2024/08/06 11:28:28 by lfabel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(const char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	if (!str)
	{
		count += write(1, "(null)", 6);
		return (count);
	}
	while (str[i])
	{
		write (1, &str[i], 1);
		count++;
		i++;
	}
	return (count);
}

int	ft_print_char(const char c)
{
	int	counter;

	counter = 0;
	write(1, &c, 1);
	counter++;
	return (counter);
}

size_t	ft_strlen(char const *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
