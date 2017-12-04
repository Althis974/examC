/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 10:38:34 by rlossy            #+#    #+#             */
/*   Updated: 2017/11/20 09:39:27 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		pgcd(int nb1, int nb2)
{
	int i;
	int p;

	if (nb1 < 0 || nb2 < 0)
		return 0;
	if (nb1 == 1)
		return 1;
	i = 1;
	while (i < nb1)
	{
		if (nb1 % i == 0 && nb2 % i == 0)
			p = i;
		i++;
	}
	return (p);
}

int		main(int ac, char **av)
{
	int res;

	if (ac == 3)
	{
		res = pgcd(atoi(av[1]), atoi(av[2]));
		if (res <= 0)
		{
			printf("%c", '\n');
			return 1;
		}
		else
			printf("%d", res);
	}
	printf("%c", '\n');
	return 0;
}
