/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 10:26:06 by rlossy            #+#    #+#             */
/*   Updated: 2017/11/20 09:38:33 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		checkchar(char *s, char c, int len)
{
	int i;

	i = 0;
	while (s[i] && (i < len || len == -1))
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			if (!(checkchar(av[1], av[1][i], i)) && checkchar(av[2], av[1][i], -1))
				write (1, av[1] + i, 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
