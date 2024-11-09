/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vluo <vluo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:03:32 by vluo              #+#    #+#             */
/*   Updated: 2024/11/07 18:17:23 by vluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s);
		s ++;
	}
	if (c == '\0')
		return (s);
	return (0);
}

char	*ft_strrchr(char *s, int c)
{
	if (ft_strchr(s, c) == 0)
		return (0);
	if (s[0] == '\0')
		return (s);
	if (ft_strchr(s, c) != 0 && ft_strchr(++s, c) == 0)
		return (--s);
	return (ft_strrchr(s, c));
}

// #include <stdio.h>
// int main(void)
// {
// 	char *s = "Helelo";
// 	int c = 'l';
// 	printf("%s", ft_strrchr(s, c));
// }
