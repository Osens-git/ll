/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vluo <vluo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:20:18 by vluo              #+#    #+#             */
/*   Updated: 2024/11/08 17:32:44 by vluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

char	*ft_strdup(char *s)
{
	char	*dup;
	int		i;

	dup = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (dup == 0)
		return (0);
	i = 0;
	while (s[i])
		dup[i] = s[i ++];
	dup[i] = '\0';
	return (dup);
}
