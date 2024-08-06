/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfabel <lfabel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:09:24 by lfabel            #+#    #+#             */
/*   Updated: 2024/06/16 14:20:30 by lfabel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (!(c >= 48 && c <= 57))
		return (0);
	return (1);
}
/*
#include <stdio.h>

int  main(void)
{
	char a[] = "125g99";
	printf("%d", ft_str_is_numeric(a));
	return (0);
}
*/