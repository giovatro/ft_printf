/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 16:30:48 by gtroiano          #+#    #+#             */
/*   Updated: 2023/08/10 14:18:34 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


static void	ft_format(char s, va_list ap, int len, int i)
{
	if (s == 'c')
		f_putchar(va_arg(ap, char)

	else if
		ft_putstr(va_arg(ap, char *), len);
	else if (s == 'c')

}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		len;
	
	va_start(ap, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == %)
		{
			i++;
			ft_format(str[i], ap, len, i);
		}
		else
		{
			//ft_putchar(...);
		}
	}
	va_end(ap);
	return (len);
}
