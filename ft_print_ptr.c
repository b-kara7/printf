/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:41:08 by bkara             #+#    #+#             */
/*   Updated: 2025/07/16 20:04:12 by bkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_ptr(void *ptr)
{
	int	count;

	count = 0;
	count += ft_putstr("0x");
	count += ft_putptr((unsigned long)ptr);
	return (count);
}
