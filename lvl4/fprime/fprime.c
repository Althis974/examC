/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fprime.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/04 16:38:26 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2017/12/05 09:43:17 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	fprime(int n)
{
	int div;

	div = 2;
	if (n == 1)
		printf("1");
	if (n <= 1)
		return ;
	while (div <= n)
	{
		if (n % div == 0)
		{
			printf("%d", div);
			if (n == div)
				return ;
			printf("*");
			n = n / div;
			div = 1;
		}
		div++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		fprime(atoi(av[1]));
	}
	printf("\n");
	return (0);
}
