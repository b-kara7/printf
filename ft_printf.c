/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:04:09 by betul             #+#    #+#             */
/*   Updated: 2025/07/19 15:01:51 by bkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(char format, va_list args)
{
	if (format == '%')
		return (ft_putchar('%'));
	else if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'u')
		return (ft_unsigned(va_arg(args, unsigned int)));
	else if (format == 'x' || format == 'X')
		return (ft_hex(va_arg(args, unsigned int), format));
	else if (format == 'p')
		return (ft_print_ptr(va_arg(args, void *)));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
			{
				i++;
				count += ft_format(format[i], args);
			}
		}
		else
			count += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
