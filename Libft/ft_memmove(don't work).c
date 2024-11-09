/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vluo <vluo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:40:50 by vluo              #+#    #+#             */
/*   Updated: 2024/11/08 17:34:15 by vluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memmove(void *dest, void *src, int n)
{
	unsigned char	temp;
	unsigned char	*d;
	unsigned char	*s;
	int				i;

	d = dest;
	s = src;
	i = 0;
	while (i < n)
	{
		temp[i] = s[i];
		i ++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = temp[i];
		i ++;
	}
	return (dest);
}
