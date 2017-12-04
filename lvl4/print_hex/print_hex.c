/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 14:39:57 by rlossy            #+#    #+#             */
/*   Updated: 2017/11/21 09:32:11 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex(unsigned int n)
{
	char hexa[16] = "0123456789abcdef";

	if (n >= 16)
		print_hex(n / 16);
	ft_putchar(hexa[n % 16]);
}
int		ft_atoi(char *s)
{
	int i;
	long res;
	int sign;

	i = 0;
	res = 0;
	sign = 1;
	while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '-')
		sign = -1;
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = (res + (s[i] - '0')) * 10;
		i++;
	}
	return (res / 10 * sign);
}

int		main(int ac, char **av)
{
	int		nb;

	if (ac == 2)
	{
		if ((nb = ft_atoi(av[1])) > 0)
			print_hex(nb);
	}
	write(1, "\n", 1);
	return (0);
}
