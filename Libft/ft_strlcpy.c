/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vluo <vluo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:43:47 by vluo              #+#    #+#             */
/*   Updated: 2024/11/09 17:04:37 by vluo             ###   ########.fr       */
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

int	ft_strlcpy(char *dst, char *src, int siz)
{
	int	i;

	if (siz > 0)
	{	
		i = 0;
		while (i < siz && src[i])
		{
			dst[i] = src[i];
			i ++;
		}
		dst[siz] = 0;
	}
	return (ft_strlen(src));
}
