/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 16:30:48 by gtroiano          #+#    #+#             */
/*   Updated: 2023/08/13 17:45:06 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

static int	ft_eval_format(va_list ap, char s, int len)
{
	if (s == 'c')
		len = ft_putchar(va_arg(ap, int), len);
	else if (s == 's')
		len = ft_putstr(va_arg(ap, char *), len);
	else if (s == '%')
		len = ft_putchar(s, len);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;
	int		i;

	if (!format)
		return (0);
	va_start(ap, format);
	len = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
			len = ft_eval_format(ap, format[++i], len);
		else
			len = ft_putchar(format[i], len);
		i++;
	}
	va_end(ap);
	return (len);
}
