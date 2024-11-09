/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vluo <vluo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:37:52 by vluo              #+#    #+#             */
/*   Updated: 2024/11/09 16:37:52 by vluo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i ++;
	}
}

void ft_itoa(int n, int fd)
{
	if (n == 0)
		return ;
	ft_itoa(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n == -2147483648)
			return (ft_putstr_fd("-2147483648", fd));
		n = -n;
		ft_putchar_fd('-', fd);
		return (ft_itoa(n, fd));
	}
	if (n == 0)
		return (ft_putchar_fd('0', fd));
	return (ft_itoa(n, fd));
}

// int main(void)
// {
// 	ft_putnbr_fd(0, 1);
// }