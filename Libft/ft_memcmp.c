/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vluo <vluo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:28:13 by vluo              #+#    #+#             */
/*   Updated: 2024/11/07 18:32:56 by vluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	memcmp(const void *s1, const void *s2, int n)
{
	unsigned char	*so;
	unsigned char	*st;
	int				i;

	if (n == 0)
		return (0);
	so = s1;
	st = s2;
	while (i < n)
	{
		if (so[i] != st[2])
			return (so[i] - st[i]);
		i ++;
	}
	return (0);
}
