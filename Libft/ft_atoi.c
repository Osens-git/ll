/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vluo <vluo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:33:43 by vluo              #+#    #+#             */
/*   Updated: 2024/11/08 17:29:47 by vluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	res;
	int	i;
	int	signe;

	i = 0;
	res = 0;
	signe = 1;
	while (str[i] && (str[i] == 32 || (str[i] >= 8 && str[i] <= 13)))
		i ++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			signe = -1;
		i ++;
	}
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		res = (res * 10) + (str[i] - '0');
		i ++;
	}
	return (res * signe);
}
// #include <stdio.h>
// int main(void)
// {
// 	printf("%d", ft_atoi("-2147483648"));
// }
