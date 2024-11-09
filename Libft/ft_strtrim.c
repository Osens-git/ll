/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vluo <vluo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:24:10 by vluo              #+#    #+#             */
/*   Updated: 2024/11/08 17:27:19 by vluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
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

int	in_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i ++;
	}
	return (0);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;
	size_t	i;

	i = 0;
	while (s1[i] && in_set(s1[i], set))
		i ++;
	start = i;
	i = ft_strlen(s1) - 1;
	while (i > 0 && in_set(s1[i], set))
		i --;
	len = i - start + 1;
	return (ft_substr(s1, start, len));
}

// #include <stdio.h>
// int main(void)
// {
// 	char *s = "     HEaLLO  a  ";
// 	char *set = " ";

// 	printf("|%s|", ft_strtrim(s, set));
// }