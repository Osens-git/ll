/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vluo <vluo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:08:18 by vluo              #+#    #+#             */
/*   Updated: 2024/11/09 17:04:27 by vluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*strj;

	strj = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (strj == 0)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
		strj[j ++] = s1[i ++];
	i = 0;
	while (s2[i])
		strj[j ++] = s2[i ++];
	strj[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (strj);
}
