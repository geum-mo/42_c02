/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 16:32:52 by gekang            #+#    #+#             */
/*   Updated: 2020/07/08 19:33:52 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_getlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int src_len;

	i = 0;
	src_len = ft_getlen(src);
	while (i < n)
	{
		if (src_len >= n)
		{
			dest[i] = src[i];
		}
		else
		{
			if (i < src_len)
			{
				dest[i] = src[i];
			}
			else
				dest[i] = '\0';
		}
		i++;
	}
	return (dest);
}
