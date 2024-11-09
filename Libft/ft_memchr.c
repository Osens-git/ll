/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vluo <vluo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:24:15 by vluo              #+#    #+#             */
/*   Updated: 2024/11/07 18:27:40 by vluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memchr(void *s, int c, int n)
{
	unsigned char	*p;
	int				i;

	p = s;
	while (n > 0)
	{
		if (p[0] == c)
			return (p);
		n --;
		p ++;
	}
	return (0);
}
