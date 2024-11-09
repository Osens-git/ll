/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vluo <vluo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:47:30 by vluo              #+#    #+#             */
/*   Updated: 2024/11/09 17:04:12 by vluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

static char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	substr = malloc(len * sizeof(char));
	if (substr == 0)
		return (0);
	i = 0;
	while (s[start] && i < len)
	{
		substr[i] = s[start + i];
		i ++;
	}
	return (substr);
}

static int	len_spli(char const *s, char c)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (s[i] && s[i] == c)
		i ++;
	while (i < ft_strlen(s) - 1)
	{
		if (s[i] == c && s[i + 1] != c)
			len ++;
		i ++;
	}
	return (len + 1);
}

static char	**sp_vide(void)
{
	char	**sp_vide;

	sp_vide = malloc(1 * sizeof(char *));
	if (sp_vide == 0)
		return (0);
	sp_vide[0] = 0;
	return (sp_vide);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		start;
	int		j;
	char	**sp;

	if (s[0] == '\0')
		return (sp_vide());
	sp = malloc((len_spli(s, c) + 1) * sizeof(char *));
	if (sp == 0)
		return (0);
	start = 0;
	i = 0;
	j = 0;
	while (i < ft_strlen(s))
	{
		while (s[i] && s[i] != c)
			i ++;
		if (start != i)
			sp[j ++] = ft_substr(s, start, i - start);
		start = ++ i;
	}
	sp[j] = 0;
	return (sp);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *s = "";
// 	char c = 'o';
// 	char **sp = ft_split(s, c);
// 	printf("%d\n", len_spli(s, c));
// 	int i = 0;
// 	while (sp[i] != 0)
// 		printf("%s\n", sp[i ++]);
// }
