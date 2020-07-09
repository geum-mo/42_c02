/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 14:08:51 by gekang            #+#    #+#             */
/*   Updated: 2020/07/08 20:13:17 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void				ft_putchar(char c)
{
	write(1, &c, 1);
}

void				ft_convert_dec_to_hex(char c)
{
	int				result;
	int				remainder;
	unsigned char	t;

	t = (unsigned char)c;
	result = t / 16;
	remainder = t % 16;
	write(1, "\\", 1);
	if (result > 9)
		ft_putchar(result + 87);
	else
		ft_putchar(result + '0');
	if (remainder > 9)
		ft_putchar(remainder + 87);
	else
		ft_putchar(remainder + '0');
}

void				ft_putstr_non_printable(char *str)
{
	int				i;

	i = 0;
	while (str[i] != '\0')
	{
		if (31 < str[i] && str[i] < 127)
			ft_putchar(str[i]);
		else
			ft_convert_dec_to_hex(str[i]);
		i++;
	}
}
