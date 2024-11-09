/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vluo <vluo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:25:20 by vluo              #+#    #+#             */
/*   Updated: 2024/11/08 17:26:30 by vluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*calloc(int nmemb, int size)
{
	void	*res;
	int		i;

	if ((nmemb == 2147483647 && size == 2147483647) || nmemb * size < 0)
		return (0);
	res = malloc(nmemb * size);
	if (res == 0)
		return (0);
	if (nmemb == 0 || size == 0)
		return (malloc(1));
	return (res);
}

// #include <stdio.h>
// #include <limits.h>
// int main(int argc, char **argv)
// {	
// 	if (ft_atoi(argv[1]) * ft_atoi(argv[2])  < 0)
// 		printf("1\n");
// 	printf("qq %d\n",ft_atoi(argv[1]) * ft_atoi(argv[2]));
// 	printf("0\n");
// 	printf("%lu\n", sizeof(1));
// 	return (argc - argc);
// }