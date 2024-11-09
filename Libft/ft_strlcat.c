/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vluo <vluo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:30:19 by vluo              #+#    #+#             */
/*   Updated: 2024/11/09 17:04:34 by vluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

int	ft_strlcat(char *dst, char *src, int siz)
{
	int	i;
	int	j;
	int	lendst;

	lendst = ft_strlen(dst);
	if (siz > ft_strlen(dst))
	{
		i = 0;
		j = 0;
		while (dst[i])
			i ++;
		while (src[j] && i < siz)
			dst[i ++] = src[j ++];
		dst[siz] = 0;
	}
	if (siz < lendst)
		return (ft_strlen(src) + siz);
	return (ft_strlen(src) + lendst);
}
