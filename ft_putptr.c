/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:40:35 by bkara             #+#    #+#             */
/*   Updated: 2025/07/17 14:01:58 by bkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long ptr)
{
	int	count;

	count = 0;
	if (ptr >= 16)
		count += ft_putptr(ptr / 16);
	count += ft_putchar("0123456789abcdef"[ptr % 16]);
	return (count);
}
